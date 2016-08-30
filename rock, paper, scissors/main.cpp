#include<iostream>
#include <cstdlib>
#include <time.h>
int hand;
int comphand;
bool gameDone = false;
bool win;
bool lose;

int ComputerPick()
{
	
	comphand = rand() % 4 + 0;
	return 0;
}

void Displaychoice(int varA, int varB)
{
	if (varA == 1)
	{
		printf("You picked Rock\n");
	}
	else if (varA == 2)
	{
		printf("You picked Paper\n");
	}
	else if (varA == 3)
	{
		printf("You picked Scissors\n");
	}
	if (varB == 1)
	{
		printf("The computer picks Rock\n");
	}
	else if (varB == 2)
	{
		printf("The computer picks Paper\n");
	}
	else if (varB == 3)
	{
		printf("The computer picks Scissors\n");
	}
	//else
	//{
	//	printf("That wasnt't an option\n");
	
	//}
	system("color ff");
}

void Shoot(int hand, int comphand)
{
	if (hand == 1 && comphand == 3)
	{
		printf("Rock breaks scissors, Player you have won\n");
		gameDone = true;
	}
	else if (hand == 2 && comphand == 1)
	{
		printf("Paper covers rock, Player you have won\n");
		gameDone = true;
	}
	else if (hand == 3 && comphand == 2)
	{
		printf("scissors cut paper, Player you have won\n");
		gameDone = true;
	}
	if (hand == 1 && comphand == 2)
	{
		printf("Paper covers rock, Computer wins\n");
		//gameDone = true;
	}
	else if (hand == 2 && comphand == 3)
	{
		printf("Scissors cuts paper, Computer wins\n");
		//gameDone = true;
	}
	else if (hand == 3 && comphand == 1)
	{
		printf("Rock breaks scissors, Computer wins\n");
		//gameDone = true;
	}
	else if (hand == comphand)
	{
		printf("Tie... so basically you both won\n");
	}
	system("color 00");
	system("pause");
}


int main()
{
	while (gameDone == false)
	{
		printf("[1] Rock, [2] Paper, or [3] Scissors?\n");
		scanf_s("%d", &hand);
		ComputerPick();
		Displaychoice(hand, comphand);
		Shoot(hand, comphand);
	}
}