/* conditonal operator example*/

#include<iostream>
using namespace std;


int main()
{

	bool Onsale = true;
	/*int price;    if���� ���� ���� const�� ���� ���� ����!! --> ���� ���� ���� example2����

	if (Onsale)
		price = 10;
	else
		price = 100;

	cout << price << endl;*/ 


	const int price = (Onsale == true)? 10 : 100;

	cout << price << endl;


	return 0;
