#include<stdio.h>

int Swap(int* num1,int* num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void main(){
    int num1=0,num2=0;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);
    printf("\nEnter the 2nd number: ");
    scanf("%d",&num2);
    printf("\nBefore Swaping:\n The 1st number Number:%d ",num1);
    printf("\n The 2nd number Number:%d ",num2);
    Swap(&num1,&num2);
    printf("\nAfter Swaping:\n The 1st number Number:%d ",num1);
    printf("\n The 2nd number Number:%d ",num2);
}