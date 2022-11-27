#include<stdio.h>
struct employee{
    char *name;
    int age;
    int salary;
};
int manager()
{
    struct employee manager;
    manager.age-=27;
    if(manager.age>30)
        manager.salary=65000;
    else
        manager.salary=55000;
    return manager.salary;
}
int main()
{
    struct employee emp1;
    struct employee emp2;
    printf("enter employee1 salary:");
    scanf("%d",emp1.salary);
    printf("\nenter employee2 salary:");
    scanf("%d",emp2.salary);
    printf("salary of employee1 is: %d\n",emp1.salary);
    printf("salary of employee2 is: %d\n",emp1.salary);
    printf("salary of manager is: %d\n",manager());
    return 0;

}



