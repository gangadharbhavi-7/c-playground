#include<stdio.h>

int string_length(char str[]){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}

int compare_strings(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]!=str2[i]){
            return 0;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0'){
        return 1;
    }
    return 0;
}

void concatenate_strings(char str1[],char str2[],char result[]){
    int i=0,j=0;
    while(str1[i]!='\0'){
        result[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        result[i]=str2[j];
        i++;
        j++;
    }
    result[i]='\0';
}

int main(){
    char str1[100],str2[100],result[200];
    printf("Enter the first string: ");
    fgets(str1,100,stdin);
    printf("Enter the second string: ");
    fgets(str2,100,stdin);
    printf("Length of the first string: %d\n",string_length(str1));
    printf("Length of the second string: %d\n",string_length(str2));
    if(compare_strings(str1,str2)){
        printf("The strings are equal.\n");
    }else{
        printf("The strings are not equal.\n");
    }
    concatenate_strings(str1,str2,result);
    printf("concatenated string: %s\n",result);
    return 0;
    }

