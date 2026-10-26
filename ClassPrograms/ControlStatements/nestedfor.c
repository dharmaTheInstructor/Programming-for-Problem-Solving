#include<stdio.h>
void main(){
  int i,j,n;
  printf("Enter no. of rows:");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)      /* outer for loop*/
  {
    for(j=0;j<=i;j++) {    /* inner for loop */
        printf("*\t");
        printf("\n");
    }
  }
}