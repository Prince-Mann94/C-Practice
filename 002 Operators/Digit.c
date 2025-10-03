//Write a program to check if given character is digitor not.

#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    printf("enter any character :");
    scanf("%c",&a);

    if(isdigit(a)){
        printf("Digit");
    }else{
        printf("Not a digit");
    }
    return 0;
}
