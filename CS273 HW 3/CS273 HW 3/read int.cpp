#include "read int.h"
#include <stdexcept>
#include<iostream>
#include<limits>
#include<string>
using namespace std;

int read_int(const string &prompt, int low, int high)
{
	// Implement this
	cin.exceptions(ios_base::failbit);
	int num = 0;
	while (true)
	{
		try
		{
			std::cout << prompt;
			cin >> num;
			try
			{
				std::cout << prompt;
				cin >> num;
				if (num > low && num < high)
					return num;
			}
			catch (ios_base::failure& ex)
			{
				cout << "number not in range, try again\n";
				cin.clear();
				cin.ignore(numeric_limits<int>::max(), '\n');
			}
			return num;

		}
		catch (ios_base::failure& ex)
		{
			cout << "bad numeric string, try again\n";
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
		/*try
		{
		std::cout << prompt;
		cin >> num;
		if (num > low && num < high)
		return num;
		}
		catch (ios_base::failure& ex)
		{
		cout << "number not in range, try again\n";
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
		}*/
	}

}
