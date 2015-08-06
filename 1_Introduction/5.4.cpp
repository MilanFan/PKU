/*
 * 5.4.cpp
 *
 * 描述
 * 给定一个十进制整数N，求其对应2进制数中1的个数
 *
 * 输入
 * 第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。
 *
 * 输出
 * N行，每行输出对应一个输入。
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100

int main()
{
	int N;
	cin >> N;
	if (N <= 0 || N > MAX_N) return 0;

	int a[MAX_N];
	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < N; i++) {
		int count = 0;
		int x = a[i];
		while (x) {
			x = x & (x-1);
			count++;
		}
		cout << count << endl;
	}

	return 0;
}

