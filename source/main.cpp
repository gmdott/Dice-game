/*
	PROJETO PARA CALCULAR UM VALOR ALEATÓRIO NA JOGADA DE UM DADO DE 6 LADOS.
*/

#include<iostream>
#include<locale.h>
#include<cstdlib>
//#include<ctime.h>

using namespace std;

void play();
void playagn();

int main()
{
	system("clear");
	char yesOrno;
	cout << "Welcome, do you want to roll the dice? (y/n): ";
	cin >> yesOrno;

	if (yesOrno == 'y' || yesOrno == 'Y') {
		play();
	}

	else if (yesOrno == 'n' || yesOrno == 'N') {
		char outGame;
		cout << "\nWould you like to leave the game? (y/n): ";
		cin >> outGame;
		if (outGame == 'y' || outGame == 'Y') {
			cout << "\nLeaving the game . . .\n";
			exit(0);
		}
		else if (outGame == 'n' || outGame == 'N') {
			cout << "\nOk, starting again...\n\n";
			main();
		}
	}
	else {
		cout << "\nSET 'y' OR 'n' TO ASK!\n";
		cout << " \n";
		main();
	}

	return 0;
}

void play()
{
	srand((unsigned)time(0));
	
	char startAgain;

	int random = (rand() % 6) + 1;

	cout << "\nYour number is: " << random << "\n";

	cout << "\nDo you want to roll again? (y/n): ";
	cin >> startAgain;

	if (startAgain == 'y' || startAgain == 'Y')
	{
		playagn();
	}
	else if(startAgain == 'n' || startAgain == 'N')
	{
		cout << "\nLeaving game . . .\n";
		system("clear");
		exit(0);
	}

}

void playagn()
{
	char rollAgain;

	cout << "\nPress 'r' to roll the dice: ";
	cin >> rollAgain;
	if (rollAgain == 'r' || rollAgain == 'R')
	{
		play();
	}
	else
	{
		char pressAgain;

		cout << "\nYou didn't press 'r', try again: ";
		cin >> pressAgain;
		play();
	}
}
