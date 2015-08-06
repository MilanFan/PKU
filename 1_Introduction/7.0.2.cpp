/*
 * 7.0.2.cpp
 *
 * 描述
 * 输入n个分数并对他们求和，用约分之后的最简形式表示。
 * 比如：
 * q/p = x1/y1 + x2/y2 +....+ xn/yn，
 * q/p要求是归约之后的形式。
 * 如：5/6已经是最简形式，3/6需要规约为1/2, 3/1需要规约成3，10/3就是最简形式。
 * PS:分子和分母都没有为0的情况，也没有出现负数的情况
 *
 * 输入
 * 第一行的输入n,代表一共有几个分数需要求和
 * 接下来的n行是分数
 *
 * 输出
 * 输出只有一行，即归约后的结果
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

