/*
 * 10.6.cpp
 *
 * 描述
 * 给定一组整数，要求利用数组把这组数保存起来，再利用指针实现对数组中的数循环移动。
 * 假定共有n个整数，则要使前面各数顺序向后移m个位置，并使最后m各数变为最前面的m各数。
 * 注意，不要用先输出后m个数，再输出前n-m个数的方法实现，也不要用两个数组的方式实现。
 * 要求只用一个数组的方式实现，一定要保证在输出结果时，输出的顺序和数组中数的顺序是一致的。
 *
 * 输入
 * 输入有两行：第一行包含一个正整数n和一个正整数m，第二行包含n个正整数。每两个正整数中间用一个空格分开。
 *
 * 输出
 * 输出有一行：经过循环移动后数组中整数的顺序依次输出，每两个整数之间用空格分隔。
 *
 * SOLUTION
 * 递归，p1和p2位的数互换
 * - p1初始为0，p2初始为m，每置换m个数后p1重置为0，一共进行(n/m)-1组置换，直到剩下的数k(n%m)少于m，此时还有m（队首）+n%m（队尾）未就位
 * - 如果k=0，则所有数就位程序结束；否则将队尾的k个数和队首置换，此时只剩队首的m个数未就位；
 * - 新问题变为将m个数循环向后移动m-k步，递归。
 *
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000

void output(const int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

void rotate(int a[], int n, int m)
{
	int p1 = 0;
	int p2 = m;
	for (int i = 0; i < n / m - 1; i++) {
		for (int j = 0; j < m; j++) {
			swap(a[p1++], a[p2++]);
		}
		p1 = 0;
	}
	int k = n % m;
	if (k == 0) return;
	for (int i = 0; i < k; i++) {
		swap(a[p1++], a[p2++]);
	}
	rotate(a, m, m - k);
}

int main()
{
	int n, m;
	int a[MAX_N];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	rotate(a, n, m);
	output(a, n);

	return 0;
}


