/* Logical Operators 논리 연산자*/
#include<iostream>
using namespace std;

int main()
{
	bool x = true;
	bool y = false;

	cout << (x && y) << endl;

	// Example
	bool hit = true;
	int health = 10;

	if (hit == true && health <20)
		{

			cout << " die " << endl;
		}
	/*
	else
	    health-=20;
	*/

	// Short circuit evaluation

	int x = 1;
	int y = 2;

	if (x == 1 && y++ == 2)
	{
		// do smoething
	}

	cout << y << endl;

	return 0;
}