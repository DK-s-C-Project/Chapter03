/* Bitewise Opertors ��Ʈ ���� ������*/
#include<iostream>
#include<bitset>// 2������ �ٲپ ������ִ� ���̺귯����.
using namespace std;

int main()
{
	// << left shift << right shift

	unsigned int a = 3;// print out in to Binary number.

	cout << std::bitset<4>(a) << endl;// bitset<4> means the �ڸ���. <4>�� 4�ڸ�.

	unsigned int b = a << 1;

	cout << std::bitset<4>(b) <<" "<< b <<endl;// move the bite in to left one space.--> shiftting!

	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;// 2�� 1��
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;//2�� 2���� ���Ѵ�. 
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	cout << std::bitset<8>(~a) << " " << (a) << endl;// !a--> logical not ~a bitwise not be aware it.
	// ����� ������ ���� ���� pow�� ���� �� ���� shift operator�� ���� ���� �ξ� ������.

	unsigned int c = 0b1100;
	unsigned int d = 0b0100;

	cout << std::bitset<4>(c & d) << endl;
	cout << std::bitset<4>(c | d) << endl;
	cout << std::bitset<4>(c^d) << endl;

	return 0;
}