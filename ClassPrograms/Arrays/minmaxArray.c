#include<stdio.h>
void main(){
    int arr[10],n,i,min,max;
    // read array size
    printf("Enter array size:");
    scanf("%d",&n);
    // read array elements
    for(i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);
    //calculating min and max values
    min=arr[0];
    max=arr[0];
    for(i=0;i<=n-1;i++){
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    //display max and min elements
    printf("Minimum element=%d \nMaximum element=%d",min,max);
}