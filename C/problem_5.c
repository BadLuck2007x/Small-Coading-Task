#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int string_check(char *string){
    int size=strlen(string),j=0,flag=0;
    char copy[size];
    for (int i = size-1; i >=0; i--)
    {
        copy[j]=string[i];
        j++;
    }
    for (int i = 0; i < size; i++) if(string[i]==copy[i])flag+=1;
    if (flag==size) return 1;
    else  return 0;
}

void main(){
    printf("Enter the string: ");
    char string[100];
    scanf("%99[^\n]",string);
    int result=string_check(string);
    switch (result)
    {
    case 1:
        printf("\nThe Given string is palendrome");
        break;
    case 0:
        printf("\nThe String is not palendrome");
        break;
    default:
        printf("\n...Something went wrong...");
        break;
    }
}