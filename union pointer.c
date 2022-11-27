#include<stdio.h>
union abc{
int a;
char b;
};
int main()
{
    union abc var;
    var.a=100;
    union abc *p=&var;
    printf("%d %c",p->a,p->b);
    return 0;
}
