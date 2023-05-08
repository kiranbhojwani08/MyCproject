#include<stdio.h>
#include<conio.h>
typedef struct bill
{
	int id;
	char name[30];
	int totalamount;
	char modeofpayment[30];
} bill;
void binput(bill *bi)
{
	printf("\n\t enter id of bill:");
	scanf("%d",&bi->id);

	printf("\n\t enter name of customer:");
	scanf("%s",&bi->name);

	printf("\n\t enter total amount of customer:");
	scanf("%d",&bi->totalamount);

	printf("\n\t enter mode of paymer:");
	scanf("%s",&bi->modeofpayment);

}
void bshow(bill b)
{
	printf("\n\t id              of bill is: %d",bi.id);
	printf("\n\t name            of customer is: %s",bi.name);
	printf("\n\t total amount    of customer is: %d",bi.totalamount);
	printf("\n\t mode of payment of customer is: %s",bi.modeofpayment);
}