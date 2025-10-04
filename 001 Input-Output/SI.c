#include<stdio.h>
int main(){
    int principal,years,roi,SI;
    printf("enter principal : ");
    scanf("%d",&principal);

    printf("enter years : ");
    scanf("%d",&years);

    printf("enter rate of interest : ");
    scanf("%d",&roi);

    SI = (principal*roi*years)/100.0;

    printf("simple interest : %d",SI);
    return 0;
}