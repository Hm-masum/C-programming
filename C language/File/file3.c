#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w");
    if(file==NULL)
        printf("File dose not exist");
    else
        printf("File is open");
        printf("Enter your name");
        gets(name);

        fclose(file);


    getch();
}



