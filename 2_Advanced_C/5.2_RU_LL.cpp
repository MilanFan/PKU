/*
 * 5.2.cpp
 *
 * 描述
 * 给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按从左上到右下的对角线顺序遍历整个数组。
 *
 * 输入
 * 输入的第一行上有两个整数，依次为row和col。
 * 余下有row行，每行包含col个整数，构成一个二维整数数组。
 * （注：输入的row和col保证0 < row < 100, 0 < col < 100）
 *
 * 输出
 * 按遍历顺序输出每个整数。每个整数占一行。
 *
 *  Created on: Aug 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_K 100

int main()
{
	int row, col;
	int a[MAX_K][MAX_K] = {};
	cin >> row >> col;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
	for (int k = 0; k < row + col - 1; k++) {
		for (int i = 0; i <= k; i++) {
			int j = k - i;
			if (i < row && j < col)
				cout << a[i][j] << endl;
		}
	}

	return 0;
}

