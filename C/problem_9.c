#include<stdio.h>


void main() {
    printf("Enter the n th term: ");
    int num;
    scanf("%d",&num);
    for (int i = 0; i < num; i+=2)
    {
        for (int j = 0; j < num; j++)
        {
            if (j<=i) printf("*");
        }
        printf("\n");
    }
    
}