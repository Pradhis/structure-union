#include<stdio.h>
struct car{
int fuel_tank;
int seat;
float mileage;
};
int main()
{
    struct car c[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter car fuel tank capacity:",i+1);
        scanf("%d",c[i].fuel_tank);
        printf("Enter car seat capacity:",i+1);
        scanf("%d",c[i].seat);
        printf("Enter car mileage:",i+1);
        scanf("%f",c[i].mileage);

    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        printf("Car details:\n",i+1);
        printf("fuel tank capacity:%d\n",c[i].fuel_tank);
        printf("seat capacity:%d\n",c[i].seat);
        printf("mileage:%f\n",c[i].mileage);
    }
    return 0;
}
