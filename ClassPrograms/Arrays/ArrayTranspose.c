#include<stdio.h>
void main(){
    int arr[10][10],i,j,r,c;
    printf("Enter Array Size:");
    scanf("%d%d",&r,&c);
    printf("Enter %dx%d Array:",r,c);
    for(i=0;i<=r-1;i++)
        for(j=0;j<=c-1;j++)
            scanf("%d",&arr[i][j]);
    printf("Given Array is:\n");
    for(i=0;i<=r-1;i++){
        for(j=0;j<=c-1;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("Transpose of Given Array:\n");
    for(i=0;i<=c-1;i++){
        for(j=0;j<=r-1;j++)
            printf("%d\t",arr[j][i]);
        printf("\n");
    }
}