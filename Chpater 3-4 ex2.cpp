#include<iostream>
using namespace std;

int getPrice(bool onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	bool onSale = true;
	const int price = getPrice(onSale);

	return 0;
}
// ���� �̷��� ����� ������ ���� ok