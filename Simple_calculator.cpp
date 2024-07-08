#include <iostream>
using namespace std;
int main() {

	float num1, num2, option;
	char op;

	cout << " please, Enter The First Number: ";
	cin >> num1;
	cout << " please, Enter The Second Numbers: ";
	cin >> num2;
	cout << " Choose An Operator ( + , - , * , / ): ";
	cin >> op;


		switch (op)
		{
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			break;
		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			break;
		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			break;
		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			break;
		default:
			cout << " Sorry, Wrong operator ... Try  " << endl;
		}

			cout << " 1. Continue " << endl;
			cout << " 2. Exit " << endl;
			cin >> option;
	
			while (option == 1)
			{
				cout << " please, Enter The First Number: ";
				cin >> num1;
				cout << " please, Enter The Second Numbers: ";
				cin >> num2;
				cout << " Choose An Operator ( + , - , * , / ): ";
				cin >> op;

				switch (op)
				{
				case '+':
					cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
					break;
				case '-':
					cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
					break;
				case '*':
					cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
					break;
				case '/':
					cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;;
					break;
				default:
					cout << " Sorry, Wrong operator ... Try  " << endl;
				}
				cout << " 1. Continue " << endl;
				cout << " 2. Exit " << endl;
				cin >> option;

			}

	    if ( option == 2)
		{
			cout << " Thank You... ";
		}

		return 0;
	}
