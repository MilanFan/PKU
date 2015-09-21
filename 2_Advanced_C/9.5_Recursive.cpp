/*
 * 9.5.cpp
 *
 * 描述
 * 当你站在一个迷宫里的时候，往往会被错综复杂的道路弄得失去方向感，如果你能得到迷宫地图，事情就会变得非常简单。
 * 假设你已经得到了一个n*m的迷宫的图纸，请你找出从起点到出口的最短路。
 *
 * 输入
 * 第一行是两个整数n和m(1 <= n,m <= 100)，表示迷宫的行数和列数。
 * 接下来n行，每行一个长为m的字符串，表示整个迷宫的布局。字符'.'表示空地，'#'表示墙，'S'表示起点,'T'表示出口。
 *
 * 输出
 * 输出从起点到出口最少需要走的步数。(你不能起出迷宫外)
 *
 *  Created on: Sep 4, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

#define MAX_MN 100

struct Point {
	bool o;	// open path
	int x;
	int y;
	bool v;	// visited
	Point(): o(false), x(0), y(0), v(false) {}
};

unsigned int path(Point a[][MAX_MN], int n, int m, Point *s, Point *t)
{
	if (s == t) {
		return 0;
	}

	unsigned int res = INT_MAX;
	Point *p;
	if (s->x > 0) {
		p = &a[s->x - 1][s->y];
		if (p->o && !p->v) {
			p->v = true;
			res = min(path(a, n, m, p, t) + 1, res);
			p->v = false;
		}
	}
	if (s->x < n - 1) {
		p = &a[s->x + 1][s->y];
		if (p->o && !p->v) {
			p->v = true;
			res = min(path(a, n, m, p, t) + 1, res);
			p->v = false;
		}
	}
	if (s->y > 0) {
		p = &a[s->x][s->y - 1];
		if (p->o && !p->v) {
			p->v = true;
			res = min(path(a, n, m, p, t) + 1, res);
			p->v = false;
		}
	}
	if (s->y < m - 1) {
		p = &a[s->x][s->y + 1];
		if (p->o && !p->v) {
			p->v = true;
			res = min(path(a, n, m, p, t) + 1, res);
			p->v = false;
		}
	}

	return res;
}

int main()
{
	int m, n;
	Point a[MAX_MN][MAX_MN] = {};
	cin >> n >> m;
	cin.get();

	Point *s, *t;
	for (int i = 0; i < n; i++) {
		char str[MAX_MN] = {};
		cin.getline(str, MAX_MN);
		for (int j = 0; j < m; j++) {
			a[i][j].x = i;
			a[i][j].y = j;
			char c = str[j];
			switch (c) {
			case 'S':
				s = &a[i][j];
				break;
			case 'T':
				t = &a[i][j];
				t->o = true;
				break;
			case '.':
				a[i][j].o = true;
				break;
			}
		}
	}

	cout << path(a, n, m, s, t) << endl;

	return 0;
}

