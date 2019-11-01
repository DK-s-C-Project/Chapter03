/* Relational Operators 관계 연산자*/
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

		if (x == y)// 변수가 하나 있으면 대입 연산자 두 개 이상 있을 경우 비교 하는 관계 연산자 이다.
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