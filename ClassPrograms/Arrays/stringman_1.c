#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    printf("Enter your string:");
    gets(a);
    puts("\nGiven String is:");
    puts(a);
    printf("\n Length of the string is %d",strlen(a));
}