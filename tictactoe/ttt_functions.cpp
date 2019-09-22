#include <iostream>
#include <vector>
using namespace std;



void intro(){
	cout << "|------------------------|\n";
	cout << "| WELCOME TO TIC TAC TOE |\n";
	cout << "|------------------------|\n";
}



//Checks if a player has won. Should be used to end the game.
bool victory(bool player[9]){
	if ((player[0]&&player[1]&&player[2])||(player[3]&&player[4]&&player[5])||(player[6]&&player[7]&&player[8])||(player[0]&&player[3]&&player[6])||(player[1]&&player[4]&&player[7])||(player[2]&&player[5]&&player[8])||(player[0]&&player[4]&&player[8])||(player[2]&&player[4]&&player[6])){
		return true;
	}
	else {
		return false;
	}	
}


//checks if we have a stalemate. Should be used to end the game.
bool stalemate(bool x_player[9],bool o_player[9]){
	bool result = true;
	for (int i2=0; i2 < 9; i2 ++){
		if (!(x_player[i2]||o_player[i2])){
			result = false;
		}
	}
	return result;
}
	
//generates a picture of the current grid	
void get_grid(bool x_player[9],bool o_player[9]){
	
	char x = 'X';
	char o = 'O';
	char s = (char) ' ';
	
	char spaces[9]; //= {char tl, char tc, char tr, char ml, char mc, char mr, char bl, char bc, char br};
	
	for (int i = 0; i <9; i++){
		if (x_player[i]){
			spaces[i] = x;
		}
		else if (o_player[i]){
			spaces[i]= o;
		}
		else {
			spaces[i] = s;
		}
	
	}
	cout <<	"|-----------|\n";
	cout << "|   |   |   |\n";
	cout << "| " << spaces[0] << " | "<< spaces[1] <<" | " << spaces[2] << " |\n";
	cout << "|   |   |   |\n";
	cout << "|-----------|\n";
	cout << "|   |   |   |\n";
	cout <<	"| " << spaces[3] << " | "<< spaces[4] <<" | " << spaces[5] << " |\n";
	cout <<	"|   |   |   |\n";
	cout << "|-----------|\n";
	cout <<	"|   |   |   |\n";
	cout <<	"| " << spaces[6] << " | "<< spaces[7] <<" | " << spaces[8] << " |\n";
	cout <<	"|   |   |   |\n";
	cout <<	"|-----------|\n";
	
	
}
	//produces a player choice
	
int choice(bool x_player[9],bool o_player[9]){
	
	char x = 'X';
	char o = 'O';
	//char s = char(32);
	int input;
	
	char spaces[9];
	
	for (int i = 0; i <9; i++){
		if (x_player[i]){
			spaces[i]= x;
		}
		else if (o_player[i]){
			spaces[i]= o;
		}
		else {
			char a = '0' + i+1;
			spaces[i] = a;
		}
	}
	
	
	cout << "Choose your next move:\n";
	
	cout <<	"|-----------|\n";
	cout << "|   |   |   |\n";
	cout << "| " << spaces[0] << " | "<< spaces[1] <<" | " << spaces[2] << " |\n";
	cout << "|   |   |   |\n";
	cout << "|-----------|\n";
	cout << "|   |   |   |\n";
	cout <<	"| " << spaces[3] << " | "<< spaces[4] <<" | " << spaces[5] << " |\n";
	cout <<	"|   |   |   |\n";
	cout << "|-----------|\n";
	cout <<	"|   |   |   |\n";
	cout <<	"| " << spaces[6] << " | "<< spaces[7] <<" | " << spaces[8] << " |\n";
	cout <<	"|   |   |   |\n";
	cout <<	"|-----------|\n";
	
	cout << "1) Top right\n2) Top center\n3) Top right\n4) Middle left\n5) Middle center\n6) Middle right\n7) Bottom left\n8) Bottom center\n9) Bottom right\n";
	while (!(cin >> input)||input <1||input>9||x_player[input-1]||o_player[input-1])
	{
		cin.clear();
		cin.ignore();
		cout << "Please enter a number from 1 to 9 from an unoccupied position.";
	}
	

	
	return input;
	
	}