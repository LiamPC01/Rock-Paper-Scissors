#include "Header.h"


int main()
{
	std::cout << "ROCK PAPER SCISSORS\n";

	while (PlayerWins < 3 && CompWins < 3)
	{
		Game();
	}
	if (PlayerWins > CompWins)
	{
		std::cout << "YOU WON THE GAME!";
	}
	else
	{
		std::cout << "YOU LOSE THE GAME";
	}
}


void Game()
{
	std::cout << "ENTER (R)OCK (P)APER OR (S)CISSORS\n\n";
	std::cin >> PlayerInput;
	CheckInput();
	FormatInput();
	GetCompInput();
	std::cout << PlayerInput + " VS " + CompInput + "\n";
	CheckRoundWin();
}


void CheckInput()
{
	while (PlayerInput != "r" && PlayerInput != "p" && PlayerInput != "s")
	{
		std::cout << "Inappropriate Input\nPlease Enter (R)OCK (P)APER OR (S)CISSORS\n\n";
		std::cin >> PlayerInput;
	}
}


void FormatInput()
{
	if (PlayerInput == "r")
	{
		PlayerInput = "ROCK";
	}
	else if (PlayerInput == "p")
	{
		PlayerInput = "PAPER";
	}
	else if (PlayerInput == "s")
	{
		PlayerInput = "SCISSORS";
	}
}


void GetCompInput()
{
	srand(time(0));
	int RandNum = rand() % 3;

	if (RandNum == 0)
	{
		CompInput = "ROCK";
	}
	else if (RandNum == 1)
	{
		CompInput = "PAPER";
	}
	else if (RandNum == 2)
	{
		CompInput = "SCISSORS";
	}
}


void CheckRoundWin()
{
	if (PlayerInput == "ROCK" && CompInput == "PAPER")
	{
		CompWins++;
		std::cout << "YOU LOSE THIS ROUND\n\n";
	}
	else if (PlayerInput == "PAPER" && CompInput == "ROCK")
	{
		PlayerWins++;
		std::cout << "YOU WIN THIS ROUND!\n\n";
	}
	else if (PlayerInput == "PAPER" && CompInput == "SCISSORS")
	{
		CompWins++;
		std::cout << "YOU LOSE THIS ROUND\n\n";
	}
	else if (PlayerInput == "SCISSORS" && CompInput == "PAPER")
	{
		PlayerWins++;
		std::cout << "YOU WIN THIS ROUND!\n\n";
	}
	else if (PlayerInput == "ROCK" && CompInput == "SCISSORS")
	{
		PlayerWins++;
		std::cout << "YOU WIN THIS ROUND!\n\n";
	}
	else if (PlayerInput == "SCISSORS" && CompInput == "ROCK")
	{
		CompWins++;
		std::cout << "YOU LOSE THIS ROUND\n\n";
	}
	else if (PlayerInput == "PAPER" && CompInput == "PAPER")
	{
		std::cout << "THIS ROUND IS A TIE\n\n";
	}
	else if (PlayerInput == "ROCK" && CompInput == "ROCK")
	{
		std::cout << "THIS ROUND IS A TIE\n\n";
	}
	else if (PlayerInput == "SCISSORS" && CompInput == "SCISSORS")
	{
		std::cout << "THIS ROUND IS A TIE\n\n";
	}
}



