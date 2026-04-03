#include<stdio.h>
int main(){
    int key,low,high,n,num[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in sorted order: ");
    for(int i=0;i<n;i++){

        scanf("%d",&num[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&key);
    high=n-1;
    low=0;
    while(low<=high){git
        int mid=(low+high)/2;
        
        if(num[mid]==key){
            printf("Element found at index %d\n",mid);
            return 0;
        }
        else if(num[mid]<key){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    printf("Element not found in the array.\n");
    return 0;
}