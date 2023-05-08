#include<stdio.h>
#include<Conio.h>
typedef struct product
{
	int productid;
	char department[30];
	char name[30];
	long int price;
	long int quantity;
} product;
void pinput(product *prd)
{
	printf("\n\t enter product id:");
	scanf("%d",&prd->productid);

	printf("\n\t enter product department:");
	scanf("%s",&prd->department);

	printf("\n\t enter product name:");
	scanf("%s",&prd->name);

	printf("\n\t enter product price");
	scanf("%ld",&prd->price);

	printf("\n\t enter product quantity");
	scanf("%ld",&prd->quantity);
}
void pshow()
{
	printf("\n\t product id is:         %d",prd.productid);
	printf("\n\t product department is: %s",prd.department);
	printf("\n\t product name is:       %s",prd.name);
	printf("\n\t product price is:      %ld",prd.price);
	printf("\n\t product quantity is:   %ld",prd.quantity);
}