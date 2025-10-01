#include<stdio.h>
int main(){
    float temp,conv;
    printf("enter temp(in celcius) : ");
    scanf("%f",&temp);

    conv = (temp*9/5)+32;
    printf("temp in fahrenheit : %.2f",conv);
    return 0;
}