#include<stdio.h>
/*
//...1...Basic of union
union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x =10;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);
    t1.y =10;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);

}
*/
//...1...size of union

union test1
{
    int x,y;
};
union test2
{
    char ch;
    int x;
};
union test3
{
    char name[20];
    double d;
};
int main()
{
   union test1 t1;
   union test2 t2;
   union test3 t3;

   printf("sizeof(test1) = %d\n",sizeof(t1));
   printf("sizeof(test2) = %d\n",sizeof(t2));
   printf("sizeof(test3) = %d\n",sizeof(t3));
}

