/*
 * 9.4.cpp
 *
 * ����
 * ��һ��ƽ���ϣ������������(x,y),(a,b),���˵(x,y)֧����(a,b)������ָx>=a,y>=b;
 * ��ͼ����������(a,b)��������(x,y)Ϊ���Ͻǵ�һ�����޵������ڡ�
 * ����n����ļ��ϣ�һ���������ɸ��㣬���ǲ��ᱻ�����е��κ�һ����֧�䣬��Щ���������ֵ�㡣
 * ����ҳ����еļ���㣬����x������С����������������ꡣ
 * ����涨��n������100�����Ҳ����ǵ������Ϊ�����������
 *
 * ����
 * ����������У���һ����������n����ʾ�ǵ������ڶ��а���n��������꣬����ֵ�������������귶Χ��0��100�����������в�����������ͬ�ĵ㡣
 *
 * ���
 * ��x��������С�����˳��������м���㡣
 * �����ʽΪ:(x1,y1),(x2,y2),...(xk,yk)
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

