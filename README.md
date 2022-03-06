# Body-Mass-Index
#include<stdio.h>

void main()
{
float wt,ht,BMI=0;
printf("Please enter your weight(in kg):");
scanf("%f",&wt);
printf("Please enter your height(in m):");
scanf("%f",&ht);
BMI=(float)wt/(ht*ht);
printf("Your Body Mass Index is %.2f\n",BMI);
if(BMI<18.5)
printf("Underweight.\nFollow a healthy balanced diet.\n");
else if(18.5<=BMI && BMI<=24.9)
printf("Healthy weight.\n Stay fit.\n");
else if(25<=BMI && BMI<=29.9)
printf("Overweight.\nFollow perfect diet and exercise regularly.\n");
else
printf("Obese.\nRefer a doctor and try to stay healthy.\n");
}
