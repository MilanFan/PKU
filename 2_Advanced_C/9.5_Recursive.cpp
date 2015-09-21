/*
 * 9.5.cpp
 *
 * ����
 * ����վ��һ���Թ����ʱ�������ᱻ���۸��ӵĵ�·Ū��ʧȥ����У�������ܵõ��Թ���ͼ������ͻ��÷ǳ��򵥡�
 * �������Ѿ��õ���һ��n*m���Թ���ͼֽ�������ҳ�����㵽���ڵ����·��
 *
 * ����
 * ��һ������������n��m(1 <= n,m <= 100)����ʾ�Թ���������������
 * ������n�У�ÿ��һ����Ϊm���ַ�������ʾ�����Թ��Ĳ��֡��ַ�'.'��ʾ�յأ�'#'��ʾǽ��'S'��ʾ���,'T'��ʾ���ڡ�
 *
 * ���
 * �������㵽����������Ҫ�ߵĲ�����(�㲻������Թ���)
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

