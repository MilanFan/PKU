/*
 * 5.2.cpp
 *
 * 描述
 * 计算正整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。例如 m=3, n=12, 其和则为：3+5+7+9+11=35
 *
 * 输入
 * 两个数 m 和 n，两个数以空格间隔，其中 0<=m <= n <= 300 。
 *
 * 输出
 * 奇数之和
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	int sum = 0;
	if (m < 0 || n > 300 || m > n) cout << sum << endl;

	int start = m % 2 ? m : m + 1;
	int end = n % 2 ? n : n - 1;
	for (int i = start; i <= end; i += 2)
		sum += i;

	cout << sum << endl;

	return 0;
}



