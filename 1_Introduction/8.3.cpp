/*
 * 8.3.cpp
 *
 * 描述
 * 某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万，
 * 假设房子价格以每年百分之K增长，并且该程序员未来年薪不变，且不吃不喝，不用交税，
 * 每年所得N万全都积攒起来，问第几年能够买下这套房子（第一年房价200万，收入N万）
 *
 * 输入
 * 有多行，每行两个整数N（10 <= N <= 50）, K（1 <= K <= 20）
 *
 * 输出
 * 针对每组数据，如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible，输出需要换行
 *
 * NOTE
 * use ctrl+z to stop input
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_NUM 100

int main()
{
	int N, K;
	int res[MAX_NUM] = {};
	int count = 0;
	while ((cin >> N >> K) && count < MAX_NUM) {
		if (N < 10 || N > 50 || K < 1 || K > 20) continue;
		int yr = 1;
		double price = 200;
		while (N * yr < price) {
			double inc = price * (K / 100.0);
			if (inc >= N) {
				yr = 0;
				break;
			}
			price += inc;
			yr++;
		}
		res[count++] = yr;
	}

	for (int i = 0; i < count; i++) {
		if (res[i] > 0)
			cout << res[i] << endl;
		else
			cout << "Impossible" << endl;
	}

	return 0;
}

