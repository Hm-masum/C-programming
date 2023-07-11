#include<stdio.h>
/*
//...1...Basic

struct person
{
    int age;
    float salary;

};
int main()
{
    struct person per1,per2;
    per1.age = 27;
    per1.salary = 1234.50;
    printf("Age =%d\n",per1.age);
    printf("salary = %.2f\n",per1.salary);

    per2.age = 227;
    per2.salary = 12234.50;
    printf("Age =%d\n",per2.age);
    printf("salary = %.2f\n",per2.salary);
}

//...2...input output

struct person
{
    int age;
    float salary;

};
int main()
{
    struct person per1,per2;

    printf("enter age per1: ");
    scanf("%d",&per1.age);
    printf("enter salary per1: ");
    scanf("%f",&per1.salary);

    printf("Age = %d\n",per1.age);
    printf("salary = %.2f\n",per1.salary);

    printf("enter age per2 : ");
    scanf("%d",&per2.age);
    printf("enter salary per2 : ");
    scanf("%f",&per2.salary);

    printf("Age =%d\n",per2.age);
    printf("salary = %.2f\n",per2.salary);
}

//...3...initialization
struct person
{
    int age;
    float salary;

};
int main()
{
    struct person per1 ={27,25000.50};
    struct person per2,per3;
    per2.age = 25;
    per2.salary = 30000.45;

    per3 = per2;

    printf("Age = %d\n",per1.age);
    printf("salary = %.2f\n",per1.salary);

    printf("Age = %d\n",per2.age);
    printf("salary = %.2f\n",per2.salary);

    printf("Age = %d\n",per3.age);
    printf("salary = %.2f\n",per3.salary);

    return 0;

}

//...4...Comperison
struct person
{
    int age;
    float salary;

};
int main()
{
    struct person per1 ={27,25000.50};
    struct person per2,per3;
    per2.age = 25;
    per2.salary = 30000.45;

    per3 = per2;

    if(per2.age==per3.age && per2.salary == per3.salary){
        printf("per2 equal to per 3");
    }
    else
        printf("per2 not equal to per 3");
}

//...4...Array of structure
struct person
{
    int age;
    float salary;

};
int main()
{
    struct person per[4];
    int i;

    for(i=0;i<4;i++){
        printf("enter person1 age %d: ",i+1);
        scanf("%d",&per[i].age);
        printf("enter person1 Salary %d: ",i+1);
        scanf("%f",&per[i].salary);
    }

     for(i=0;i<4;i++){
        printf("person%d Age %d\n",i+1,per[i].age);
        printf("person%d Salary %.2f\n",i+1,per[i].salary);
    }
}
//...5...Array with in Array
struct person
{
    char name[50];
    int age;
    float salary;

};
int main()
{
    struct person per[4];
    int i;

    for(i=0;i<4;i++){
        printf("\nEnter name of person %d: ",i+1);
        fflush(stdin);
        gets(per[i].name);
        printf("enter age: ");
        scanf("%d",&per[i].age);
        printf("enter Salary: ");
        scanf("%f",&per[i].salary);
    }

     for(i=0;i<4;i++){
        printf("\nname of person %d: %s\n",i+1,per[i].name);
        printf("person %d Age %d\n",i+1,per[i].age);
        printf("person %d Salary %.2f\n",i+1,per[i].salary);
    }
}
*/
//...6...passing structure variable to function
struct person
{
    char name[50];
    int age;
    float salary;

};
void display(struct person p)
{
    printf("Name: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %.2f\n",p.salary);
}
int main()
{
    struct person person1;

    strcpy(person1.name,"Masum");
    //gets(person1.name);
    person1.age = 22;
    person1.salary = 53453.50;

    display(person1);
}


