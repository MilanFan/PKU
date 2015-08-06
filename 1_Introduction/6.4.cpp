/*
 * 6.4.cpp
 *
 * ����
 * ����6��������������6�������������ٴ���һ��������һ��ż����
 * ����6������������������Ϊa����С��ż��Ϊb�����|a-b|��ֵ
 *
 * ����
 * ����Ϊһ�У�6��������,��6����������С��100
 * ���뱣֤��6���������ٴ���һ��������һ��ż��
 *
 * ���
 * ���Ϊһ�У����������������С��ż��֮��ľ���ֵ
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


