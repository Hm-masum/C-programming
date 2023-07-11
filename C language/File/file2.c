#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = "anisul islam";
    file = fopen("test.txt","a");
    int length = strlen(name);
    int i;

    if(file==NULL)
        printf("File dose not exist");
    else
        printf("File is opened");
        for(i=0; i<length; i++){
            fputc(name[i],file);
        }
        fclose(file);


    getch();
}



