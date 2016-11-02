// Exercise #1 - Triple Remainder
// Problem: Write a program to find the smallest positive integer n
// which corresponds to the following conditions:
//
// n / 3 = integer x and remainder 2
// n / 5 = integer y and remainder 3
// n / 7 = integer z and remainder 4
//
// 		INPUT: None.
// 	TEST DATA: None.
// 	The smallest positive integer for this exercise. Since it is less than
//  32767, you may use a two byte integer for this output answer. The output
//  format will be:
//
//  The Number is XXX.
//
// Limitations:
//      	 Time: 20 minutes
// 		Variables: 6 variables
// Program length: 640 characters

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number = 0;

	while(true)
	{
		if ((number % 3 == 2) && (number % 5 == 3) && (number % 7 == 4))
		{
			cout << "The number is " << number << endl;
			break;
		}
		number++;
	}

	return 0;
}
