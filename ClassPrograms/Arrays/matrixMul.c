#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c[10][10]={0},r1,c1,r2,c2,i,j,k;
    // Read matrix-1 size
    printf("Enter Array-1 Size:");
    scanf("%d%d",&r1,&c1);
    // Read matrix-2 size
    printf("Enter Array-2 Size:");
    scanf("%d%d",&r2,&c2);
    if(c1==r2){
        //Reading Matrix-1 elements
        printf("Enter matrix-1 with %dx%d size:\n",r1,c1);
        for(i=0;i<=r1-1;i++)
            for(j=0;j<=c1-1;j++)
                scanf("%d",&a[i][j]);
        //Reading Matrix-2 elements
        printf("Enter matrix-2 with %dx%d size:\n",r2,c2);
        for(i=0;i<=r2-1;i++)
            for(j=0;j<=c2-1;j++)
                scanf("%d",&b[i][j]);
        //perform matrix multiplication
        for(i=0;i<=r1-1;i++)
            for(j=0;j<=c2-1;j++)
                for(k=0;k<=c1-1;k++)
                    c[i][j]+=a[i][k]*b[k][j];
        //display matrix multiplication
        printf("Matrix Multiplication is:\n");
        for(i=0;i<=r1-1;i++){
            for(j=0;j<=c2-1;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("\n Matrix Multiplication is not Possible....!");

}