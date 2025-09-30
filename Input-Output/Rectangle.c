//Write a program to calculate perimeter of rectangle.
//Author : Prince Mann

#include<stdio.h>
int main(){
    float length,breadth;
    printf("Enter length :");
    scanf("%f",&length);

    printf("Enter breadth :");
    scanf("%f",&breadth);

    printf("Perimeter of rectangle :%.2f",2*(length+breadth));  //%.2f is used for taking upto 2 decimal values
    return 0;
}
