

#include<stdio.h>

int main(){

   float firstAngle,secondAngle,thridAngle;

   printf("enter firstAngle\n");
   scanf("%f",&firstAngle);

   printf("\n enter secondAngle\n");
   scanf("%f",&secondAngle);

   thridAngle=180-(firstAngle+secondAngle);


   printf("\n thridAngle is %.2f",thridAngle);

   return 0;



}