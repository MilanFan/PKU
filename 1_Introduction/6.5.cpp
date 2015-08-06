/*
 * 6.5.cpp
 *
 * 描述
 * 从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。
 *
 * 输入
 * 一个任意的三位整数
 *
 * 输出
 * 一个任意的三位整数
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 100 || n > 999) return 0;

	cout << n / 100 << endl << (n % 100) / 10 << endl << n % 10 << endl;

	return 0;
}



