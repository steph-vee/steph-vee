#include<iostream>
#include<vector>
using namespace std;

int versusScore(int yourAtk,int turn);

void printResult(int yourAtk,int turn);

int main()
{
	int turn = 0;
	int yourAtk;
	int score = 0;
	
	
	
	while(turn!=5){
		
		cin >> yourAtk;
		
		switch (yourAtk){
		
		case 1:
		score+=versusScore(yourAtk,turn);
		printResult(yourAtk,turn);
		turn++;
		break;
		
		case 2:
		score+=versusScore(yourAtk,turn);
		printResult(yourAtk,turn);
		turn++;
		break;
		
		case 3:
		score+=versusScore(yourAtk,turn);
		printResult(yourAtk,turn);
		turn++;
		break;
		
		default:
		cout << "Unrecognized input";
		}
	}
	
	if(turn==5)
	{
		cout << "\n" << score;
	}
}


int versusScore(int yourAtk,int turn){
	
vector<int> aiAtk = {1,3,2,1,1};
vector<int> logic = {0,1,2,3,1,2};	
	if(logic[yourAtk]==aiAtk[turn])
		{
			return 0;
		}
else if(logic[yourAtk+1]==aiAtk[turn])	
		{
			return 0;
		}
else if(logic[yourAtk+2]==aiAtk[turn])
		{
			return 1;	
		}
		
		
}


void printResult(int yourAtk,int turn){
	
vector<int> aiAtk = {1,3,2,1,1};
vector<int> logic = {0,1,2,3,1,2};	
	if(logic[yourAtk]==aiAtk[turn])
		{
			cout << "Draw!\n";
		}
else if(logic[yourAtk+1]==aiAtk[turn])	
		{
			cout << "You lose!\n";
		}
else if(logic[yourAtk+2]==aiAtk[turn])
		{
			cout << "You win!\n";	
		}
		
		
}
	
	
	

