#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//project related to tic-tock game.
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void system();

int print()
{   system("cls");
	printf("|_%c__|_%c__|_%c__|\n",a[1],a[2],a[3]);
	printf("|_%c__|_%c__|_%c__|\n",a[4],a[5],a[6]);
	printf("|_%c__|_%c__|_%c__|\n",a[7],a[8],a[9]);
	
}
int check()
{
	if(a[1]==a[4]&&a[4]==a[7])
	{
		return 1;
	}
	if(a[2]==a[5]&&a[5]==a[8])
	{
		return 1;
	}
	if(a[3]==a[6]&&a[6]==a[9])
	{
		return 1;
	}
	if(a[1]==a[2]&&a[2]==a[3])
	{
		return 1;
	}
	if(a[4]==a[5]&&a[5]==a[6])
	{
		return 1;
	}
	if(a[7]==a[8]&&a[8]==a[9])
	{
		return 1;
	}
	if(a[1]==a[5]&&a[5]==a[9])
	{
		return 1;
	}
	if(a[3]==a[5]&&a[5]==a[7])
	{
		return 1;
	}
	int count;
	for(int i=1;i<=9;i++)
	{
		if(a[i]=='X'||a[i]=='O')
		{
			count++;
		}
	}
	if(count==9)
	{
		return 0;
	}
	return -1;
	
}
int main()
{
	print();
	int player=1;
	int input;
	while(1>0)
	{   player=(player%2==0)?2:1;
		char mark=(player==1)?'X':'O';
		printf("enter number of player %d\n",player);
		scanf("%d",&input);
		if(input<1||input>9)
		{
			printf("invalid");
			break;
		}
		a[input]=mark;
		print();
		int result=check();
		if(result==1)
		{
			printf("winner:%d",player);
			break;
		}
		if(result==0)
		{
			printf("draw");
			break;
		}
		player++;
	}
	return 0;
}
