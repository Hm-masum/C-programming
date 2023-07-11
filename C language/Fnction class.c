#include<stdio.h>
/*111
 int fun()
{
    static int x=0;
    x++;
    return x;
}
int main()
{
    printf("F call: %d\n",fun());
    printf("s call: %d\n",fun());
    printf("t call: %d\n",fun());
    return 0;
}
222
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    printf("sum = %d\n",sum(2,5));
    return 0;
}
333
void show (int a)
{
    printf ("%d\n",a);
    show(a+1);
}
int main()
{
    show(1);
    return 0;
}
444
void show (int a)
{
    if (a>5){
        return;
    }
    printf ("%d\n",a);
    show(a+1);
}
int main()
{
    show(1);
    return 0;
}
555*/
void show (int a)
{
    if (a>5){
        return;
    }
    show(a+1);
    printf ("%d\n",a);

}
int main()
{
    show(1);
    return 0;
}

