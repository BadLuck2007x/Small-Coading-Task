#include<stdio.h>

int IsPrime(int num){
if (!(num%2))  printf("The number is prime");
else printf("The number is not prime");
printf("\nThe prime numbers are:\n");
for (int i = 2; i <=100; i++) if (!(i%2)) printf("%d\t",i);
}
void main(){
    printf("Enter the number:");
    int num;
    scanf("%d",&num);
    IsPrime(num);
}