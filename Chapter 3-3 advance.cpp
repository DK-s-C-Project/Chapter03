/* 증감 연산자에 대한 심화 학습*/
#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 1;
	int v = add(x, ++x);// x=1 , ++x=2 이므로 결과 값이 3이 나올 것 같으나.. 4 가 나온다. 컴파일에 따라 다르므로 do not use it!!

	cout << v << endl;

	int t = 1, u = 2;
	int w = add(t, ++u);// t = 1 , u=3 이므로 결과 값은 4

	cout << w << endl;

	return 0;
	
}