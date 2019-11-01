/* conditonal operator example*/

#include<iostream>
using namespace std;


int main()
{

	bool Onsale = true;
	/*int price;    if문일 때는 값을 const로 묶을 수가 없다!! --> 굳이 묶는 경우는 example2에서

	if (Onsale)
		price = 10;
	else
		price = 100;

	cout << price << endl;*/ 


	const int price = (Onsale == true)? 10 : 100;

	cout << price << endl;


	return 0;
