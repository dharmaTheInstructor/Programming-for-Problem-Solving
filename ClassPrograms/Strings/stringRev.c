#include<stdio.h>
void main(){
    char str[100];
    int i,j;
    printf("Enter s string:");
    gets(str);
    printf("Given String is:%s\n",str);
    for(i=0;str[i];i++);
    for(j=i-1;str[j];j--)
        printf("%c",str[j]);
}