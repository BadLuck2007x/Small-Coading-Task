#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char* text = (char*) malloc(100 * sizeof(char));
    if (text == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    

    printf("Enter the text: ");
    fgets(text, 100, stdin);
    int new_length = strlen(text);
    text = (char *)realloc(text, new_length * sizeof(char));
    if (text == NULL) {
        printf("Memory reallocation failed.\n");
        return;
    }

    for (int i = 0; i < 26; i++)
    {
        int count = 0;
        for (int j = 0; j < new_length+2; j++)
        {
            if (text[j] == 'a' + i)
            {
                count++;
            }
        }
        printf(" [%c] = %d\t", 'a' + i, count);
        if((i+1)%5 == 0){
            printf("\n");
        }   
    }
    
}