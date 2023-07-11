
#include<stdio.h>
#include<string.h>
int main()
/*111
{
    int n[5];
    n[0]=10;
    n[1]=20;
    n[3]=30;
    n[4]=40;
    n[2]=50;
    printf("%d\n",n[4]);
}
222
{
    int a[10]={10,20,30,40,50};
    int sum=0,i;
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    printf("%.2f\n",(float)sum/5);

}
333
{
    int a[10];
    int sum=0,i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    printf("%.2f\n",(float)sum/5);

}
444
{
    int num[100],n,i;
    printf("how many num:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max= num[0];
    for(i=1;i<n;i++){
            if(max<num[i])
            max = num[i];
    }
    printf("max=%d",max);
}
555
{
    int a[100],i,n;
    printf("enter the number:");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("% d",a[i]);
    }
}
666
{
    int num[]={10,2,30,15,24,5};
    int value,i;
    int pos=-1;
    printf("enter the number:");
    scanf("%d",&value);
    for(i=0;i<6;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if (pos==-1)
    {
        printf("not found");
    }
    else
        printf("pos:%d",pos);
}
777
{
    int a1[30],a2[30],n,i;
    printf("a1: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("a1: ");
    for(i=0;i<n;i++){
        printf("%d ",a1[i]);
    }
    for(i=0;i<n;i++){
        a2[i]=a1[i];
    }
    printf("\na2: ");
     for(i=0;i<n;i++){
        printf("%d ",a2[i]);
    }
    getch();
}
//008.....
{
    int i,j,row,col;
    int A[10][10],B[10][10],C[10][10];

    printf("enter row and col:");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("a[%d][%d]:",i,j);
            scanf(" %d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("b[%d][%d]:",i,j);
            scanf(" %d",&B[i][j]);
        }
        printf("\n");
    }
     printf("A= ");

    for(i=0;i<row;i++){
            printf("\t");
        for(j=0;j<col;j++){
        printf(" %d",A[i][j]);
        }
        printf("\n");
    }
    printf("\nB= ");

    for(i=0;i<row;i++){
            printf("\t");
        for(j=0;j<col;j++){
        printf(" %d",B[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            C[i][j]=A[i][j] - B[i][j];
       // printf(" %d",B[i][j]);
        }
       // printf("\n");
    }
    printf("\nA-B= ");
     for(i=0;i<row;i++){
            printf("\t");
        for(j=0;j<col;j++){
        printf(" %d",C[i][j]);
        }
        printf("\n");
    }
}

//9...met. multiflication.
{
    int i,j,r1,r2,c1,c2,k,sum=0;
    int A[10][10],B[10][10],C[10][10];
    printf("enter row and col first met:");
    scanf("%d %d",&r1,&c1);
    printf("enter row and col scound met:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("error");
        printf("enter row and col first met:");
        scanf("%d %d",&r1,&c1);
        printf("enter row and col scound met:");
        scanf("%d %d",&r2,&c2);
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("a[%d][%d]:",i,j);
            scanf(" %d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("b[%d][%d]:",i,j);
            scanf(" %d",&B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                sum=sum+ A[i][k]*B[k][j];
            }
            C[i][j] = sum;
            sum =0;
        }
    }

    printf("A= ");
    for(i=0;i<r1;i++){
            printf("\t");
        for(j=0;j<c1;j++){
        printf(" %d",A[i][j]);
        }
        printf("\n");
    }

    printf("\nB= ");
    for(i=0;i<r2;i++){
            printf("\t");
        for(j=0;j<c2;j++){
        printf(" %d",B[i][j]);
        }
        printf("\n");
    }


     printf("\n"); printf("\nA*B= ");
     for(i=0;i<r1;i++){
            printf("\t");
        for(j=0;j<c2;j++){
        printf(" %d",C[i][j]);
        }
        printf("\n");
    }
    }


//10...transpose met.
{
int i,j,row,col;
    int A[10][10],B[10][10],C[10][10];

    printf("enter row and col:");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("a[%d][%d]:",i,j);
            scanf(" %d",&A[i][j]);
        }
        printf("\n");
    }

     printf("A= ");

    for(i=0;i<row;i++){
            printf("\t");
        for(j=0;j<col;j++){
        printf(" %d",A[i][j]);
        }
        printf("\n");
    }
}
/*
//11...sum of diagonal elements

{
    int i,j,row,col,sum=0;
    int A[10][10],B[10][10],C[10][10];

    printf("enter row and col:");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("a[%d][%d]:",i,j);
            scanf(" %d",&A[i][j]);
        }
        printf("\n");
    }

     printf("A= ");
    for(i=0;i<row;i++){
            printf("\t");
        for(j=0;j<col;j++){
        printf(" %d",A[i][j]);
        }
        printf("\n");
    }
    printf("sum of diagonal");
    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(i==j){
                    printf(" %d ",A[i][j]);
                    sum = sum + A[i][j];
                }
            }

    }

 printf("\nsum of diagonal = %d", sum);
}

//12...sum of upper and lower elements..
{
    int i,j,row,col,uppersum=0,lowersum=0;
    int A[10][10],B[10][10],C[10][10];

    printf("enter row and col:");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("a[%d][%d]:",i,j);
            scanf(" %d",&A[i][j]);
        }
        printf("\n");
    }

     printf("A= ");
    for(i=0;i<row;i++){
            printf("\t");
        for(j=0;j<col;j++){
        printf(" %d",A[i][j]);
        }
        printf("\n");
    }
     printf("sum of upper and lower elements");
    for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(i<j){
                    uppersum = uppersum + A[i][j];
                }
                 if(i>j){
                    lowersum = lowersum + A[i][j];
                }
            }
    }
    printf("\nsum of upper elements = %d\n",uppersum);
     printf("sum of lower elements = %d\n",lowersum);
}
