/*
 * 5.4.cpp
 *
 * ����
 * ����һ��ʮ��������N�������Ӧ2��������1�ĸ���
 *
 * ����
 * ��һ��������ʾ��N��������ݣ����N���Ƕ�Ӧ�Ĳ������ݣ�ÿ��Ϊһ��������
 *
 * ���
 * N�У�ÿ�������Ӧһ�����롣
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

