
#include <string>
#include <conio.h>
#include <iostream>
void gamestart(){
std::cout << "     1   |    2    |    3   \n";
std::cout << " --------+---------+--------\n";
std::cout << "     4   |    5    |    6   \n";
std::cout << " --------+---------+--------\n";
std::cout << "     7   |    8    |    9   \n";
}
int main(){
	std::string userresponse;
	std::cout << "Do you think you have what it takes to battle me in...TIC TAC TOE?\n";
	std::cin >> userresponse;
	if (userresponse == "yes" || userresponse == "Yes"){
		std::cout << "Then bring it on!\n";
		gamestart();
	}
	else std::cout << "Come back when you are ready to face me WEAKLING!!!\n";
	_getch();
	return 0;
}

