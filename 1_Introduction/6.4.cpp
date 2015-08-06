/*
 * 6.4.cpp
 *
 * 描述
 * 输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
 * 设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值
 *
 * 输入
 * 输入为一行，6个正整数,且6个正整数都小于100
 * 输入保证这6个数中至少存在一个奇数和一个偶数
 *
 * 输出
 * 输出为一行，输出最大的奇数与最小的偶数之差的绝对值
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define N 6

void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

int main()
{
	int data[N];
	for (int i = 0; i < N; i++) {
		cin >> data[i];
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (data[i] > data[j]) {
				swap(data[i], data[j]);
			}
		}
	}

	int a = 0, b = 0;
	for (int i = 0; i < N; i++) {
		if (data[i] % 2 == 0) {
			b = data[i];
			break;
		}
	}
	for (int i = N - 1; i >= 0; i--) {
		if (data[i] % 2 == 1) {
			a = data[i];
			break;
		}
	}

	cout << (a > b ? a - b : b - a) << endl;

	return 0;
}


