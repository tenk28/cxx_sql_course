using namespace std;
#include <cmath>
#include <iostream>


int main (){
	int mark;
	cout << "Enter the mark(1-12): " << endl;
	cin >> mark;

	switch (mark)
	{
	case 1: 
		cout << "Your mark is 1!" << endl;
		break;
	case 2: 
		cout << "Your mark is 2!" << endl;
		break;
	case 3: 
		cout << "Your mark is 2!" << endl;
		break;
	case 4: 
		cout << "Your mark is 3!" << endl;
		break;
	case 5: 
		cout << "Your mark is 3!" << endl;
		break;
	case 6: 
		cout << "Your mark is 3!" << endl;
		break;
	case 7: 
		cout << "Your mark is 4!" << endl;
		break;
	case 8: 
		cout << "Your mark is 4!" << endl;
		break;
	case 9: 
		cout << "Your mark is 4!" << endl;
		break;
	case 10: 
		cout << "Your mark is 5!" << endl;
		break;
	case 11: 
		cout << "Your mark is 5!" << endl;
		break;
	case 12: 
		cout << "Your mark is 5!" << endl;
		break;
	default:
		cout << "Incorrect mark!" << endl;
	}

}