#include<stdio.h>
void main(){
    char str[100];
    int i;
    printf("Enter your String:");
    gets(str);
    puts("Given String is:");
    puts(str);
    for(i=0;str[i];i++);
    printf("\nLength of given string is %d",i);
}