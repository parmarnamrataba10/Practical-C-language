

#include<stdio.h>

int main(){

    float baseSalary,HRA,DA,TA,grossSalary;

    printf("\n enter baseSalary\n");
    scanf("%f",&baseSalary);

     printf("\n enter house rent allowance \n");
    scanf("%f",&HRA);

     printf(" \nenter dearness allowance\n");
    scanf("%f",&DA);


     printf("\n enter travel allowance\n");
    scanf("%f",&TA);

    grossSalary=baseSalary*(1+(HRA+DA+TA)/100);

    printf("\n grossSalary is %.2f",grossSalary);

    return 0;



}