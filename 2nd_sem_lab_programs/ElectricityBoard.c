#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    if(units<=200){
        bill=units*0.80;

    }else if(units>200 && units<=300){
        bill=200*0.80+(units-200)*0.90;
    }
    else if(units>300){
        bill=200*0.80+100*0.90+(units-300)*1.00;

    }
    else{
        printf("Invalid input for units consumed.\n");
        return 1;
    }
    if(bill<100){
        bill=100;
    }
    if(bill>400){
        bill=bill+bill*0.15;
    }
    printf("The total electricity bill is : %.2f\n",bill);
    return 0;
    
}