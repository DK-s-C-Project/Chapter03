/* ���� �����ڿ� ���� ��ȭ �н�*/
#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 1;
	int v = add(x, ++x);// x=1 , ++x=2 �̹Ƿ� ��� ���� 3�� ���� �� ������.. 4 �� ���´�. �����Ͽ� ���� �ٸ��Ƿ� do not use it!!

	cout << v << endl;

	int t = 1, u = 2;
	int w = add(t, ++u);// t = 1 , u=3 �̹Ƿ� ��� ���� 4

	cout << w << endl;

	return 0;
	
}