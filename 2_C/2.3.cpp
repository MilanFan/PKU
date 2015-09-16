/*
 * 2.3.cpp
 *
 * 描述
 * 有一个小型的报账系统，它有如下功能：
 * （1）统计每个人所报发票的总钱数
 * （2）统计每类发票的总钱数
 * 将此系统简化为如下：假设发票类别共有A、B、C三种;一共有三个人，ID分别为1、2、3。
 *
 * 输入
 * 系统输入包含三行，每行第一个数为人员ID（整型，1或2或3），第二个数为发票总张数(张数不超过100)，之后是多个发票类别（字符型，A或B或C）和相应发票金额（单进度浮点型,不超过1000.0）。
 *
 * 输出
 * 输出包含六行，前三行为每人（按ID由小到大输出）所报发票总钱数（保留两位小数），后三行为每类发票的总钱数（保留两位小数）。
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_P 3
#define MAX_T 3

int main()
{
	double p[MAX_P] = {};
	double t[MAX_T] = {};

	for (int i = 0; i < MAX_P; i++) {
		int id;
		int n;
		cin >> id >> n;

		char ch;
		double val;
		for (int j = 0; j < n; j++) {
			cin >> ch >> val;
			switch(ch) {
			case 'A':
				t[0] += val;
				break;
			case 'B':
				t[1] += val;
				break;
			case 'C':
				t[2] += val;
				break;
			}
			p[id - 1] += val;
		}
	}

	cout << fixed << setprecision(2);
	for (int i = 0; i < MAX_P; i++) {
		cout << i + 1 << " " << p[i] << endl;
	}
	for (int i = 0; i < MAX_P; i++) {
		char c = 'A' + i;
		cout << c << " " << t[i] << endl;
	}

	return 0;
}


