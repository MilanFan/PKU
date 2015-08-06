/*
 * 7.3.cpp
 *
 * 描述
 * 用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。
 * 注意，第K大的数意味着从大到小排在第K位的数。并且，要求大家编写这个程序要用到自定义的函数。
 *
 * 输入
 * N
 * K
 * a1 a2 a3 a4 ..... aN
 *
 * 输出
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


