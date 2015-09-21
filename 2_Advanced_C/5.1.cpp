/*
 * 5.1.cpp
 *
 * 描述
 * 输入一个整数矩阵，计算位于矩阵边缘的元素之和。所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。
 *
 * 输入
 * 第一行为整数k，表示有k组数据。
 * 每组数据有多行组成，表示一个矩阵：
 * 第一行分别为矩阵的行数m和列数n（m < 100，n < 100），两者之间以空格分隔。
 * 接下来输入的m行数据中，每行包含n个整数，整数之间以空格作为间隔。
 *
 * 输出
 * 输出对应矩阵的边缘元素和，一个一行。
 *
 *  Created on: Aug 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_K 100

int main()
{
	int k;
	int res[MAX_K] = {};
	cin >> k;

	for (int i = 0; i < k; i++) {
		int m, n;
		cin >> m >> n;

		int sum = 0;
		for (int l = 0; l < m; l++) {
			for (int j = 0; j < n; j++) {
				int a;
				cin >> a;
				if (l == 0 || j == 0 || l == m - 1 || j == n - 1)
					sum += a;
			}
		}
		res[i] = sum;
	}

	for (int i = 0; i < k; i++)
		cout << res[i] << endl;

	return 0;
}


