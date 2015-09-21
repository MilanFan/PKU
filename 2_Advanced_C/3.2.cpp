/*
 * 3.2.cpp
 *
 * 描述
 * 所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，得到的结果再按照上述规则重复处理，最终总能够得到1。如，假定初始整数为5，计算过程分别为16、8、4、2、1。
 * 程序要求输入一个整数，将经过处理得到1的过程输出来。
 *
 * 输入
 * 一个正整数
 *
 * 输出
 * 从输入整数到1的步骤，每一步为一行，每一部中描述计算过程，假定输入为7，则输出为：
 * 7*3+1=22
 * 22/2=11
 * 11*3+1=34
 * 34/2=17
 * 17*3+1=52
 * 52/2=26
 * 26/2=13
 * 13*3+1=40
 * 40/2=20
 * 20/2=10
 * 10/2=5
 * 5*3+1=16
 * 16/2=8
 * 8/2=4
 * 4/2=2
 * 2/2=1
 * 最后一行输出"End"，如果输入为1，直接输出"End"
 *
 *  Created on: Aug 13, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

void collatz(unsigned int n) {
	if (n == 1) return;

	cout << n;
	if (n % 2) {
		cout << "*3+1=";
		n = n * 3 + 1;
	} else {
		cout << "/2=";
		n /= 2;
	}
	cout << n << endl;
	collatz(n);
}

int main()
{
	unsigned int n;
	cin >> n;

	collatz(n);
	cout << "End" << endl;

	return 0;
}


