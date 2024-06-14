#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
//project related to rock,paper,scissor.
void system();
int you,computer;
void print()
{   system("cls");	
	printf("select 1 for rock\n");
	printf("select 2 for paper\n");
	printf("select 3 for scissor\n");
	
}
char a[5]="rock";
char b[6]="paper";
char c[8]="scissor";
void check()
{   
	if(computer==1&&you==1)
	{
		printf("draw\n");
		printf("computer chosen ");
		puts(a);
		printf("\n");
	}
	if(computer==1&&you==2)
	{
		printf("you won\n");
		printf("computer chosen ");
		puts(a);
		printf("\n");
		
	}
	if(computer==1&&you==3)
	{
		printf("computer won\n");
       	printf("computer chosen ");
		puts(a);
		printf("\n");
		
	}
	if(computer==2&&you==1)
	{
		printf("computer won\n");
		printf("computer chosen ");
		puts(b);
		printf("\n");
	
	}
	if(computer==2&&you==2)
	{
		printf("draw\n");
	   	printf("computer chosen ");
		puts(b);
		printf("\n");
	
	}
	if(computer==2&&you==3)
	{
		printf("you won\n");
	   	printf("computer chosen ");
		puts(b);
		printf("\n");
	
	}
	if(computer==3&&you==1)
	{
		printf("you won\n");
		printf("computer chosen ");
		puts(c);
		printf("\n");
	
	}
	if(computer==3&&you==2)
	{
		printf("computer won\n");
		printf("computer chosen ");
		puts(c);
		printf("\n");
	
	}
	if(computer==3&&you==3)
	{
		printf("draw\n");
	    printf("computer chosen ");
		puts(c);
		printf("\n");
	
	}
}
void comput()
{   label:
	srand(time(NULL));
	computer=rand()%4;
  	if(computer==0)
	{
		goto label;
	}
	print();
	
}
int main()
{   comput();
    while(1>0)
    {	
    scanf("%d",&you);
    if(you<1||you>3)
    {
    	printf("wrong input");
    	break;
	}
	check();
    }

	return 0;
}
