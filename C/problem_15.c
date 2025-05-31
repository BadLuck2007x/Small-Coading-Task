#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int Sum(int* array,int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}


int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\tEnter %d element:", i+1);
        scanf("%d", &array[i]);
    }
    int sum=Sum(array, n);
    printf("The sum of the elements is: %d\n", sum);

    free(array);
return 0;
}