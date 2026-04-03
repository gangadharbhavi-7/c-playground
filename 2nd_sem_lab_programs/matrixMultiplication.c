#include<stdio.h>
int main(){
    int x[10][10],y[10][10],z[10][10];
    int m,n,p,q;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }
    printf("Enter the elements of the first matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&x[i][j]);

        }
    }
    printf("Enter the elements of the second matrix: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&y[i][j]);
            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            z[i][j]=0;
            for(int k=0;k<n;k++){
                z[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
    printf("The product of the two matrices is: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
    return 0;

}