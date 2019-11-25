#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char m[3][3];
int count, flag = 0;
void slp()
{
	long int i, a = 0;
	for (i = 0; i < 9999999; i++)
	{
		a++;
	}
}
void display(int x, int o)
{
	int i, j;
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (x == 1 && o == 0)
			{
				if (m[0][0] == '_')
				{
					m[0][0] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 2 && o == 0)
			{
				if (m[0][1] == '_')
				{
					m[0][1] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 3 && o == 0)
			{
				if (m[0][2] == '_')
				{
					m[0][2] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 4 && o == 0)
			{
				if (m[1][0] == '_')
				{
					m[1][0] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 5 && o == 0)
			{
				if (m[1][1] == '_')
				{
					m[1][1] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 6 && o == 0)
			{
				if (m[1][2] == '_')
				{
					m[1][2] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 7 && o == 0)
			{
				if (m[2][0] == '_')
				{
					m[2][0] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 8 && o == 0)
			{
				if (m[2][1] == '_')
				{
					m[2][1] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 9 && o == 0)
			{
				if (m[2][2] == '_')
				{
					m[2][2] = 'X';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				x = 0;
			}
			else if (x == 0 && o == 1)
			{
				if (m[0][0] == '_')
				{
					m[0][0] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 2)
			{
				if (m[0][1] == '_')
				{
					m[0][1] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 3)
			{
				if (m[0][2] == '_')
				{
					m[0][2] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 4)
			{
				if (m[1][0] == '_')
				{
					m[1][0] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 5)
			{
				if (m[1][1] == '_')
				{
					m[1][1] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 6)
			{
				if (m[1][2] == '_')
				{
					m[1][2] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 7)
			{
				if (m[2][0] == '_')
				{
					m[2][0] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 8)
			{
				if (m[2][1] == '_')
				{
					m[2][1] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			else if (x == 0 && o == 9)
			{
				if (m[2][2] == '_')
				{
					m[2][2] = 'O';
				}
				else
				{
					printf("\nINVALID MOVE! YOU LOST YOUR PRECIOUS TURN\n");
					flag = 1;
				}
				o = 0;
			}
			printf("%c\t", m[i][j]);
		}
		printf("\n\n");
	}
}
int result()
{
	int r = -1;
	count++;
	if (m[0][0] == m[0][1] && m[0][1] == m[0][2]) //case 1
	{
		if (m[0][0] == 'X')
			r = 1;
		else if (m[0][0] == 'O')
			r = 0;
	}
	else if (m[0][0] == m[1][1] && m[1][1] == m[2][2]) //case 2
	{
		if (m[0][0] == 'X')
			r = 1;
		else if (m[0][0] == 'O')
			r = 0;
	}
	else if (m[0][0] == m[1][0] && m[1][0] == m[2][0]) //case 3
	{
		if (m[0][0] == 'X')
			r = 1;
		else if (m[0][0] == 'O')
			r = 0;
	}
	else if (m[1][0] == m[1][1] && m[1][1] == m[1][2]) //case 4
	{
		if (m[1][0] == 'X')
			r = 1;
		else if (m[1][0] == 'O')
			r = 0;
	}
	else if (m[2][0] == m[2][1] && m[2][1] == m[2][2]) //case 5
	{
		if (m[2][0] == 'X')
			r = 1;
		else if (m[2][0] == 'O')
			r = 0;
	}
	else if (m[0][1] == m[1][1] && m[1][1] == m[2][1]) //case 6
	{
		if (m[0][1] == 'X')
			r = 1;
		else if (m[0][1] == 'O')
			r = 0;
	}
	else if (m[0][2] == m[1][2] && m[1][2] == m[2][2]) //case 7
	{
		if (m[0][2] == 'X')
			r = 1;
		else if (m[0][2] == 'O')
			r = 0;
	}
	else if (m[0][2] == m[1][1] && m[1][1] == m[2][0]) //case 8
	{
		if (m[0][2] == 'X')
			r = 1;
		else if (m[0][2] == 'O')
			r = 0;
	}
	return r;
}
int check(int Z, char P1[], char P2[])
{
	if (Z == 1)
	{
		printf("\n\t----------- %s WINS ------------", P1);
		return 1;
	}
	else if (Z == 0)
	{
		printf("\n\t----------- %s WINS ------------", P2);
		return 0;
	}
	else if (count == 9)
	{
		printf("\n\t----------- ITS A DRAW ---------------");
		return 9;
	}
	else
		return 12;
}
void main()
{
	clrscr();
	char p1[100], p2[100];
	int ch, R, i, j, exit = -1, k = 1;
	printf("_____  _____   ___   _____   _	  __      _____  ___     ___");
	slp();
	printf("\n  |      |    |	       |    / \\  |          |   |   |   |");
	slp();
	printf("\n  |  	 |    |    =   |   | = | |      =   |   |   |   |==");
	slp();
	printf("\n  |    __|__  |___     |   |   | |__        |   |___|   |___\n");
	slp();

	printf("\n\n1P (X) : ENTER YOUR NAME = ");
	gets(p1);
	printf("\n2P (O) : ENTER YOUR NAME = ");
	gets(p2);
	printf("\n------------RULES-----------\n");
	printf("1.Each player gets a single turn\n");
	slp();
	printf("2.Entering a invalid position will cost you your move\n");
	slp();
	printf("3.Player to first get a streak vertically / horizontally / diagonally wins the  game\n");
	slp();
	printf("4.Enter the location of your move as per the positions in the format shown below:\n");
	slp();
	slp();
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", k);
			k++;
		}
		printf("\n");
	}

	do
	{
		count = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				m[i][j] = '_';
			}
		}
		display(0, 0);
		printf("\n\n%s's Turn :(X) \n", p1);
		printf(">>>");
		scanf("%d", &ch);
		R = result();
		display(ch, 0);
		printf("\n\n%s's Turn :(O) \n", p2);
		printf(">>>");
		scanf("%d", &ch);
		display(0, ch);
		R = result();
		R = -1;
		i = 2;
		while (count <= 9 && i <= 9)
		{
			printf("\n\n%s's Turn :(X) \n", p1);
			printf(">>>");
			scanf("%d", &ch);
			display(ch, 0);
			R = result();
			R = check(R, p1, p2);
			if (flag != 1)
			{
				i++;
				flag = 0;
			}
			if (flag == 1)
			{
				count--;
				flag = 0;
			}
			if (R == 1 || R == 0 || R == 9)
				break;

			printf("\n\n%s's Turn :(O) \n", p2);
			printf(">>>");
			scanf("%d", &ch);
			display(0, ch);
			R = result();
			R = check(R, p1, p2);
			if (flag != 1)
			{
				i++;
				flag = 0;
			}
			if (flag == 1)
			{
				count--;
				flag = 0;
			}
			if (R == 1 || R == 0 || R == 9)
				break;
		}
		printf("\n\nPLAY AGAIN ??\nHit '1' to keep playing \nHit '0' to EXIT\n>>>");
		scanf("%d", &exit);
		if (exit == 0)
		{
			printf("\nARE YOU SURE YOU WANT TO QUIT THIS AMAZING GAME??\n0.EXIT\t\t1.PLAY AGAIN\n>>>");
			scanf("%d", &exit);
		}
	} while (exit != 0);
	printf("\n\n====================================================");
	printf("\n _____        __                    ___    ");
	slp();
	printf("\n   |   |   | |  | |\\  | |  /   \\ / |   | |   |");
	slp();
	printf("\n   |   |---| |--| | \\ | |-   -  |  |   | |   | ");
	slp();
	printf("\n   |   |   | |  | |  \\| |  \\    |  |___| |___| ");
	slp();
	printf("\n\n\t\t\t* * *");
	slp();
	getch();
}