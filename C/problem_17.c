#include <stdio.h>
#include <stdlib.h>

void Swap(int *element1, int *element2) {
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}

void Marge(int *array1, int length1, int *array2, int length2) {
    int length3 = length1 + length2;
    int array3[length3];

    printf("\nMerging....\n");
    for (int i = 0; i < length1; i++) {
        array3[i] = array1[i];
    }
    for (int i = 0; i < length2; i++) {
        array3[length1 + i] = array2[i];
    }

    for (int i = 0; i < length3 - 1; i++) {
        for (int j = 0; j < length3 - i - 1; j++) {
            if (array3[j] > array3[j + 1]) {
                Swap(&array3[j], &array3[j + 1]);
            }
        }
    }

    printf("\nThe merged and sorted elements are:\n");
    for (int i = 0; i < length3; i++) {
        printf("%d ", array3[i]);
    }
    printf("\n");
}

int Element_insert(int *array) {
    int length;
    printf("\nEnter the number of elements: ");
    scanf("%d", &length);
    for (int i = 0; i < length; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &array[i]);
    }
    return length;
}

int main() {
    int array1[100], array2[100];
    int length1 = Element_insert(array1);
    int length2 = Element_insert(array2);
    Marge(array1, length1, array2, length2);
    return 0;
}