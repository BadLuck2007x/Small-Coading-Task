#include<stdio.h>

int Swap(int* num1,int* num2){
    *num1 *=100;
    *num2 +=100;
}

void main(){
    int num1=0,num2=0;
    printf("Enter the num1 is variable : ");
    scanf("%d",&num1);
    printf("\nEnter the num2 is variable : ");
    scanf("%d",&num2);
    printf("\nBefore Alteing:\n The num1 is variable  :%d ",num1);
    printf("\n The num2 is variable  :%d ",num2);
    Swap(&num1,&num2);
    printf("\nAfter Alteing:\n The num1 is variable  :%d ",num1);
    printf("\n The num2 is variable  :%d ",num2);
}