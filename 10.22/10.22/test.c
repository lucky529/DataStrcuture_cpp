#include"game.h"





void menu()

{

	printf("********************\n");

	printf("*****1.��Ϸ��ʼ*****\n");

	printf("*****0.��Ϸ�˳�*****\n");

	printf("********************\n");

}



void game()

{

	char mine[ROWS][COLS]={0};

	char show[ROWS][COLS]={0};

	InitBoard(mine,ROWS,COLS,'0');

	InitBoard(show,ROWS,COLS,'*');

	Setmine(mine,ROW,COL);

	/*DisplayBoard(mine,ROW,COL);*/	

	DisplayBoard(show,ROW,COL);

	SafeMine(mine,show,ROW,COL);
	
	FindMine(mine,show,ROW,COL);

}

int main()

{

	int input;

	srand((unsigned int)time(NULL));

	do

	{

		menu();

		scanf("%d",&input);



		switch(input)

		{

		case 1:

			game();

			break;

		case 0:

			printf("��Ϸ�˳�\n");

			break;

		default:

			printf("��������\n");

			break;

		}

	}while(input);

	return 0;

}