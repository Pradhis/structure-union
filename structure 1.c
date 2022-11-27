#include<stdio.h>
struct{
    char *engine;
    char *fuel;
    int fuelcap;
    int seat;
    float mileage;
    } car1,car2;
int main()
{
    car1.engine="190 engine";
    car2.engine="vtvt";
    car1.fuel="1800";
    car2.fuel="200";
    car1.fuelcap=2000;
    car2.fuelcap=3200;
    car1.seat=4;
    car2.seat=8;
    car1.mileage=65;
    car2.mileage=50;
    printf("%s\n",car1.engine);
    printf("%s\n",car2.engine);
    printf("%s\n",car1.fuel);
    printf("%s\n",car2.fuel);
    printf("%d\n",car1.fuelcap);
    printf("%d\n",car2.fuelcap);
    printf("%f\n",car1.mileage);
    printf("%f\n",car2.mileage);
    return 0;


}
