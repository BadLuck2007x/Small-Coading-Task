#include<stdio.h>
void main(){
    printf("Enter the number:");
    float num;
    float sum=0.0;
    scanf("%f",&num);
    if (num>0)
    {
        for (float i = 0; i < num; i++) sum+=(1/(i+1));
        printf("The sum of nth number is:%f",sum);
    }else printf("Please Enter a Valid number");
}