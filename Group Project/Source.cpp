#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	//SMS menu
	int num_selected;//which numbers that user input
	cout << endl;
	std::cout << "*** SMS Main Menu ***" << endl;//text
	std::cout << "[1] Load Starting Data";
	std::cout << "\n[2] Show Student Records";
	std::cout << "\n[3] Add / Delete Students";
	std::cout << "\n[4] Edit Students";
	std::cout << "\n[5] Generate Transcript";
	std::cout << "\n[6] Credits and Exit" << endl;
	std::cout << "*************************\n";
	cout << "options 1 ~ 6" << endl;
	std::cin >> num_selected;//which numbers that user input



	switch (num_selected)//switch used for detect what the user input
	{
	case 1:
	{
		cout << "test";
		cout << "test";
		//Load Starting Data
		break;
	}
	case 2:
	{
		//Show Student Records
		break;
	}
	case 3:
	{
		//Add / Delete Students
		break;
	}
	case 4:
	{
		//Edit Students
		break;
	}
	case 5:
	{
		//Generate Transcript
		break;
	}
	case 6:
	{
		cout << "test";
		//Credits and Exit
		break;
	}
	default:
	{
		cout << "The number is not in 1-6";
	}
	}
	return 0;
}
