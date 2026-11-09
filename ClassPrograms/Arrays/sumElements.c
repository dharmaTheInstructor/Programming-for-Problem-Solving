#include<stdio.h>
void main(){
    int arr[10],i,n,sum=0;
    //read array size
    printf("Enter Array Size:");
    scanf("%d",&n);
    //read array elements
    printf("Enter %d elements:",n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    //display the sum of array elements
    printf("Sum of array elements is %d",sum);
}