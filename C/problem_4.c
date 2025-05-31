#include<stdio.h>
void main(){
    printf("Enter the number:");
    int num,sum=0;
    scanf("%d",&num);
    if (num>0)
    {
        for (int i = 0; i < num; i++){ 
            if (i%2==0) sum+=i;
            else sum-=i;
        }
        printf("The sum of nth number is:%d",sum);
    }else printf("Please Enter a Valid number");
}