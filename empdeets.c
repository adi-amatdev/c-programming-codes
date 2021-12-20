#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
struct employe
{
  int ID;
  char name[50];
  float salary;
  char gender;
};
typedef struct employe EMP;
void read_deets (EMP emp[], int n);
void print_deets (EMP emp[], int n);
void find_name (EMP emp[], int n);
void find_gender (EMP emp[], int n);
EMP emp[size];
int
main ()
{
  int ch, n;
  printf ("Enter employee count : \n");
  scanf ("%d", &n);
  printf ("Enter the employee details : \n");
  read_deets (emp, n);
  printf ("\n The details of the employees are : \n");
  print_deets (emp, n);
  for (;;)
    {

      printf ("\n Enter 1 to search for employee by name \n\
   enter 2 to search for employee by gender \n\
   enter 3 to exit . ");
      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  find_name (emp, n);
	  break;
	case 2:
	  find_gender (emp, n);
	  break;
	case 3:
	  exit (0);

	}
    }
  return 0;
}

void
read_deets (EMP emp[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      printf ("\n Reading for %d employee. \n", i + 1);
      printf ("\n ID     SALARY   GENDER     NAME\n");
      scanf ("%d %f %c %[^\n]%*c", &emp[i].ID, &emp[i].salary, &emp[i].gender,
	     emp[i].name);
    }
  return;
}

void
print_deets (EMP emp[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      printf ("\n details of %d employee. \n", i + 1);
      printf ("\n ID       NAME           SALARY       GENDER\n");
      printf ("%d         %s        %.3f       %c", emp[i].ID, emp[i].name,
	      emp[i].salary, emp[i].gender);
    }
  return;
}

void
find_name (EMP emp[], int n)
{
  char str1[100];
  int i;
  printf ("\n Enter the name to be searched :\n ");
  scanf("%s",str1);
  printf ("\n the details of %s are :", str1);
  for (i = 0; i < n; i++)
    {
      if (strcmp (str1, emp[i].name) == 0)
	{
	  printf ("\n ID         name           salary      gender \n ");
	  printf ("%d          %s            %.3f           %c \n\n ", emp[i].ID,
		  emp[i].name, emp[i].salary, emp[i].gender);
	}
      
    }
  return;
}

void
find_gender (EMP emp[], int n)
{
  char gend;
  int i;
  printf ("\n Enter gender of employee to be displayed :\n ");
  scanf (" %c%*c", &gend);
  printf ("\n Id      name          salary \n ");
  for (i = 0; i < n; i++)
    {
      if (gend == emp[i].gender)
	{
	  printf ("emp [%d]  %d    %s    %.3f \n\n", i + 1, emp[i].ID,
		  emp[i].name, emp[i].salary);
	}
    }
  return;
}
