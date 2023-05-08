#include<stdio.h>
#include<conio.h>
typedef struct department
{
	char depname[20];
	char brand[30];
	char product[30];
} department;
void input(department *dep)
{
	printf("\n\t enter department name:");
	scanf("%s",&dep->depname);

	printf("\n\t enter brand of department:");
	scanf("%s",&dep->brand);

	printf("\n\t enter product of department:");
	scanf("%s",&dep->product);
}
void show(department dep)
{
	printf("\n\t\t name  of   department is: %s",dep.depname);
	printf("\n\t\t brand of   department is: %s",dep.brand);
	printf("\n\t\t product of department is: %s",dep.product);
}