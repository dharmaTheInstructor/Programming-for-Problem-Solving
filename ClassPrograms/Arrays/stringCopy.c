#include<stdio.h>
void main(){
    char s1[100],s2[100];
    int i;
    printf("Enter your string:");
    gets(s1);
    for(i=0;s1[i];i++)
        s2[i]=s1[i];
    s2[i]='\0';
    printf("\nCopied string is:");
    puts(s2);
}