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
			if (num <= low || num >= high)
			{

				throw invalid_argument("The input is outside of the specified range");
			}
			else
				return num;
		}

		catch (ios_base::failure& ex)
		{
			cout << "bad numeric string, try again\n";
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
	}
};