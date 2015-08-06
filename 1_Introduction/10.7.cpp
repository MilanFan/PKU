/*
 * 10.7.cpp
 *
 * 描述
 * 中位数定义：一组数据按从小到大的顺序依次排列，处在中间位置的一个数或最中间两个数据的平均值（如果这组数的个数为奇数，
 * 则中位数为位于中间位置的那个数；如果这组数的个数为偶数，则中位数是位于中间位置的两个数的平均值）.
 * 给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）
 *
 * 输入
 * 该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1 <= N <= 15000.
 * 接着N行为N个数据的输入，N=0时结束输入
 *
 * 输出
 * 输出中位数，每一组测试数据输出一行
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


