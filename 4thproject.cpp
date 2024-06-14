#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//project related to banking system.
int totalamount=2000;int amount1;int amount2;int tr;char a[20];int id;
void deposite();void withdraw();void transfer();void check();int list();void system();void display();
int  tadeposite=0;int tawithdraw=0;int tatransfer=0;
int main()
{    
printf("\nenter your name:");
gets(a);  
printf("\nenter your account number:");
scanf("%d",&id);
while(1)
{  system("cls");
   switch(list())
   {
   	case 1:
   		deposite();
   		tadeposite=tadeposite+amount1;
   		break;
   	case 2:
	   withdraw();
	   if(amount2<=totalamount)
   		tawithdraw=tawithdraw+amount2;
	   break;
	 case 3:
	 transfer();
	 if(tr<=totalamount)
   		tatransfer=tatransfer+tr;
	 break;
	 case 4:
	 check();
	 break;
	 case 5:
	 display();	
	 exit(0);
	 default:
	 printf("\ninvalid input");  	
   }
   getch();
   
}
	return 0;
}
int list()
{   int n;
	printf("\nenter 1 for deposite:");
	printf("\nenter 2 for withdraw:");
	printf("\nenter 3 for transfer:");
	printf("\nenter 4 for checking balance:");
	printf("\nenter 5 for exit:\n");
	scanf("%d",&n);
	return n;
}
void deposite()
{  printf("\nenter the amount you want to deposite:");
   scanf("%d",&amount1);
   totalamount=totalamount+amount1;	
}
void withdraw()
{
	printf("\nenter the amount you want to withdraw:");
	scanf("%d",&amount2);
	if(amount2<=totalamount)
	totalamount=totalamount-amount2;
	else
	printf("\n please enter sufficient amount to withdraw");
}
void transfer()
{
	printf("\nenter amount you want to transfer: ");
	scanf("%d",&tr);
	if(tr<=totalamount)
	totalamount=totalamount-tr;
	else
	printf("\n please enter sufficient amount to transfer");
}
void check()
{
	printf("\ntotal amount:%d",totalamount);
	printf("\ntotal amount deposite:%d",tadeposite);
	printf("\ntotal amount withdraw:%d",tawithdraw);
	printf("\ntotal amount transfer:%d",tatransfer);
	
}
void display()
{   printf("\nname:%s",a);
    printf("\naccount number:%d",id);
	printf("\ntotal amount:%d",totalamount);
	printf("\ntotal amount deposite:%d",tadeposite);
	printf("\ntotal amount withdraw:%d",tawithdraw);
	printf("\ntotal amount transfer:%d",tatransfer);
	
}

