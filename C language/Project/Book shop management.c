#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
    char bname[30];
    char aname[30];
    long int bcode;
    char price[8];
    int i,j;
};


typedef struct book book;


void remove_all();
void print_menu();
void add_book();
void list_book();
void search_book();
void remove_book();
void update_book();
void take_input(book *p);



int main()
{
    shop();
    return 0;
}


void shop()
{
    int choice;
    while(1)
    {
        print_menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                list_record();
                getchar();
                getchar();
                break;
            case 2:
                add_book();
                getchar();
                getchar();
                break;
            case 3:
                search_book();
                getchar();
                getchar();
                break;
            case 4:
                remove_book();
                getchar();
                getchar();
                break;
            case 5:
                update_book();
                getchar();
                getchar();
                break;
            case 6:
                remove_all();
                getchar();
                getchar();
                break;
            default :

                printf("Thank you for using shop visit again : )\n");
                getchar();
                getchar();
                exit(1);
        }
    }
}


void print_menu()
{

    printf("\t\t****************************************************************\n");
    printf("\t\t **                    Welcome To My Shop                    **\n");
    printf("\t\t****************************************************************\n\n");
    printf("\t\t                       Control Panel                          \n\n");
    printf("\t\t\t1) List book\n\n");
    printf("\t\t\t2) Add book\n\n");
    printf("\t\t\t3) Search book\n\n");
    printf("\t\t\t4) Remove book\n\n");
    printf("\t\t\t5) Update book\n\n");
    printf("\t\t\t6) Delete all book\n\n");
    printf("\t\t\t7) Exit shop\n\n\n");

    printf("\t\t\t\tEnter your Choice : ");
}


void add_book()
{

    FILE *fp;
    fp = fopen("test.txt", "ab+");
    if (fp == NULL)
    {
        printf("Error!... Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        book p;
        take_input(&p);
        fwrite(&p, sizeof(p), 1, fp);
        fflush(stdin);
        fclose(fp);

        printf("Book added Successfully\n");
        printf("Press any key to continue ....\n");

    }
}


void take_input(book *p)
{

    printf("Enter book name : ");

    scanf("%s",p->bname);

    printf("Enter auther name : ");
    scanf("%s",p->aname);

    printf("Enter code : ");
    scanf("%ld",&p->bcode);

    printf("Enter price : ");
    scanf("%s",p->price);

}


void list_record()
{

    FILE *fp;
    fp = fopen("test.txt", "rb");
    if (fp == NULL)
    {
        printf("Error!... Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        book p;
        printf("\n\t\t\t\t******************************************************************************\n");
        printf("\t\t\t\t **                    Here is all books listed in shop                    **\n");
        printf("\t\t\t\t******************************************************************************\n\n\n");
        printf("  Book Name\t\t    Auther name\t\t      Code\t\t    Price\t\n");
        printf("-------------------------------------------------------------------------------------------------------------\n");

        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            int i;
            int len1 = 31 - strlen(p.bname);
            int len2 = 25 - strlen(p.aname);
            int len3 = 20;
            int len4 = 35 - strlen(p.price);
            printf("%s",p.bname);
            for(i=0;i<len1;i++) printf(" ");

            printf("%s",p.aname);
            for(i=0;i<len2;i++) printf(" ");

            printf("%ld",p.bcode);
            for(i=0;i<len3;i++) printf(" ");

            printf("%s",p.price);
            for(i=0;i<len4;i++) printf(" ");


            printf("\n");
            fflush(stdin);
        }
        fflush(stdin);
        fclose(fp);
        printf("\n\nPress any key to continue....\n");

    }
}


void search_book()
{

    long int code;
    printf("Enter code of the book you want to search : ");
    scanf("%ld",&code);

    FILE *fp;
    fp = fopen("test.txt", "rb");
    if (fp == NULL)
    {
        printf("Error!... Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        int flag = 0;
        book p;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(p.bcode == code)
            {
                printf("  Book Name\t\t    Auther Name\t\t     Code\t\t    Price\t\n");
                printf("---------------------------------------------------------------------------------------------------------------\n");
                int i;
                int len1 = 31 - strlen(p.aname);
                int len2 = 25 - strlen(p.aname);
                int len3 = 20;
                int len4 = 25 - strlen(p.price);
                printf("%s",p.bname);
                for(i=0;i<len1;i++) printf(" ");

                printf("%s",p.aname);
                for(i=0;i<len2;i++) printf(" ");

                printf("%ld",p.bcode);
                for(i=0;i<len3;i++) printf(" ");

                printf("%s",p.price);
                for(i=0;i<len4;i++) printf(" ");

                printf("\n");

                flag = 1;
                break;
            }
            else continue;

        }
        if(flag == 0)
        {

            printf("book is not found in the shop\n");
        }
        fflush(stdin);
        fclose(fp);
        printf("\n\nPress any key to continue....\n");
    }

}


void remove_book()
{

    long int code;
    printf("Enter code of the book you want to remove from shop : ");
    scanf("%ld",&code);

    FILE *fp,*temp;
    fp = fopen("test.txt", "rb");
    temp = fopen("temp","wb+");
    if (fp == NULL)
    {
        printf("Error!... Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        book p;
        int flag = 0;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(p.bcode == code)
            {

                printf("book removed successfully\n");
                flag = 1;
            }
            else fwrite(&p,sizeof(p),1,temp);
            fflush(stdin);
        }
        if(flag == 0)
        {

            printf("No record found for %d code\n",code);
        }
        fclose(fp);
        fclose(temp);
        remove("test.txt");
        rename("temp","test.txt");
        fflush(stdin);
        printf("Press any key to continue....\n");

    }

}


void update_book()
{


    long int code;
    printf("Enter code of the book you want to update details : ");
    scanf("%ld",&code);

    FILE *fp,*temp;
    fp = fopen("test.txt", "rb");
    temp = fopen("temp","wb+");
    if (fp == NULL)
    {
        printf("Error!... Plz try again !\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        int flag = 0;
        book p;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(p.bcode == code)
            {
                take_input(&p);
                fwrite(&p, sizeof(p), 1, temp);

                printf("Book updated successfully\n");
                flag = 1;
            }
            else fwrite(&p,sizeof(p),1,temp);
            fflush(stdin);
        }
        if(flag == 0)
        {

            printf("No record found for %d code\n",code);
        }
        fclose(fp);
        fclose(temp);
        remove("test.txt");
        rename("temp","test.txt");
        fflush(stdin);
        printf("Press any key to continue....\n");
    }
}


void remove_all()
{
    char choice;

    remove("./test.txt");
    printf("All book deleted in the shop successfully\n");
    printf("Press any key to continue ... \n");
}
