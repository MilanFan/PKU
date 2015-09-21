/*
 * 9.4.cpp
 *
 * 描述
 * 在一个平面上，如果有两个点(x,y),(a,b),如果说(x,y)支配了(a,b)，这是指x>=a,y>=b;
 * 用图形来看就是(a,b)坐落在以(x,y)为右上角的一个无限的区域内。
 * 给定n个点的集合，一定存在若干个点，它们不会被集合中的任何一点所支配，这些点叫做极大值点。
 * 编程找出所有的极大点，按照x坐标由小到大，输出极大点的坐标。
 * 本题规定：n不超过100，并且不考虑点的坐标为负数的情况。
 *
 * 输入
 * 输入包括两行，第一行是正整数n，表示是点数，第二行包含n个点的坐标，坐标值都是整数，坐标范围从0到100，输入数据中不存在坐标相同的点。
 *
 * 输出
 * 按x轴坐标最小到大的顺序输出所有极大点。
 * 输出格式为:(x1,y1),(x2,y2),...(xk,yk)
 *
 *  Created on: Sep 4, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100

struct Point {
	int x;
	int y;
	bool isMax;
	Point(): x(0), y(0), isMax(false) {}
};

int sortX(Point p[], int n)
{
	int maxX = p[0].x;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i].x > p[j].x) {
				Point t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
		if (p[i + 1].x > maxX)
			maxX = p[i + 1].x;
	}

	return maxX;
}

int main()
{
	int n;
	Point p[MAX_N] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i].x >> p[i].y;
	for (int i = 0; i < n; i++) {
		bool isMax = true;
		for (int j = 0; j < n; j++) {
			if (i != j && p[j].x >= p[i].x && p[j].y >= p[i].y) {
				isMax = false;
				break;
			}
		}
		p[i].isMax = isMax;
	}

	int maxX = sortX(p, n);
	int idx = 0;
	for (; idx < n; idx++) {
		if (p[idx].isMax) {
			cout << '(' << p[idx].x << ',' << p[idx].y << ')';
			if (p[idx].x < maxX)
				cout << ',';
		}
	}

	return 0;
}

