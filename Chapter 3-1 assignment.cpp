/* 함수의 몇의 몇제곱 인지 구하는 계산식을 만들어 보시오*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	double b;
	cin >> a;
	cin >> b;
	double c = std::pow(a, b);
	cout << c << endl;

	return 0;
}