// Write a program to check if the given number is a natural number. 

#include<stdio.h>
int main(){
    int a;
    printf("Enter any no. :");
    scanf("%d",&a);

    if(a>0){
        printf("number is natural");
    }else{
        printf("number is not natural");
    }
    return 0;
}