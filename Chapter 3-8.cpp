/* Bitewise Opertors 비트 단위 연산자*/
#include<iostream>
#include<bitset>// 2진수로 바꾸어서 출력해주는 라이브러리임.
using namespace std;

int main()
{
	// << left shift << right shift

	unsigned int a = 3;// print out in to Binary number.

	cout << std::bitset<4>(a) << endl;// bitset<4> means the 자릿수. <4>은 4자리.

	unsigned int b = a << 1;

	cout << std::bitset<4>(b) <<" "<< b <<endl;// move the bite in to left one space.--> shiftting!

	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;// 2의 1승
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;//2의 2승을 곱한다. 
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	cout << std::bitset<8>(~a) << " " << (a) << endl;// !a--> logical not ~a bitwise not be aware it.
	// 어떤수의 제곱을 구할 때는 pow를 쓰는 것 보다 shift operator를 쓰는 것이 훨씬 빠르다.

	unsigned int c = 0b1100;
	unsigned int d = 0b0100;

	cout << std::bitset<4>(c & d) << endl;
	cout << std::bitset<4>(c | d) << endl;
	cout << std::bitset<4>(c^d) << endl;

	return 0;
}