/* Operator Precedence and Associativity ������ �켱 ������ ���� ��Ģ */
#include<iostream>
#include<cmath> // common math calculation use the camath libery
using namespace std;

int main()
{
	int x = 4 + 2 * 3; // giving the order to the statememt of caculating the sentence.

	int y = 5 * 8 / 2; // in this case the priority of * and / is same, so the user can give order to the case.

	int z = 5 + (-3); // not every operator is not always left -> right. it could be execption. Beaware it.

	int a = (1 - 2) + (-3); // ���⼭ = �� ������ �ǹ̰� �ƴ϶� ���� �Ѵٴ� �ǹ��̴�. �� a��� ����ҿ� (1-2)+(-3)�� ���� �Ѵٴ� ���̴�.
	cout << z << endl;
	// �켱 �������� �ָ��� ���� �׳� ��ȣ�� �������. --> ǥ�� Ȱ������. ��ȸ�θ� �����Ͽ� �� ��.

	int b = std::pow(2, 8);// the power means ����!!
	cout << b << endl;
	return 0;
}