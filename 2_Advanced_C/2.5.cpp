/*
 * 2.5.cpp
 *
 * ����
 * ��һ��ϸ����ΪA��B�������֣����ǵ���������������ȫ��ͬ�������ڷ�ֳ���������������A���ַ�ֳ�����ǳ�ǿ��
 * B���ֵķ�ֳ������������һ��Ϊʱһ�� Сʱ��ϸ����ֳʵ���У�ʵ��Ա���������ϸ������������ˣ�
 * �����дһ�����򣬸���ʵ���������������ֵ����������·ֳ����顣
 *
 * ����
 * �����ж��У���һ��Ϊ����n��n��100������ʾ��n��������
 * ����n�У�ÿ���������������ֱ�����������ţ�����ǰϸ�������������ϸ��������
 *
 * ���
 * ����ж��У�
 * ��һ�����A��������������������ÿ�����A����������ı�ţ�����ֳ���������С�
 * Ȼ��һ�����B��������������������ÿ�����B����������ı�ţ�Ҳ����ֳ���������С�
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 100

struct Dish {
	int id;
	double rate;
	Dish(): id(0), rate(0.0) {}
};

void swap(Dish *a, Dish *b)
{
	int itmp = a->id;
	a->id = b->id;
	b->id = itmp;
	double dtmp = a->rate;
	a->rate = b->rate;
	b->rate = dtmp;
}

int main()
{
	Dish d[MAX_N];
	int n;
	cin >> n;

	int count = 0;
	for (int i = 0; i < n; i++) {
		int id, b, a;
		cin >> id >> b >> a;
		if (b != 0) {
			d[count].id = id;
			d[count++].rate = (double)(a) / (double)(b);
		}
	}
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (d[j].rate < d[i].rate) {
				swap(&d[i], &d[j]);
			}
		}
	}

	double maxDiff = 0.0;
	int maxIdx = 0;
	for (int i = 0; i < count - 1; i++) {
		if (d[i + 1].rate - d[i].rate > maxDiff) {
			maxDiff = d[i + 1].rate - d[i].rate;
			maxIdx = i + 1;
		}
	}

	cout << count - maxIdx << endl;
	for (int i = maxIdx; i < count; i++) {
		cout << d[i].id << endl;
	}
	cout << maxIdx << endl;
	for (int i = 0; i < maxIdx; i++) {
		cout << d[i].id << endl;
	}

	return 0;
}


