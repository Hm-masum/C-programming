#include<stdio.h>
#include<string.h>
int main()
/*  //...1...input & output
{
    char name[10];
    //scanf("%[^\n]",name);
    //("Name: %s\n",name);
    gets(name);
    puts(name);
    //name[3] = "\n";
    //puts(name);
    int count=0;
    for(int i=0; ;i++){
        if(name[i]=='\0') break;
        count++;
    }
    printf("%d\n",count);
}

  //...2... display string character wise
{
    char s1[100];
    gets(s1);
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c ",s1[i]);
        i++;
    }
}

   //...3...strlen
{
    char name[10];
    //scanf("%[^\n]",name);
    //("Name: %s\n",name);
    gets(name);
    puts(name);
    int _size = strlen(name);
    printf("%d",_size);
}

   //...4... string length wthout strlen
{
    char s1[]="Habibullah mohammad masum";

    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("length = %d",len);
}

   //...5...strcpy
{
    char name1[100], name2[100];
    //scanf("%[^\n]",name);
    //("Name: %s\n",name);
    gets(name1);
    //puts(name2);
    strcpy(name2,name1);
    printf("name1: %s\n", name1);
    printf("name2: %s\n", name2);

}

   //...6...strcmp
{
    char name1[100], name2[100];
    int c;
    gets(name1);
    gets(name2);
    c = strcmp(name1,name2);
    printf("c = %d\n",c);

}

   //...7...strcat
{
    char name1[100], name2[100];
    //int c;
    gets(name1);
    gets(name2);
    printf("name1: %s\n", name1);
    printf("name2: %s\n", name2);

    strcat(name1,name2);
    printf("name1: %s\n", name1);
    printf("name2: %s\n", name2);

}

 //...8... str rev
{
    char str[]="habibullah mohammad masum";
    strrev(str);
    printf("str = %s\n",str);
}

 //...9... reverse without str rev
{
    char str1[30]="habibullah mohammad masum";
    char str2[30];
    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("str = %s\n",str2);
}

 //...10... palindrome
{
    char str1[30]="habibullah mohammad masum";
    char str2[30];
    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    int d =strcmp(str1,str2);

    if(d==0)
        printf("palindrome");
    else
        printf("not palindrome");

    getch();
}
  //...11... strupr() & strlwr()
{
    char str[]="Masum";
    //strupr(str);
    strlwr(str);
    printf("str = %s",str);

}
*/

{
    long double s1[10000000],s2[10000000];
    gets(s1);
    int i=0,len=0,j;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    int d =strcmp(s1,s2);

    if(d==0)
        printf("palindrome");
    else
        printf("not palindrome");

    getch();
}






