#include<stdio.h>

int GCD(int a,int b){
    if (b==0) {
        return a;
    }
    return  GCD(b,a%b);
}


int main(){
    int num1,num2,gcd,len,choise;
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    printf("\n1.For recursion\n2.For itration");
    printf("\nEnter your choise: ");
    scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            gcd=GCD(num1,num2);
            printf("The GCD is: %d",gcd);
            break;
        case 2:
            len=(num1>num2)?num1:num2;
            for (int i = 1; i <= len; i++)
            {
                if (!(num1%i) && !(num2%i))
                {
                    gcd=i;
                }
            }
            if(gcd==0) printf("There is no GCD");
            else printf("The GCD is : %d",gcd); 
            break;
        default:
            printf("\nSomething went wrong\n");
            return 0;
            break;
        }
}