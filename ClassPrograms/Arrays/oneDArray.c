#include<stdio.h>
void main(){
    int arr[10],i,n;
    //read array size
    printf("Enter Array Size:");
    scanf("%d",&n);
    //read array elements
    printf("Enter %d elements:",n);
    for(i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);
    //display array elements
    printf("Display Array Elements:\n");
    for(i=0;i<=n-1;i++)
        printf("%d\t",arr[i]);
}