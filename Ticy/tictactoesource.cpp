
#include <string>
#include <conio.h>
#include <iostream>
using namespace std;
string state;
void initboard(){
	state = "123456789";
}
void showboard(){
	system("cls");
	cout << "     " << state[0] << "   |    " << state[1] << "    |    " << state[2] << "   \n";
	cout << " --------+---------+--------\n";
	cout << "     " << state[3] << "   |    " << state[4] << "    |    " << state[5] << "   \n";
	cout << " --------+---------+--------\n";
	cout << "     " << state[6] << "   |    " << state[7] << "    |    " << state[8] << "   \n";
}
void ask(char turn){
	int move;
	cout << turn << "'s turn! Where would you like to go?\n";
	do {
		do {
			cin >> move;
			// TODO: Dummy Proof: don't crash on letters
		} while (move < 1 || move > 9);
	} while (state[move - 1] == 'X' || state[move - 1] == 'O');

	state[move - 1] = turn;
}
void gamestart(){
	initboard();
	while (true){
		showboard();
		ask('X'); 
		showboard();
		ask('O');
	}
}
int main(){
	string userresponse;
	cout << "Do you think you have what it takes to battle me in...TIC TAC TOE?\n";
	cin >> userresponse;
	if (userresponse == "yes" || userresponse == "Yes"){
		cout << "Then bring it on!\n";
		gamestart();
	}
	else cout << "Come back when you are ready to face me WEAKLING!!!\n";
	_getch();
	return 0;
}
