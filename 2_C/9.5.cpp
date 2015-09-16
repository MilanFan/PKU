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
#include <queue>
using namespace std;

#define MAX_MN 100

struct Node {
	int x;
	int y;
	bool open;			// open path
	bool visited;		// visited
	unsigned int dist;	// distance to start
	Node *nxt;
	Node(): x(0), y(0), open(false), visited(false), dist(INT_MAX), nxt(NULL) {}
};

Node *nextNode(Node a[][MAX_MN], int x, int y, int n, int m)
{
	if (x >= 0 && x < n && y >= 0 && y < m && a[x][y].open)
		return &a[x][y];
	return NULL;
}

int main()
{
	int m, n;
	Node a[MAX_MN][MAX_MN] = {};
	cin >> n >> m;
	cin.get();

	Node *s, *t;
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
				s->open = true;
				s->dist = 0;
				break;
			case 'T':
				t = &a[i][j];
				t->open = true;
				break;
			case '.':
				a[i][j].open = true;
				break;
			}
		}
	}

	queue<Node *> q;
	int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}};
	q.push(s);
	s->visited = true;

	Node *cur;
	while (!q.empty()) {
		cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			Node *nxt = nextNode(a, cur->x + dir[i][0], cur->y + dir[i][1], n, m);
			if (nxt && !nxt->visited) {
				nxt->dist = min(nxt->dist, cur->dist + 1);
				q.push(nxt);
				nxt->visited = true;
				if (nxt == t) {
					cout << t->dist << endl;
					return 0;
				}
			}
		}
	}

	cout << "No Solution" << endl;

	return 0;
}

