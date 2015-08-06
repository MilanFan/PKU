/*
 * 4.3.cpp
 *
 * 奇偶排序（二）
 * 和上题一样，但是要求用第二种解法
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define N 10

void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

int main()
{
	int a[N];

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 1; j < N - i; j++) {
			bool leftIsEven = a[j-1] % 2 == 0;
			bool rightIsEven = a[j] % 2 == 0;
			if ((leftIsEven && !rightIsEven) ||
					(leftIsEven == rightIsEven &&
							a[j-1] > a[j])) {
				swap(a[j-1], a[j]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}


