/*
 * 5.3.cpp
 *
 * 描述
 * 给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
 *
 * 输入
 * 输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
 *
 * 输出
 * 输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 100

int main()
{
	int a[MAX_N];
	int k;
	cin >> k;
	if (k <= 1 || k >= MAX_N) return 0;
	for (int i = 0; i < k; i++)
		cin >> a[i];

	int num1 = 0;
	int num5 = 0;
	int num10 = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] == 1)
			num1++;
		else if (a[i] == 5)
			num5++;
		else if (a[i] == 10)
			num10++;
	}

	cout << num1 << endl;
	cout << num5 << endl;
	cout << num10 << endl;

	return 0;
}
