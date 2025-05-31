#include<stdio.h>

int factorial(int n){
    if (n==2)   return 2;
    return factorial(n-1)*n;
}


int main(){
    int choise,num=0,fact=1;
    printf("\n1.For recursion\n2.For itration");
    printf("\nEnter your choise: ");
    scanf("%d",&choise);
    printf("\nEnter the number: ");
    scanf("%d",&num);
    if (num==0)
    {
        printf("Enter a valid number");
    }else
    {
        switch (choise)
        {
        case 1:
            fact = factorial(num);
            printf("The factorial is: %d",fact);
            break;
        case 2:
            for (int i = num-1; i >0; i--) num*=i;
            printf("The factorial is: %d",num);
            break;
        default:
            printf("\nSomething went wrong\n");
            return 0;
            break;
        }
        
    }
    return 1;
}