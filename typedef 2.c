#include <stdio.h>
typedef struct employee
{
  int id;
  char name[30];
  int contact;
  char address[100];
}emp;

int main()
{
  emp e1;
  printf("Enter data for employee");
  printf("\nEnter id: ");
  scanf("%d",&e1.id);
  printf("Enter name: ");
  scanf("%s",&e1.name);
  printf("Enter contact: ");
  scanf("%d",&e1.contact);
  printf("Enter address: ");
  scanf("%s",&e1.address);
  printf("Details of employee: ");
  printf("\nId: %d", e1.id);
  printf("\nName: %s", e1.name);
  printf("\nContact: %d",e1.contact);
  printf("\nAddress: %s", e1.address);
  return 0;
}
