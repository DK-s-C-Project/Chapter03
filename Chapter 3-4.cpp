/* Sizeof, Comma Operator(쉼표 연산자),Conditional Operator(조건부 연산자)*/
#include<iostream>
using namespace std;


int main()
{
	// Sizeof Operator

	float a;
	sizeof(float);// = sizeof(a). --> 4bite -->  32 bit 
	// sizeof is a Opertor not fuction.!! + 변수가 있을 경우 sizeof a 즉 괄호 없이도 작동이 된다.


	//comma operator pay a tencion

	int x = 3;
	int y = 10;
	int z = (++x, ++y); // it is used in 'for' statement. --> ++x; ++y; int z = ++y;

	cout << x << " " << y << " " << z << endl;

	int a = 1, b = 10;
	int c;
	int d;

	c = a, b; // 연산 순서에 따라 c=b 가 아니라 c=a 여서 출력 값이 1이 나온다. 괄호가 없기 때문에 연산의 순서가 이렇게 된 것이다. ()을 씌우면 10이 나온다.
	d = (++a, a + b);
	cout << c << endl;

	// Conditional Operator (arithemtric if) 조건문을 처리 할때 if를 사용 안한다(!)
	bool onSale = true;

	// const int price = (onSale == true)? 10 : 100; --> this is the arithemtric if type of inder statement; 많이 쓰이니 잘 알아줍시다. 간단한 경우에만.

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;
	
	// Obout operation order

	int t = 5;
	cout << (t % 2 == 0) ? "even" : "odd" << endl;
	cout << ((t % 2 == 0) ? "even" : "odd") << endl; // by adding parenthesis the error has been cured. --> 연산자의 우선 순위 때문이다.
	return 0;
}