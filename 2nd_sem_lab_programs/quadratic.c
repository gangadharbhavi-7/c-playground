#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the coefficients a, b and c of the quadratic equation ax^2+bx+c=0: ");
    scanf("%d %d %d",&a,&b,&c);
    int d=b*b-4*a*c;
    if(d>0){
        float r1=(-b+sqrt(d))/(2*a);
    float r2=(-b-sqrt(d))/(2*a);
    printf("The roots are real and distinct.\n");
printf("The roots are %.2f and %.2f",r1,r2);
        }
    else if (d==0){
        float r=-b/(2*a);
        printf("The roots are real and equal.\n");
        printf("The root is %.2f",r);


    }    
    else{
        printf("The roots are complex and imaginary.");
        float real=-b/(2*a);
        float imag=sqrt(-d)/(2*a);
        printf("The roots are imaginary and complex.\n");
        printf("The roots are %.2f + %.2fi and %.2f - %.2fi",real,imag,real,imag);
    }
    return 0;
}