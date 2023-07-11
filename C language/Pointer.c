#include<stdio.h>
/*
//...1..basic of pointer
int main()
{
   int x=5;
   int *ptr;
   ptr = &x;

   printf("value of x = %d\n",x);
   printf("address of x = %d\n",&x);
   printf("pointer of value x = %d\n",ptr);
   printf("value of x = %d\n",*ptr);
   printf("add. of pointer = %d\n",&ptr);
}

//...2...pointer pointing to different value
int main()
{
    int x=11,y=12,z=13;
    int *ptr;
    ptr=&x;
    printf("x = %d\n",*ptr);

    ptr=&y;
    printf("y = %d\n",*ptr);

    ptr=&z;
    printf("z = %d\n",*ptr);

}

//...3... sum of pointer
int main()
{
    int x=11,y=12,sum;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1 + *ptr2;
    printf("Sum = %d\n",sum);
}

//...4...swapping two number
int main()
{
    int x=11,y=12,temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;

    temp =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("X=%d\n",x);
    printf("y=%d\n",y);
}

//...5...swapping two number using function
void swapping(int *ptr1, int *ptr2)
{
    int temp;

    temp =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
int main()
{
    int x=11,y=22,swap;
    printf(" X=%d y=%d\n",x,y);
    swapping(&x,&y);
    printf(" X=%d y=%d",x,y);

}

//...6...access array elements using pointer
int main()
{
    int a[5]={11,22,33,44,55};
    int *ptr,i;
    ptr = &a[0];
    for(i=0;i<5;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
}

//...7...basic2 pointer
int main()
{
    int data[]={11,22,33,44,55};
    printf("%d\n", data+1);
    printf("%d\n", data+2);
    printf("%d\n", *data+2);
    printf("%d\n", *(data+2));

    char dat[]={'a','b','c'};
    printf("%d\n", dat+1);
    printf("%d\n", dat);
    printf("%c\n", *(dat+3));
}
*/
//...7...basic3 pointer
int main()
{
    int x[]={11,22,33,44,55};
    int *p;
    int y = 22;
    p = x;
    printf("%d\n",x);
    printf("%d\n",p);
    printf("%d\n",++p);
    printf("%d\n",*p);
    printf("%d\n",x[0]);
    printf("%d\n",*++p);
    printf("%d\n",(*p)++);
    printf("%d\n",*++p);
}
