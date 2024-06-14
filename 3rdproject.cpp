#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//project related to parking of vehicles
int two=0;int three=0;int four=0;int fourplus=0;int amount=0;int count=0;
void twowheels();void threewheels();void fourwheels();void fourpluswheels();void details();
void deletelist();int menu();void system();
int main()
{ while(1)
{  system("cls");
switch(menu())
{   
	case 1:
	twowheels();
	printf("\nentered sucessfully");
	break;
    case 2:
	threewheels();	
	printf("\nentered sucessfully");
	break;	
	case 3:
	fourwheels();
	printf("\nentered sucessfully");
	break;
	case 4:
	fourpluswheels();	
	printf("\nentered sucessfully");
	break;
	case 5:
	details();
	break;
	case 6:
	deletelist();
	printf("\nentered sucessfully");
	break;
	case 7:
	exit(0);	
	default:
	printf("\ninvaild input");	
		

}
getch();
}

return 0;	
}
int menu()
{
	int n;
	printf("\nenter 1 for two wheel vehicles:");
	printf("\nenter 2 for three wheel vehicles:");
	printf("\nenter 3 for four wheel vehicles:");
	printf("\nenter 4 for fourplus wheel vehicles:");
	printf("\nenter 5 for to show vehicles details:");
	printf("\nenter 6 for to delete the details:");
	printf("\nenter 7 for to exit:");
	printf("\n");
	scanf("%d",&n);
	return n;
}
void deletelist()
{
	two=0;
	three=0;
	four=0;
	fourplus=0;
	amount=0;
	count=0;
	details();
}
void details()
{
	printf("\n no of two wheel vehicles:%d",two);
	printf("\n no of three wheel vehicles:%d",three);
	printf("\n no of four wheel vehicles:%d",four);
	printf("\n no of fourplus wheel vehicles:%d",fourplus);
	printf("\n total no of vehicles:%d",count);
	printf("\n total amount recieved for parking:%d",amount);
	printf("\n");
	
}
void twowheels()
{
	two++;
	count++;
	amount=amount+20;
}
void threewheels()
{
	three++;
	count++;
	amount=amount+30;
}
void fourwheels()
{
	four++;
	count++;
	amount=amount+40;
}
void fourpluswheels()
{
	fourplus++;
	count++;
	amount=amount+50;
}
