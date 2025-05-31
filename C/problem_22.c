#include<stdio.h>
#include<stdlib.h>

// C:\Users\Codding\practice\C\elements\text.txt  -> Source File
// C:\Users\Codding\practice\C\elements\new.txt   -> Destenation File

int main(){
    FILE *source,*dest;
    char source_path[100],dest_path[100];
    char ch;
    printf("\nEnter the Source path: ");
    scanf("%s",source_path);
    printf("\nEnter the Destnation path: ");
    scanf("%s",dest_path);
    
    source=fopen(source_path,"r");
    if (source==NULL){
        perror("\nsomething is went wrong");
        return 0;
    }
    
    dest=fopen(dest_path,"w");
    if (dest==NULL)
    {
        perror("\nsomething is went wrong");
        fclose(source);
        return 0;
    }
    printf("Copying....");
    while ((ch=fgetc(source))!=EOF)
    {   
        if (ch==' ')
        {
            continue;
        }
        else{
            fputc(ch,dest);
        }
    }
    printf("\nCopy is successful...");
    fclose(source);
    fclose(dest);
    return 0;
}