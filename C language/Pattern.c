#include<stdio.h>
int main()
/*..1..
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
       for(col=1;col<=row;col++){
        printf(" %d",col);
    }
    printf("\n");
    }
}
//..2..
{
    int n,row,col;
    scanf("%d",&n);
    for(row=n;row>=1;row--){
       for(col=1;col<=row;col++){
        printf(" %d",row);
    }
    printf("\n");
    }
}
//..adding 1&2..
{
   int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
       for(col=1;col<=row;col++){
        printf(" %d",col);
    }
    printf("\n");
    }

     for(row=n-1;row>=1;row--){
       for(col=1;col<=row;col++){
        printf(" %d",row);
    }
    printf("\n");
    }
}

//...4...
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
     for(col=1;col<=n-row;col++){
        printf(" ");
    }
    for(col=1;col<=row;col++)
        printf("%d",col);
    printf("\n");
    }
}

//...5...
{
    int n,row,col;
    scanf("%d",&n);
    for(row=n;row>=1;row--){
     for(col=1;col<=n-row;col++){
        printf(" ");
    }
    for(col=1;col<=row;col++)
        printf("%d",col);
    printf("\n");
    }
}

//...adding 4&5...
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
     for(col=1;col<=n-row;col++){
        printf(" ");
    }
    for(col=1;col<=row;col++)
        printf("%d",col);
    printf("\n");
    }

     for(row=n-1;row>=1;row--){
     for(col=1;col<=n-row;col++){
        printf(" ");
    }
    for(col=1;col<=row;col++)
        printf("%d",col);
    printf("\n");
    }
}

//...6...Rectangle
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
     for(col=1;col<=n;col++){
        printf("*");
    }
    printf("\n");
    }
}

//...7...triangle
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++){
        printf(" ");
    }
     for(col=1;col<=2*row-1;col++){
        printf("*");
    }
    printf("\n");
    }
}

//...7...inverse triangle
{
    int n,row,col;
    scanf("%d",&n);
    for(row=n;row>=1;row--){
    for(col=1;col<=n-row;col++){
        printf(" ");
    }
     for(col=1;col<=2*row-1;col++){
        printf("*");
    }
    printf("\n");
    }
}

//...8...box rectangle
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
            for(col=1;col<=n;col++){
                if(row==1||row==n||col==1||col==n)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}

//...9...box triangle
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
            for(col=1;col<=row;col++){
                if(row==n||col==1||col==row)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}
*/
//...9...draw x
{
    int n,row,col;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
            for(col=1;col<=n;col++){
                if(row==col||row+col==n+1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
    }
}

