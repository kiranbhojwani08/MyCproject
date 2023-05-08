#include<stdio.h>
#include<conio.h>
typedef struct customer
{
	int id;
	char name[30];
	long int phone;
	long int quantity;
	char address[30];
	char product[30];
	char department[30];
} customer;
void cinput(customer *cu)
{
	printf("\n\t enter customer id:");
	scanf("%d",&cu->id);

	printf("\n\t enter customer name:");
	scanf("%s",&cu->name);

	printf("\n\t enter customer phone number:");
	scanf("%ld",&cu->phone);

	printf("\n\t enter quantity of customer:");
	scanf("%ld",&cu->quantity);

	printf("\n\t enter address of customer:");
	scanf("%s",&cu->address);

	printf("\n\t enter product of customer:");
	scanf("%s",&cu->product);

	printf("\n\t enter department of customer:");
	scanf("%s",&cu->department);

}
void cshow(customer cu)
{
	printf("\n\t id         of customer is: %d",cu.id);
	printf("\n\t name       of customer is: %s",cu.name);
	printf("\n\t number     of customer is: %ld",cu.phone);
	printf("\n\t quantity   of customer is: %ld",cu.quantity);
	printf("\n\t address    of customer is: %s",cu.address);
	printf("\n\t product    of customer is: %s",cu.product);
	printf("\n\t department of customer is: %s",cu.department);
}