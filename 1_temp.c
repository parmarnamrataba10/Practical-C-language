

#include<stdio.h>

int main(){

    float celsius,fahrenheit;

    printf("\n enter celsius \n");
    scanf("%f",&celsius);

    fahrenheit=(9.0/5.0)*celsius+32;

    printf("\n fahrenheit is %.2f",fahrenheit);

    return 0;
}