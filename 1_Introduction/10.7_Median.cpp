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
 * NOTE
 * Time Limit Exceeded error to POJ 4013
 *
 *  Created on: Jul 30, 2015
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

int sort(int a[], int size, int pivot)
{
	int c = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] <= pivot) {
			if (i != c)
				swap(a[c], a[i]);
			c++;
		}
	}
	return c;
}

int findKth(int a[], int N, int k)
{
	if (N <= 1) return a[0];

	int count = 0;
	int pivot = a[0];
	int size = N;

	while (count < k) {
		int c = sort(a + count, size, pivot);
		if (c + count < k) {
			count += c;
			size -= c;
			pivot = a[count];
		} else if (c + count > k) {
			size = c;
			pivot = a[count + 1];
		} else
			break;
	}

	return pivot;
}

int findMid(int a[], int N) {
	if (N % 2 == 1) return findKth(a, N, N/2+1);
	return (findKth(a, N, N/2) + findKth(a + N/2, N/2, 1)) / 2;
 }

int main()
{
	int N;

	while (cin >> N && N > 0 && N <MAX_N) {
		int a[MAX_N] = {};
		for (int i = 0; i < N; i++)
			cin >> a[i];
		cout << findMid(a, N) << endl;
	}

	return 0;
}


