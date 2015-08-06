/*
 * 4.2.cpp
 *
 * ��ż����һ��
 * ����ʮ����������ʮ�������������������������������ǰ��ż���ں�
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

	int l = 0, r = N - 1;
	while (l <= r) {
		bool leftIsOdd = a[l] % 2 == 1;
		bool rightIsEven = a[r] % 2 == 0;
		if (leftIsOdd) {
			l++;
		} else if (rightIsEven) {
			r--;
		} else {
			swap(a[l], a[r]);
		}
	}

	for (int i = 0; i < l - 1; i++) {
		for (int j = i + 1; j < l; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}

	for (int i = l; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}


