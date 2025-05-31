#include<stdio.h>

int febonacy(int n,int sum,int second,int third){
    sum=second+third;
    printf("%d\t",sum);
    second=third;
    third=sum;
    if (n==10)  return 0;
    return febonacy(n+1,sum,second,third);
}
void main(){
    long long  int sum=1,second_num=0,third_num=1;
    int num;
    printf("\n1.For recursion\n2.For itration");
    printf("\nEnter your choise:");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        febonacy( 0,sum,second_num,third_num);
        break;
    case 2:
        for (int i = 0; i <10; i++)
        {   
            sum=(second_num+third_num);
            printf("%d\t",sum);
            second_num=third_num;
            third_num=sum;
        }
        break;
    default:
        printf("\nSomething went wrong\n");
        break;
    }
}