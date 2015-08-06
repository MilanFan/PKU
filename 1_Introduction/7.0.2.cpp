/*
 * 7.0.2.cpp
 *
 * ����
 * ����n����������������ͣ���Լ��֮��������ʽ��ʾ��
 * ���磺
 * q/p = x1/y1 + x2/y2 +....+ xn/yn��
 * q/pҪ���ǹ�Լ֮�����ʽ��
 * �磺5/6�Ѿ��������ʽ��3/6��Ҫ��ԼΪ1/2, 3/1��Ҫ��Լ��3��10/3���������ʽ��
 * PS:���Ӻͷ�ĸ��û��Ϊ0�������Ҳû�г��ָ��������
 *
 * ����
 * ��һ�е�����n,����һ���м���������Ҫ���
 * ��������n���Ƿ���
 *
 * ���
 * ���ֻ��һ�У�����Լ��Ľ��
 *
 *  Created on: Jul 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

// Greatest Common Divisor (GCD)
int gcd(const int &a, const int &b)
{
	int c = a;
	int d = b;
	while (d != 0) {
		int tmp = c;
		c = d;
		d = tmp % d;
	}
	return c;
}

// Least Common Multiple (LCM)
int lcm(const int &a, const int &b)
{
	return a / gcd(a, b) * b;
}

int main()
{
	int n;
	int a = 0;
	int b = 1;
	char ch = '/';
	cin >> n;
	while (n--) {
		int c, d;
		cin >> c >> ch >> d;
		if (d == 0) {
			cout << "Wrong Input" << endl;
			return 0;
		}
		int l = lcm(b, d);
		a = a * (l / b) + c * (l / d);
		b = l;
	}

	int c = gcd(a, b);
	a /= c;
	b /= c;

	if (b > 1)
		cout << a << '/' << b << endl;
	else
		cout << a << endl;

	return 0;
}

