/*
 * 8.4.cpp
 *
 * 描述
 * 在一个长度为n(n < 1000)的整数序列中，判断是否存在某两个元素之和为k。
 *
 * 输入
 * 第一行输入序列的长度n和k，用空格分开。
 * 第二行输入序列中的n个整数，用空格分开。
 *
 * 输出
 * 如果存在某两个元素的和为k，则输出yes，否则输出no。
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000

int main()
{
	int n, k;
	cin >> n >> k;

	int a[MAX_N];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;

	return 0;
}

