// program to check the student result using ladder-if()
#include<stdio.h>
void main(){
    int s1,s2,s3,s4,s5,s6;
    float per;
    printf("Enter student 6 subject marks:");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    per=(s1+s2+s3+s4+s5+s6)/6;
    if(per>=75)
     printf("\nStudent belongs to Distinction with %f",per);
    else if(per>=60 && per<75)
     printf("\nStudent belongs to First Class with %f",per);
    else if(per>=50 && per<60)
     printf("\nStudent belongs to Second Class with %f",per);
    else if(per>=40 && per<50)
     printf("\nStudent belongs to Third Class with %f",per);
    else
     printf("\nStudent is Fail with %f",per);
  printf("\nBYE");
}