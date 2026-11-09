#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;
    printf("Enter array-1 size:");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter %dx%d size Array:",r1,c1);
    for(i=0;i<=r1-1;i++){
        for(j=0;j<=c1-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter array-2 size:");
    scanf("%d%d",&r2,&c2);
    printf("\nEnter %dx%d size Array:",r2,c2);
    for(i=0;i<=r2-1;i++){
        for(j=0;j<=c2-1;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
        for(i=0;i<=r1-1;i++){
            for(j=0;j<=c2-1;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("Addition of given Matrices is:\n");
        for(i=0;i<=r2-1;i++){
            for(j=0;j<=c1-1;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nAddition is not possible....!");



}