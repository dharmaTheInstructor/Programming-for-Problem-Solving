#include<stdio.h>
void main(){
    int i,j,n;
    char ch;
    printf("Enter value for n:");
    scanf("%d",&n);
    printf("Character Pattern is:\n");
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<=i;j++,ch++)
            printf("%c",ch);
        printf("\n");
    }
}