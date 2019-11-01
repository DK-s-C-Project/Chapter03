/* Operator Precedence and Associativity 연산자 우선 순위와 결합 법칙 */
#include<iostream>
#include<cmath> // common math calculation use the camath libery
using namespace std;

int main()
{
	int x = 4 + 2 * 3; // giving the order to the statememt of caculating the sentence.

	int y = 5 * 8 / 2; // in this case the priority of * and / is same, so the user can give order to the case.

	int z = 5 + (-3); // not every operator is not always left -> right. it could be execption. Beaware it.

	int a = (1 - 2) + (-3); // 여기서 = 는 수학적 의미가 아니라 대입 한다는 의미이다. 즉 a라는 저장소에 (1-2)+(-3)일 대입 한다는 뜻이다.
	cout << z << endl;
	// 우선 순위가ㅣ 애매할 때는 그냥 괄호를 사용하자. --> 표를 활용하자. 논리회로를 병행하여 볼 것.

	int b = std::pow(2, 8);// the power means 제곱!!
	cout << b << endl;
	return 0;
}