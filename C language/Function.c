#include<stdio.h>
/*
//..1..sum
int sum(int a,int b,int c)
{
    return a+b+c;
}

int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);

    printf("The sum is : %d",sum(n1,n2,n3));
}

//...2...square return
int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    scanf("%d",&num);
    int result = square(num);
    printf("square is = %d\n",result);
}

//...3...Area function
double tarea(double b,double h)
{
    return .5* b* h;
}

int main()
{
    double B,H;
    scanf("%lf %lf",&B,&H);
    double area = tarea(B,H);
    printf("Area = %.2lf",area);
}

//...4...X to the power User defined function
void calpower(double b,double e)
{
    double result=1,i;
    for(i=1;i<=e;i++){
        result = result * b;
    }
    printf("%.1lf\n",result);
}
int main()
{
    double base,exp;
    scanf("%lf %lf",&base,&exp);
    calpower(base,exp);
}

//...5...X to the power Using /not using Lib. function
int main()
{
    double base,exp,result;
    scanf("%lf %lf",&base,&exp);
    result = pow(base,exp);
    printf("%.1lf\n",result);
}

//...6...Passing array

void display(int x[])
{
    int i;
    for(i=0;i<5;i++){
        printf("%d ",x[i]);
    }
}
int main()
{
    int num[] = {11,22,33,44,55};
    display(num);
}

//...7...maximum value

int maximum(int x[])
{
    int i,max=x[0];
    for(i=0;i<5;i++){
        if(max<x[i]){
            max=x[i];
        }
    }
    return max;
}
int main()
{
    int num[] = {11,92,33,44,55};
    int maxvalue=maximum(num);
    printf("Maximum = %d\n",maxvalue);
}
*/
//...8...passing string

void display(char s1[])
{
    int i=0;
    while(s1[i]!='\0'){
        printf("%c\n",s1[i]);
        i++;
    }

}
int main()
{
    char str[] = "Masum";
    display(str);
}
