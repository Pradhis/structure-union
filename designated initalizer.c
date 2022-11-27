#include <stdio.h>
struct numbers
{
   int n1,n2,n3,n4;
};
int main()
{
    struct numbers s1 = {.n2 = 10,.n1 = 20,.n4=30,.n3=40};
    struct numbers s2 = {.n4=20};
    printf ("n1: %d, n2: %d n3: %d, n4: %d\n", s1.n1,s1.n2,s1.n3,s1.n4);
    printf ("n4: %d",s2.n4);
   return 0;
}
