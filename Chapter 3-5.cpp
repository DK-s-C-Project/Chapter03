/* Relational Operators ���� ������*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	while (true)// code will run forever. ctrl+c will finish. entering c will give a mess.
	{
		int x, y;
		cin >> x >> y;
		cout << "Your input values are : " << x << " " << y << endl;

		if (x == y)// ������ �ϳ� ������ ���� ������ �� �� �̻� ���� ��� �� �ϴ� ���� ������ �̴�.
			cout << " equal " << endl;
		if (x != y)
			cout << " not equal " << endl;
		if (x < y)
			cout << " x is less than y" << endl;
		if (x > y)
			cout << " x is bigger than y" << endl;
		if (x <= y)
			cout << " x is less than or equal to y" << endl;
		if (x >= y)
			cout << " x is bigger than or equal to y" << endl;
	}

	return 0;
}