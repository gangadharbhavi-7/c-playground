#include<stdio.h>
int main(){
    char name[10];
printf("Enter the name: ");
scanf("%[^\n]",name);
printf(name);
}