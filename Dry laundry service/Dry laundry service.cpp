#include<iostream>
#include<string>

//shirts cost 150, suits cost 100 and pants cost 200 to wash. 25%tax

int shirts = 0;
int suits = 0;
int pants = 0;
char answer = 'a';
char restart = 'a';
int main() {
	costs:
	std::cout << "How many shirts do you want us to wash?\n";
	std::cin >> shirts;
	std::cout << "How many suits do you want us to wash?\n";
	std::cin >> suits;
	std::cout << "How many pants do you want us to wash?\n";
	std::cin >> pants;
	std::cout << "Do you wish to finalize this transaction? Y/N\n";
	std::cin >> answer;
	if (answer == 'Y' || answer == 'y') {
		std::cout << "Your total is " << (shirts * 150) + (suits * 100) + (pants * 200) + ((shirts * 150) + (suits * 100) + (pants * 200))*0.25 << "kr\n";
		std::cout << "Transaction pending...\n";
		std::cout << "Have a great day:)";

	}
	else {
		std::cout << "IF YOU ARE NOT HAVING US WASH ANYTHING GET OUT!!\n";
		std::cout << "Last chance, lets start over again, just type R to reset:)\n";
		std::cin >> restart;
	}while (restart == 'R' || restart == 'r')
	{
		goto costs; 
	} 
	 {
		return 0;
	}


	



}