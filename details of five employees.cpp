//C program to store the details of five employees and print them
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct emp
{
    char name[20];
    int empID;
    char exp[30];
    float salary;
};
int main()
{
  int i;
  struct emp e[5];
  for(i=0;i<5;i++)
  {
      printf("\nEnter name of employee:");
      scanf("%s",&e[i].name);
      printf("Enter employee ID:");
      scanf("%d",&e[i].empID);
      printf("Enter experience:");
      scanf("%s",&e[i].exp);
      printf("Enter Salary:");
      scanf("%f",&e[i].salary);
  }
  printf("\nDetails of the Employees:\n");
  for(i=0;i<5;i++)
  {
      printf("\nName:%s ",e[i].name);
      printf("\nEmpID:%d ",e[i].empID);
      printf("\nExp:%s ",e[i].exp);
      printf("\nSalary:%0.2f ",e[i].salary);
      printf("\n");
  }
  return 0;
}

