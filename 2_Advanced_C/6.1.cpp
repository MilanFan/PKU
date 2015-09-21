/*
 * 6.1.cpp
 *
 * 描述
 * 某个科室的病房分为重症和普通，只有当病人的疾病严重程度超过了入住重症病房的最低严重值，才可以安排入住重症病房。
 * 现在要求设计一个程序，给病人安排好病房。疾病的严重程度用0到10来表示，0表示小毛病，10表示非常严重。
 *
 * 输入
 * 第一行输入病人的个数m(m < 50)，以及安排住入重症病房的最低严重值a
 * 紧接着m行，每行表示病人编号（三个位，用0补齐）及其疾病的严重程度（浮点数，1位小数）。
 * 每个病人的疾病严重程度都不一样。
 *
 * 输出
 * 要求按照病人的严重程度输出住在重症病房里的病人的编号
 *
 * 注意：
 * 如果当前所有病人的严重程度并不满足住在重症病房里，则输出“None.”（不包括引号）
 *
 *  Created on: Sep 2, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_N 50

struct Patient {
	int id;
	double val;
	Patient(): id(0), val(-1.0) {}
};

void sort(Patient a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].val < a[j].val) {
				Patient t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main()
{
	Patient a[MAX_N] = {};
	int n;
	double l;
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].val;
	}

	sort(a, n);

	if (a[0].val < l) {
		cout << "None." << endl;
	} else {
		for (int i = 0; i < n && a[i].val >= l; i++) {
			cout << setfill('0') << setw(3) << a[i].id << " ";
			cout << fixed << setprecision(1) << a[i].val << endl;
		}
	}

	return 0;
}

