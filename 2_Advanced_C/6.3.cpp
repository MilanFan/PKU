/*
 * 6.3.cpp
 *
 * 描述
 * 在一个m×n的山地上，已知每个地块的平均高程，请求出所有山顶所在的地块（所谓山顶，就是其地块平均高程不比其上下左右相邻的四个地块每个地块的平均高程小的地方)。
 *
 * 输入
 * 第一行是两个整数，表示山地的长m（5≤m≤20）和宽n（5≤n≤20）。
 * 其后m行为一个m×n的整数矩阵，表示每个地块的平均高程。每行的整数间用一个空格分隔。
 *
 * 输出
 * 输出所有上顶所在地块的位置。每行一个。按先m值从小到大，再n值从小到大的顺序输出。
 *
 *  Created on: Sep 2, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_M 20
#define MAX_N 20

bool isHill(int a[][MAX_N], int m, int n, int i, int j)
{
	if ((i > 0 && a[i][j] < a[i - 1][j]) ||
			(i < m - 1 && a[i][j] < a[i + 1][j]) ||
			(j > 0 && a[i][j] < a[i][j - 1]) ||
			(j < n - 1 && a[i][j] < a[i][j + 1]))
		return false;
	return true;
}

int main()
{
	int a[MAX_M][MAX_N] = {};
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (isHill(a, m, n, i, j))
				cout << i << " " << j << endl;

	return 0;
}


