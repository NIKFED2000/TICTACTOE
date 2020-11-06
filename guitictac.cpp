/*
 *	###  T i c T a c T o e  v 1.0 ###
 *	----- Made by NIKFED ----- 
 *	5.11.2020
 *
 *
 *
 */

#include <iostream>
using namespace std;
class Pole
{
	private:
		
		char arr[11][11] = {
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{'-', '-', '-', '|', '-', '-', '-', '|', '-', '-', '-'},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{'-', '-', '-', '|', '-', '-', '-', '|', '-', '-', '-'},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '},
			{' ', ' ', ' ', '|', ' ', ' ', ' ', '|', ' ', ' ', ' '}
		};
	public:
		void GetPole()
		{
			for(int x = 0; x <= sizeof(arr) / sizeof(*arr) - 1; x++)
			{
				
				for(int y = 0; y <= sizeof(arr) / sizeof(*arr) -1; y++)
				{
					cout << arr[x][y];
				}
				cout << endl;
			}

		}
		void ChangePole(int num, char Side)
		{
			if(num == 1) 
			{
				if(arr[1][1] == ' ')
					arr[1][1] = Side;
				else{cout << "You can't do this" << endl;}
			}
			if(num == 2) {
				if(arr[1][5] == ' ')
					arr[1][5] = Side;
				else{cout << "You cant do this" << endl;}}
			if(num == 3) {
				if (arr[1][9] == ' ')
					arr[1][9] = Side;
				else{cout << "You cant do this" << endl;}}
			if(num == 4) {
				if(arr[5][1] == ' ')
					arr[5][1] = Side;
				else{cout << "You can't do this" << endl;}}
			if(num == 5) {
				if(arr[5][5] == ' ')
					arr[5][5] = Side;
				else{cout << "You can't do this" << endl;}}
			if(num == 6) { 
				if(arr[5][9] == ' ')
					arr[5][9] = Side;
				else{cout << "You can't do this" << endl;}}
			if(num == 7) {
				if(arr[9][1] == ' ')
					arr[9][1] = Side;
				else{cout << "You can't do this" << endl;}}
			if(num == 8) {
				if(arr[9][5] == ' ')
					arr[9][5] = Side;
				else{cout << "You can't do this" << endl;}}
			if(num == 9) {
				if(arr[9][9] == ' ')
					arr[9][9] = Side;
				else{cout << "You can't do this" << endl;}}
		}
		char CheckLogic()
		{
			char res;
			/*Horizontal*/

			if((arr[1][1] == 'X') && (arr[1][5] == 'X') && (arr[1][9] == 'X'))
				res = 'X';
			if((arr[5][1] == 'X') && (arr[5][5] == 'X') && (arr[5][9] == 'X'))
				res = 'X';
			if((arr[9][1] == 'X') && (arr[9][5] == 'X') && (arr[9][9] == 'X'))
				res = 'X';
			if((arr[1][1] == 'O') && (arr[1][5] == 'O') && (arr[1][9] == 'O'))
				res = 'O';
			if((arr[5][1] == 'O') && (arr[5][5] == 'O')&& (arr[5][9] == 'O'))
				res = 'O';
			if((arr[9][1] == 'O') && (arr[9][5] == 'O') && (arr[9][9] == 'O'))
				res = 'O';

			/* Vertical */
			if((arr[1][1] == 'X')&& (arr[5][1] =='X')&& (arr[9][1] == 'X'))
				res = 'X';
			if((arr[1][5] == 'X' ) && (arr[5][5] == 'X') && (arr[9][5] == 'X'))
				res = 'X';
			if((arr[1][9] == 'X') && (arr[5][9] == 'X') && (arr[9][9] == 'X'))
				res = 'X';
			if((arr[1][1] == 'O') && (arr[5][1] == 'O') && (arr[9][1] == 'O'))
				res = 'O';
			if((arr[1][5] == 'O') && (arr[5][5] == 'O') && (arr[9][5] == 'O'))
				res = 'O';
			if((arr[1][9] == 'O') && (arr[5][9] == 'O') && (arr[9][9] == 'O'))
				res = 'O';
			/* Diagonal */

			if((arr[1][1] == 'X') && (arr[5][5] == 'X') && (arr[9][9] == 'X'))
				res = 'X';
			if((arr[1][9] == 'O') && (arr[5][5] == 'O') && (arr[9][1] == 'O'))
				res = 'O';

			if((arr[1][1] != ' ') && (arr[1][5] != ' ') && (arr[1][9] != ' ')
					&& (arr[5][1] != ' ') && (arr[5][5] != ' ') && (arr[5][9] != ' ') 
					&& (arr[9][1] != ' ') && (arr[9][5] != ' ') && (arr[9][9] != ' '))
				res = '-';
			
			return res;
		
		}
};
class PlayerX
{
	public:
		void Say()
		{
			cout << "------ Now Player X ------ " << endl;
		}		
		int GetChar()
		{
			char turn = 'X';
			return turn;
		}
};
class PlayerO
{
	public:
		int GetChar()
		{
			char turn = 'O';
			return turn;
		}
		void Say()
		{
			cout << "------ Now Player O ------ " << endl;
		}

};
int main()
{

	Pole area;
	PlayerX player1;
	PlayerO player2;

	area.GetPole();

	int num;
	for(int step = 1; step <= 10; step++)
	{
		char HOD = player1.GetChar();

		if (step % 2 == 0)
		{	
			HOD = player2.GetChar();
			player2.Say();
		}
		else
		{
			player1.Say();
		}
		cout << "Write a NUM: " << endl;
		cin >> num;
		area.ChangePole(num, HOD);
		system("clear");
		area.GetPole();
		if (step >= 3)
		{
			//area.CheckLogic();
			if (area.CheckLogic() == 'X')
			{
				cout << " X is Winner " << endl;
				break;
			}
			else if (area.CheckLogic() == 'O')
			{
				cout << " O is Winner " << endl;
				break;
			}
			else if(area.CheckLogic() == '-') 
			{
				cout << "Nothing" << endl;
				break;
			}


		}

		

		
	}


	
	return 0;
}
