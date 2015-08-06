/*
 * 10.7.cpp
 *
 * ����
 * ��λ�����壺һ�����ݰ���С�����˳���������У������м�λ�õ�һ���������м��������ݵ�ƽ��ֵ������������ĸ���Ϊ������
 * ����λ��Ϊλ���м�λ�õ��Ǹ���������������ĸ���Ϊż��������λ����λ���м�λ�õ���������ƽ��ֵ��.
 * ����һ�����������������λ������������м���������ƽ����������ȡ�����ɣ�����Ҫʹ�ø�������
 *
 * ����
 * �ó����������������ݣ�ÿһ��������ݵĵ�һ��ΪN���������������ݰ��������ݸ�����1 <= N <= 15000.
 * ����N��ΪN�����ݵ����룬N=0ʱ��������
 *
 * ���
 * �����λ����ÿһ������������һ��
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 15000

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int findMid(int a[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	if (N % 2 == 1) return a[N/2];
	return (a[N/2-1] + a[N/2]) / 2;
 }

int main()
{
	int N;

	while (cin >> N && N > 0 && N <= MAX_N) {
		int a[MAX_N] = {};
		for (int i = 0; i < N; i++)
			cin >> a[i];
		cout << findMid(a, N) << endl;
	}

	return 0;
}


