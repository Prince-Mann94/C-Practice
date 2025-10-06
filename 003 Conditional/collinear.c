// WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include<stdio.h>
int main(){
    int x1,y1;
    int x2,y2;
    int x3,y3;
    printf("Enter first points(x1,y1) : ");
    scanf("%d %d",&x1,&y1);

    printf("Enter second points(x2,y2) : ");
    scanf("%d %d",&x2,&y2);

    printf("Enter third points(x3,y3) : ");
    scanf("%d %d",&x3,&y3);

    if((x2 - x1)*(y3 - y1) == (y2 - y1)*(x3 - x1)){
        printf("collinear");
    }else{
        printf("not collinear");
    }

}
