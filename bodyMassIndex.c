#include<stdio.h>

void main(){

float wt,ht,BMI=0;

printf("Please Enter your Weight(in kgs): ");

scanf("%f",&wt);

printf("Please Enter your Height(in feets): ");

scanf("%f",&ht);

BMI=(float)wt/(ht*ht);

printf("Your Body Mass Index is %.2f\n",BMI);

if(BMI<18.5)

printf("Underweighted.\nFollow a Healthy Balanced Diet.\n");

else if(18.5<=BMI&&BMI<=24.9)

printf("Healthy weight.\nStay fit.\n");

else if(25<=BMI&&BMI<=29.9)

printf("Overweight.\nFollow perfect diet and exercise regularly.\n");

else

printf("Obese.\nRefer a doctor and try to stay healthy.\n");

}