#include<stdio.h>
struct student{
    char name[50];
    float marks;
};
int main(){
    struct student s[100];
    int n,i;
    float sum=0.0,average;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name and marks of student %d: ",i+1);
        scanf("%s %f",s[i].name,&s[i].marks);
        sum+=s[i].marks;

    }
    average=sum/n;
    printf("Average marks: %.2f\n",average);
    printf("students who scored above average:\n");
    for(i=0;i<n;i++){
        if(s[i].marks>average){
            printf("%s\n",s[i].name);
        }
        else{
            printf("There are no students who scored above average.\n");
        }
    }
    return 0;
}