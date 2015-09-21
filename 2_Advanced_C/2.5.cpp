/*
 * 2.5.cpp
 *
 * 描述
 * 有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，A亚种繁殖能力非常强，
 * B亚种的繁殖能力很弱。在一次为时一个 小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，
 * 请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。
 *
 * 输入
 * 输入有多行，第一行为整数n（n≤100），表示有n个培养皿。
 * 其余n行，每行有三个整数，分别代表培养皿编号，试验前细菌数量，试验后细菌数量。
 *
 * 输出
 * 输出有多行：
 * 第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。
 * 然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。
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


