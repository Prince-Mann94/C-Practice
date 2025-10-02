//Write a program to print the smallest number of two.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first no. : ");
    scanf("%d",&a);

    printf("Enter second no. : ");
    scanf("%d",&b);

    if(a>b){
        printf("b is smallest %d",b);
    }else if(a<b){
        printf("a is smallest %d",a);
    }else{
        printf("both are equal %d",a);
    }

}