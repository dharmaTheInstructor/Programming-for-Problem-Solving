#include<stdio.h>
void main(){
    float marks;
    printf("Enter student marks:");
    scanf("%f",&marks);
    printf("Logical AND=%d",marks>=60 && marks<75);
    printf("\nLogical OR=%d",marks>=60 || marks<75);
    printf("\nLogical NOT=%d",!(marks>=60 && marks<75));
}