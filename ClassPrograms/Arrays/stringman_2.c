#include<stdio.h>
#include<string.h>
void main(){
    char s1[100],s2[100];
    printf("Enter string1:");
    gets(s1);
    printf("Enter string2:");
    gets(s2);
    printf("Given Strings are:\n");
    puts(s1);
    printf("\n");
    puts(s2);
   if(!strcmp(s1,s2))
     printf("\nStrings are Equal...!");
    else
     printf("\nStrings are Not Equal...!");
}
