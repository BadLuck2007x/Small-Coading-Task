#include<stdio.h>
void main(){
    printf("Enter the number:");
    int num,reverse=0;
    scanf("%d",&num);
    while (num)
    {
        reverse=(10*reverse)+num%10;
        num=num/10;
    }
    
    printf("The reverse number is:%d",reverse);
}