#include<stdio.h>

void main(){
    printf("Enter the number:");
    int num;
    scanf("%d",&num);
    printf("\nThe factors of the given number is:\n");
    for (int i = 1; i <= num; i++) 
    {
        if (!(num%i))
        {
            printf("%d\t",i);
        }
    }
}