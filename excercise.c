#include<stdio.h>
#pragma pack(1)
struct store{
double price;
union{
struct{
char *title;
char *author;
int pages;
}book;
struct{
    int colour;
    int size;
    char *design;
}shirt;
}item;
};
int main()
{
    struct store S;
    S.item.book.title="WINGS OF FIRE";
    S.item.book.author="Abdul Kalam";
    S.item.book.pages=120;
    //S.item.shirt.price=2000;
    printf("%s\n",S.item.book.title);
    printf("%s\n",S.item.book.author);
    printf("%d\n",S.item.book.pages);
   //printf("%ld\n",S.item.shirt.price);
    return 0;

}
