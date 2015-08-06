/*
 * 7.3.cpp
 *
 * ����
 * �û�����N��K��Ȼ���������N��������������ģ��������ڲ���N���������������£��ҳ���K�������
 * ע�⣬��K�������ζ�ŴӴ�С���ڵ�Kλ���������ң�Ҫ���ұ�д�������Ҫ�õ��Զ���ĺ�����
 *
 * ����
 * N
 * K
 * a1 a2 a3 a4 ..... aN
 *
 * ���
 * b
 *
 * SOLUTION
 * quick sort, use a pivot to rearrange array
 *
 *  Created on: Jul 28, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 1000

void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

int sort(int a[], int size, int pivot)
{
	int c = 0;

	for (int i = 0; i < size; i++) {
		if (a[i] >= pivot) {
			if (i != c) {
				swap(a[c], a[i]);
			}
			c++;
		}
	}
	return c;
}

int main()
{
	int N, K;
	int a[MAX_N];

	cin >> N >> K;
	if (N > MAX_N || K > N) return 0;

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int count = 0;
	int pivot = a[0];
	int size = N;
	while (count < K) {
		int c = sort(a + count, size, pivot);
		if (c + count < K) {
			count += c;
			size -= c;
			pivot = a[count];
		} else if (c + count > K) {
			size = c;
			pivot = a[count + 1];
		} else {
			break;
		}
	}
	cout << pivot << endl;

	return 0;
}


