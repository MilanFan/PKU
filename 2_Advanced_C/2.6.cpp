/*
 * 2.6.cpp
 *
 * 描述
 * 有一批易感人群住在网格状的宿舍区内，宿舍区为n*n的矩阵，每个格点为一个房间，房间里可能住人，也可能空着。
 * 在第一天，有些房间里的人得了流感，以后每天，得流感的人会使其邻居传染上流感，（已经得病的不变），空房间不会传染。请输出第m天得流感的人数。
 *
 * 输入
 * 第一行一个数字n，n不超过100，表示有n*n的宿舍房间。
 * 接下来的n行，每行n个字符，’.’表示第一天该房间住着健康的人，’#’表示该房间空着，’@’表示第一天该房间住着得流感的人。
 * 接下来的一行是一个整数m，m不超过100.
 *
 * 输出
 * 输出第m天，得流感的人数
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

int count(char r[][MAX_N], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] == '@') {
				res++;
			}
		}
	}
	return res;
}

void checkRoom(char &a, int i, int j, int n)
{
	if (i < 0 || i >= n || j < 0 || j >= n) return;
	if (a == '.') a = '-';
}

void infection(char r[][MAX_N], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] == '@') {
				checkRoom(r[i - 1][j], i - 1, j, n);
				checkRoom(r[i + 1][j], i + 1, j, n);
				checkRoom(r[i][j - 1], i, j - 1, n);
				checkRoom(r[i][j + 1], i, j + 1, n);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] == '-') {
				r[i][j] = '@';
			}
		}
	}
}

void output(char r[][MAX_N], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << r[i][j];
		}
		cout << endl;
	}
}

int main()
{
	char r[MAX_N][MAX_N] = {};
	int n, m;
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
			cin.getline(r[i], n + 1);
	}
	cin >> m;

	int res = 0;
	for (int day = 1; day <= m; day++) {
		res = count(r, n);
		infection(r, n);
//		cout << endl << "Day " << day << ": " << res << endl;
//		output(r, n);
	}

	cout << res << endl;

	return 0;
}


