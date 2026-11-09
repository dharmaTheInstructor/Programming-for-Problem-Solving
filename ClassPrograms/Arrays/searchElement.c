#include<stdio.h>
void main(){
    int arr[10],n,i,key,count=0;
    // read array size
    printf("Enter array size:");
    scanf("%d",&n);
    // read array elements
    for(i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);
    //enter key element to search
    printf("Enter key element:");
    scanf("%d",&key);
    //search the element
    for(i=0;i<=n-1;i++){
        if(key==arr[i]){
            count++;
            break;
        }
    }
    if(count==0)
        printf("%d element not found in the array",key);
    else
        printf("%d element is found at position %d",key,i);
}