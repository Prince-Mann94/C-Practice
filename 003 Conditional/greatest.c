//write a program to find the greatest of four no. entered by user
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter first no. : ");
    scanf("%d",&a);

    printf("Enter second no. : ");
    scanf("%d",&b);

    printf("Enter third no. : ");
    scanf("%d",&c);

    printf("Enter fourth no. : ");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("a is greatest %d",a);
    }else if(b>a && b>c && b>d){
        printf("b is greatest %d",b);
    }else if(c>a && c>b && c>d){
        printf("c is greatest %d",c);
    }else if(d>a && d>b && d>c){
        printf("d is greatest %d",d);
    }else{
        printf("all are equal %d",a);
    }
    return 0;
}