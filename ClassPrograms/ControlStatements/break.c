//demo on break statement
#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        if(i==6){
             i++;
            continue;
        }
        printf("%d\t",i++);
    }
    printf("\nBye...!");
}