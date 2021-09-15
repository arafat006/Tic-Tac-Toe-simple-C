#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void clrscr()
{
	system("cls");
}
void ticintro()
{
	printf("     #Tic Tac Toe#\n");
	printf("  Mode: \"Multi-player\"");
	printf("\n\n");
}
int main()
{
	int game = 0, round=0;
	while (game < 2)
	{
        clrscr();
		ticintro();
		//show off for first round
		int m[4][4];
		//graphics
		int a = 1, b = 1, c = 0, d = 0;
		while (a <= 3)
		{
			b = 1;
			c = 0;
			while (b <= 3)
			{
				m[a][b] = 0;
				if (m[a][b] == 0)
				{
					printf("       ");
				}
				if (c < 2)
				{
					printf("|");
				}
				c++;
				b++;
			}
			if (d < 2)
			{
				printf("\n-------|-------|------\n");
			}
			d++;
			a++;
		}
		printf("\n");


		//first game play
		int player = 0;

		int p = 0, q = 0;
		while (player < 9)
		{
			d = 0;
			if (player % 2 == 0)
			{
				printf("\nplayer 1 :");
			}
			else if (player % 2 == 1)
			{
				printf("\nplayer 2 :");
			}
			scanf("%d%d", &p, &q);
			//prob for p and q
			if ((0 < p) && (p<4) || (q>0) && (q < 4))
			{

				clrscr();

				if ((m[p][q] == 5) || (m[p][q] == 8))
				{
					//graphics
					ticintro();
					a = 1, b = 1, d = 0;

					while (a <= 3)
					{
						b = 1;
						c = 0;

						while (b <= 3)
						{

							if (m[a][b] == 0)
							{
								printf("       ");
							}
							//5 # 8
							else if (m[a][b] == 5)
							{
								printf("   O   ");
							}
							else if (m[a][b] == 8)
							{
								printf("   X   ");
							}

							if (c < 2)
							{
								printf("|");
							}
							c++;
							b++;
						}
						if (d < 2)
						{
							printf("\n-------|-------|------\n");
							d++;
						}
						a++;
					}

				}
				else
				{
					//player value
					if (player % 2 == 0)
					{
						m[p][q] = 8;
					}
					else
					{
						m[p][q] = 5;
					}

					//graphics
					ticintro();
					a = 1, b = 1, d = 0;

					while (a <= 3)
					{
						b = 1;
						c = 0;

						while (b <= 3)
						{

							if (m[a][b] == 0)
							{
								printf("       ");
							}
							//5 # 8
							else if (m[a][b] == 5)
							{
								printf("   O   ");
							}
							else if (m[a][b] == 8)
							{
								printf("   X   ");
							}

							if (c < 2)
							{
								printf("|");
							}
							c++;
							b++;
						}
						if (d < 2)
						{
							printf("\n-------|-------|------\n");
							d++;
						}
						a++;

					}

					//player wins or not
					//1
					if ((m[1][1] == 5) && (m[1][2] == 5) && (m[1][3] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[1][1] == 8) && (m[1][2] == 8) && (m[1][3] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//2
					if ((m[1][1] == 5) && (m[2][2] == 5) && (m[3][3] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[1][1] == 8) && (m[2][2] == 8) && (m[3][3] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//3
					if ((m[1][1] == 5) && (m[2][1] == 5) && (m[3][1] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[1][1] == 8) && (m[2][1] == 8) && (m[3][1] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//4
					if ((m[1][3] == 5) && (m[2][3] == 5) && (m[3][3] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[1][3] == 8) && (m[2][3] == 8) && (m[3][3] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//5
					if ((m[3][1] == 5) && (m[3][2] == 5) && (m[3][3] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[3][1] == 8) && (m[3][2] == 8) && (m[3][3] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//6
					if ((m[1][2] == 5) && (m[2][2] == 5) && (m[3][2] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[1][2] == 8) && (m[2][2] == 8) && (m[3][2] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//7
					if ((m[2][1] == 5) && (m[2][2] == 5) && (m[2][3] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[2][1] == 8) && (m[2][2] == 8) && (m[2][3] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//8
					if ((m[1][3] == 5) && (m[2][2] == 5) && (m[3][1] == 5))
					{
						player = 15;
						printf("\n\nplayer 2 is winner");
					}
					else if ((m[1][3] == 8) && (m[2][2] == 8) && (m[3][1] == 8))
					{
						player = 15;
						printf("\n\nplayer 1 is winner");
					}
					else
					{

					}
					//end of player wins
					player++;
				}
				printf("\n");
			}
			else
			{
				clrscr();
				//graphics for p and q
				ticintro();
				a = 1, b = 1, d = 0;

				while (a <= 3)
				{
					b = 1;
					c = 0;

					while (b <= 3)
					{

						if (m[a][b] == 0)
						{
							printf("       ");
						}
						//5 # 8
						else if (m[a][b] == 5)
						{
							printf("   O   ");
						}
						else if (m[a][b] == 8)
						{
							printf("   X   ");
						}

						if (c < 2)
						{
							printf("|");
						}
						c++;
						b++;
					}
					if (d < 2)
					{
						printf("\n-------|-------|------\n");
						d++;
					}

					a++;

				}
				printf("\n");
			}

		}
		if ((player == 9) || (player == 10))
		{
			printf("\n Draw Match");
		}

		printf("\n\n");

		printf("Do You Want To Play Again ?\n");
		printf("1.Yes  2.No\n");
		scanf("%d", &round);
		switch (round)
		{
		case 1:   game = 0;
			break;
		case 2:   game = 3;
			break;
		default: game = 4;
		}
		game++;

	}
	printf ("\nThanks For Playing\n\n");
	return 0;
}
