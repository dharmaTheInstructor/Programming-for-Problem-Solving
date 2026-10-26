//program to check the selected day
#include<stdio.h>
void main(){
 char choice;
 printf("Enter your choice between a and g:");
 scanf("%c",&choice);
 switch(choice){
    case 'a':printf("You are selected SUNDAY");
        break;
    case 'b': printf("You are selected MONDAY");
        break;
    case 'c':printf("You are selected TUESDAY");
        break;
    case 'd': printf("You are selected WEDNESDAY");
        break;
    case 'e':printf("You are selected THURSDAY");
        break;
    case 'f': printf("You are selected FRIDAY");
        break;
    case 'g':printf("You are selected SATURDAY");
        break;
    default:printf("Sorry, Invalid Choice...!");
 }
printf("\nBYE");
}