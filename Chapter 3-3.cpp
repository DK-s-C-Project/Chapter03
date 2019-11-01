/* Increment / decrement 증가/감소 연산자*/
#include<iostream>
using namespace std;

int main()
{
	int x = 5;
	int y = ++x;// add 1 in x not 2!!!
	
	cout << y << endl;
	/////////////////////////////////

	int a = 6, b = 6;
	cout << x << " " << y << endl;
	//cout << ++x << " " << --y << endl; // 전위 증가 -->  먼저 증가 한 값을 출력
	cout << x++ << " " << y-- << endl; // 후위 증가 --> 출력 후 증가 한다
	cout << x << " " << y << endl; // 증가 한 값이 출력이 된다.

	return 0;
}