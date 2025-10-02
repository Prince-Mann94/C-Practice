//Write a program to print the average of 3 numbers.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first no. : ");
    scanf("%d",&a);

    printf("Enter second no. : ");
    scanf("%d",&b);

    printf("Enter third no. : ");
    scanf("%d",&c);

    float average;
    average = (float)(a+b+c)/3;

    printf("Average : %.2f",average);
    return 0;
}
