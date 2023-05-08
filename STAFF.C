#include<stdio.h>
#include<conio.h>
typedef struct staff
{
	int id;
	char name[30];
	long int salary;
	int dateofjoin;
	char department[30];
} staff;
void sinput(staff *st)
{
	printf("\n\t enter id of staff:");
	scanf("%d",&st->id);

	printf("\n\t enter name of staff:");
	scanf("%s",&st->name);

	printf("\n\t enter salary of staff:");
	scanf("%ld",&st->salary);

	printf("\n\t enter starting date of join:");
	scanf("%d",&st->dateofjoin);

	printf("\n\ enter department of staff:");
	scanf("%s",&st->department);
}
void sshow(staff st)
{
	printf("\n\t id              of staff is: %d",st.id);
	printf("\n\t name            of staff is: %s",st.name);
	printf("\n\t salary          of staff is: %ld",st.salary);
	printf("\n\t date of joining of staff is: %d",st.dateofjoin);
	printf("\n\t department of staff is: %s",st.department);
}
