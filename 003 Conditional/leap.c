//Write a program to check whether a year is leap or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter any year : ");
    scanf("%d",&year);

    if(year % 400 == 0 || (year %4 == 0 && year % 100 != 0)){
        printf("leap year");
    }else{
        printf("not a leap year");
    }
    return 0;
}