#include<stdio.h>
#include<string.h>
void main(){
    char s1[100],s2[100];
    printf("Enter  string1:");
    gets(s1);
    printf("Enter string2");
    gets(s2);
    printf("Given Strings are:\n");
    puts(s1);
    printf("\n");
    puts(s2);
    strcat(s1,s2);
    printf("\nResultant String is:");
    puts(s1);
    strlwr(s1);
    strupr(s2);
    puts(s1);
    puts(s2);
}