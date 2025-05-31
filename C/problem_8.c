#include<stdio.h>

#define SWAP(a, b) { int temp = a; a = b; b = temp; }

void main() {
    int num1, num2;
    printf("Enter the 1st number:");
    scanf("%d", &num1);
    printf("Enter the 2st number:");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    SWAP(num1, num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}