#include<stdio.h>

void Even_numbers(int array[], int length) {
    printf("The Even valued numbers: [");
    for (int i = 0; i < length; i++)
        if (!(array[i] % 2))
            printf("%d,", array[i]);
    printf("]\n");
}

void Odd_numbers(int array[], int length) {
    printf("The Odd valued numbers: [");
    for (int i = 0; i < length; i++)
        if (array[i] % 2)
            printf("%d,", array[i]);
    printf("]\n");
}

void Sum_Avg(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) sum += array[i];
    printf("The sum of numbers: %d\n", sum);
    printf("The Average of the numbers: %.2f\n", ((float)sum) / ((float)length));
}

void Max_min(int array[], int length) {
    int max = array[0], min = array[0];
    for (int i = 0; i < length; i++) {
        if (array[i] > max) max = array[i];
        if (array[i] < min) min = array[i];
    }
    printf("The maximum number of the array is: %d\n", max);
    printf("The minimum number of the array is: %d\n", min);
}

int Remove_duplicates(int array[], int length) {
    int new_length = length;
    for (int i = 0; i < new_length; i++) {
        for (int j = i + 1; j < new_length; j++) {
            if (array[i] == array[j]) {
                for (int k = j; k < new_length - 1; k++) {
                    array[k] = array[k + 1];
                }
                new_length--;
                j--;
            }
        }
    }
    return new_length;
}

void Reverse_array(int array[], int length) {
    printf("Original array: [");
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length - 1) printf(", ");
    }
    printf("]\n");

    for (int start = 0, end = length - 1; start < end; start++, end--) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
    }

    printf("Reversed array: [");
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length - 1) printf(", ");
    }
    printf("]\n");
}

void main() {
    int array[100], length, choice;

    do {
        printf("\nMenu:\n");
        printf("1. Enter a new array\n");
        printf("2. Reverse the array\n");
        printf("3. Remove duplicates from the array\n");
        printf("4. Display even numbers\n");
        printf("5. Display odd numbers\n");
        printf("6. Calculate sum and average\n");
        printf("7. Find maximum and minimum\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the size of the array: ");
                scanf("%d", &length);
                printf("Enter %d elements: ", length);
                for (int i = 0; i < length; i++) {
                    scanf("%d", &array[i]);
                }
                break;
            case 2:
                Reverse_array(array, length);
                break;
            case 3:
                length = Remove_duplicates(array, length);
                printf("Array after removing duplicates: [");
                for (int i = 0; i < length; i++) {
                    printf("%d", array[i]);
                    if (i < length - 1) printf(", ");
                }
                printf("]\n");
                break;
            case 4:
                Even_numbers(array, length);
                break;
            case 5:
                Odd_numbers(array, length);
                break;
            case 6:
                Sum_Avg(array, length);
                break;
            case 7:
                Max_min(array, length);
                break;
            case 8:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);
}