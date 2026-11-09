#include<stdio.h>
void main(){
    int arr[10][10],i,j,row,col;
    printf("Enter Array Size:");
    scanf("%d%d",&row,&col);
    printf("Identity Matrix is:\n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j)
                printf("1\t");
            else
                printf("0\t");
        }
        printf("\n");
    }
}