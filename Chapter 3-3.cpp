/* Increment / decrement ����/���� ������*/
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
	//cout << ++x << " " << --y << endl; // ���� ���� -->  ���� ���� �� ���� ���
	cout << x++ << " " << y-- << endl; // ���� ���� --> ��� �� ���� �Ѵ�
	cout << x << " " << y << endl; // ���� �� ���� ����� �ȴ�.

	return 0;
}