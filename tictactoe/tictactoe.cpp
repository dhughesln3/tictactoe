#include <iostream>
#include <vector>

using namespace std;

bool x_player[9];
bool o_player[9];

//declarations
void intro();
bool victory(bool victplayer[9]);
bool stalemate(bool s1player[9],bool s2player[9]);
void get_grid(bool g1player[9],bool g2player[9]);
int choice(bool c1player[9],bool c2player[9]);



//char places[9];

int main(){
	
	for(int k = 0; k <9; k ++){
	x_player[k]=false;
	o_player[k]=false;
}
/*	
	|-----------|
	|   |   |   |
	| 1 | 2 | 3 |
	|   |   |   |
	|-----------|
	|   |   |   |
	| 4 | 5 | 6 |
	|   |   |   |
	|-----------|
	|   |   |   |
	| 7 | 8 | 9 |
	|   |   |   |
	|-----------|
	*/
	intro();
	
	bool xturn = true;
	
	bool xvict = victory(x_player);
	bool ovict = victory(o_player);
	bool smate = stalemate(x_player, o_player);
	
	
	//while loop describes turn structure, x goes first
	
	
	while (!(xvict||ovict||smate)){
		
		cout << "Current state of play:\n";
		
		//get_grid(x_player,o_player);
		
		(xturn)? cout << "|---------------|\n|X player's turn|\n|---------------|\n" : cout << "|---------------|\n|O player's turn|\n|---------------|\n";
		
		int j = choice(x_player, o_player)-1;
		
		if (xturn){
			
		x_player[j] = true;
		xturn = false;
			
		}
		
		else {
		o_player[j] = true;
		xturn = true;
		}
	xvict = victory(x_player);
	ovict = victory(o_player);
	smate = stalemate(x_player, o_player);
	
		
	}
	
	if (victory(x_player)){
		get_grid(x_player,o_player);
		cout << "X wins!";
	}
	else if (victory(o_player)){
		get_grid(x_player,o_player);
		cout << "O wins!";
	}
	
	else {
		get_grid(x_player,o_player);
		cout << "Stalemate.";
	}
	
	return 0;
}