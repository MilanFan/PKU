/*
 * 9.3.cpp
 *
 * ����
 * �������� a �� b �����õ���� c����ʾΪ��a ? b = c�����У��������Ǽӷ� +������ -���˷� *������ / �� ȡ�� %��
 * ���������� a,b,c ��ֵ��ȷ������������ĳ������������������Ӧ�������������κ����㶼������������� error.
 * ���磺
 * ���룺
 * 3,4,5
 * �����
 * error
 * �����룺
 * 3,4,3
 * �������
 * %
 *
 * ����
 * a b�� c ��ֵ�����������룬�Զ��ż��
 *
 * ���
 * ��������֮һ�� error
 *
 *  Created on: Sep 4, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin.ignore(1, ',');
	cin >> b;
	cin.ignore(1, ',');
	cin >> c;

	if (a + b == c) {
		cout << '+' << endl;
	} else if (a - b == c) {
		cout << '-' << endl;
	} else if (a * b == c) {
		cout << '*' << endl;
	} else if (a / b == c) {
		cout << '/' << endl;
	} else if (a % b == c) {
		cout << '%' << endl;
	} else {
		cout << "error" << endl;
	}

	return 0;
}

