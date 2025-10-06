#include<stdio.h>
int main(){
    float height,weight,bmi;
    printf("enter height (in meters):");
    scanf("%f",&height);

    printf("enter weight (in kgs) :");
    scanf("%f",&weight);
     
    bmi = weight/(height*height);

    if(bmi < 15){
        printf("starvation");
    }else if(bmi >= 15.1 && bmi <= 17.5){
        printf("anorexic");
    }else if(bmi >= 17.6 && bmi <=18.5){
        printf("underweight");
    }else if(bmi >= 18.6 && bmi<=24.9){
        printf("Ideal");
    }else if(bmi >= 25 && bmi <=25.9){
        printf("Overweight");
    }else if(bmi >= 30 && bmi <= 39.9){
      printf("obese");
    }else{
        printf("morbidity obese");
    }
    return 0;
}