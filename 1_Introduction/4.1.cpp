/*
 * 4.1.cpp
 *
 * ������Լ�������дð�������㷨�������С1000����
 *
 * ����
 * ��һ����n����ʾ����Ĵ�С
 * ����n���������n��Ԫ��
 *
 * ���
 * ����֮��Ľ��
 * һ��Ԫ��һ��
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	int n, a[1000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				a[i] = a[i] ^ a[j];
				a[j] = a[i] ^ a[j];
				a[i] = a[i] ^ a[j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}

	return 0;
}
