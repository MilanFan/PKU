/*
 * 5.5.cpp
 *
 * 描述
 * 将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
 *
 * 输入
 * 输入为两行：第一行数组中元素的个数n（1<n<100)，第二行是n个整数，每两个整数之间用空格分隔。
 *
 * 输出
 * 输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。
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
	if (N < 1 || N >= MAX_N) return 0;

	int a[MAX_N];
	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = N-1; i>= 0 ; i--)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}


