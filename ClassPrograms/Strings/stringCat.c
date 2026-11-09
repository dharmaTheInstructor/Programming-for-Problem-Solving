#include<stdio.h>
void main(){
    char s1[50],s2[50];
    int i,j,k;
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);
    printf("Given Strings are:");
    puts(s1);
    puts(s2);
    for(i=0;s1[i];i++);
    for(j=i,k=0;s2[k];j++,k++)
        s1[j]=s2[k];
    s1[j]='\0';
    printf("Resultant string is:");
    puts(s1);
}