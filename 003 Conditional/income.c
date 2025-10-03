#include<stdio.h>
int main(){
    float a;
    printf("enter income: ");
    scanf("%f",&a);

    if(a>=2.5 && a<=5.0){
        printf("5%% tax");
    }else if(a>=5.0 && a<=10.0){
        printf("20%% tax");
    }else if(a>10.0){
        printf("30%% tax");
    }else{
        printf("no tax");
}
}