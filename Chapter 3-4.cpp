/* Sizeof, Comma Operator(��ǥ ������),Conditional Operator(���Ǻ� ������)*/
#include<iostream>
using namespace std;


int main()
{
	// Sizeof Operator

	float a;
	sizeof(float);// = sizeof(a). --> 4bite -->  32 bit 
	// sizeof is a Opertor not fuction.!! + ������ ���� ��� sizeof a �� ��ȣ ���̵� �۵��� �ȴ�.


	//comma operator pay a tencion

	int x = 3;
	int y = 10;
	int z = (++x, ++y); // it is used in 'for' statement. --> ++x; ++y; int z = ++y;

	cout << x << " " << y << " " << z << endl;

	int a = 1, b = 10;
	int c;
	int d;

	c = a, b; // ���� ������ ���� c=b �� �ƴ϶� c=a ���� ��� ���� 1�� ���´�. ��ȣ�� ���� ������ ������ ������ �̷��� �� ���̴�. ()�� ����� 10�� ���´�.
	d = (++a, a + b);
	cout << c << endl;

	// Conditional Operator (arithemtric if) ���ǹ��� ó�� �Ҷ� if�� ��� ���Ѵ�(!)
	bool onSale = true;

	// const int price = (onSale == true)? 10 : 100; --> this is the arithemtric if type of inder statement; ���� ���̴� �� �˾��ݽô�. ������ ��쿡��.

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;
	
	// Obout operation order

	int t = 5;
	cout << (t % 2 == 0) ? "even" : "odd" << endl;
	cout << ((t % 2 == 0) ? "even" : "odd") << endl; // by adding parenthesis the error has been cured. --> �������� �켱 ���� �����̴�.
	return 0;
}