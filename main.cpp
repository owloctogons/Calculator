#include <iostream>
#include <string>
using namespace std;

int main()
{
	long int num1;
	long int num2;
	long int number;
	long int times;
	string ans;
	int cat = 0;
	do
	{
		cout << "Welcome to Calculator!! What would you like to do? ('help' for help)" << "\n";
		cin >> ans;
		{
			if (ans == "help"||ans=="halp"){
				cout << "Type 'multiplication' to multiply."<<"\n";
				cout << "Type 'addition' to add." << "\n";
				cout << "Type 'subtraction' to subtract." << "\n";
				cout << "Type 'division' to divide." << "\n";
				cout << "Type 'close' to close Calculator." << "\n";
				cout << "Type 'factorSub' to do multiply subtraction problems." << "\n";
				cout << "Type 'factorAdd' to do multiply addition problems." << "\n";
			}

			if (ans == "close")
			{
				return 0;
			}

			if (ans == "factorSub")
			{
				cat = 1;
				cout << "Number:";
				cin >> num1;
				cin.ignore();
				cout << "Subtract:";
				cin >> num2;
				cin.ignore();
				cout << "Times:";
				cin >> times;
				cin.ignore();
				int ans1 = num1*times;
				int ans2 = num2*times;
				cout << times << "(" << num1 << "-" << num2 << ") = " << ans1 << "-" << ans2;
				cin.get();
				cat = 0;
			}

			if (ans == "factorAdd")
			{
				cat = 1;
				cout << "Number:";
				cin >> num1;
				cin.ignore();
				cout << "Add:";
				cin >> num2;
				cin.ignore();
				cout << "Times:";
				cin >> times;
				cin.ignore();
				int ans1 = num1*times;
				int ans2 = num2*times;
				cout << times << "(" << num1 << "+" << num2 << ") = " << ans1 << "+" << ans2;
			}

			if (ans == "multiplication" || ans == "multiply" || ans == "multi" || ans == "m")
			{
				cat = 1;
				cout << "Number:";
				cin >> number;
				cin.ignore();
				cout << "Times:";
				cin >> times;
				cin.ignore();
				cout << number << "x" << times << "=" << number*times << "\n";
				cin.get();
				cat = 0;
			}

			if (ans == "addition" || ans == "add" || ans == "a")
			{
				cat = 1;
				cout << "Number:";
				cin >> number;
				cin.ignore();
				cout << "Add:";
				cin >> times;
				cin.ignore();
				cout << number << "+" << times << "=" << number + times << "\n";
				cin.get();
				cat = 0;
			}

			if (ans == "subtraction" || ans == "subtract" || ans == "sub" || ans == "s")
			{
				cat = 1;
				cout << "Number:";
				cin >> number;
				cin.ignore();
				cout << "Subtract:";
				cin >> times;
				cin.ignore();
				cout << number << "-" << times << "=" << number - times << "\n";
				cin.get();
				cat = 0;
			}

			if (ans == "division" || ans == "divide" || ans == "div" || ans == "d")
			{
				cat = 1;
				cout << "Number:";
				cin >> number;
				cin.ignore();
				cout << "Divide by:";
				cin >> times;
				cin.ignore();
				if (times <= 0)
				{
					cout << "Can't divide by zero or lower." << "\n";
				}
				else
				{
					cout << number << "/" << times << "=" << number / times << "\n";
					cin.get();
				}
				cat = 0;
			}
		}
	}
	while (cat == 0);
}
