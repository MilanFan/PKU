/*
 * 6.2.cpp
 *
 * 描述
 * 一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。
 *
 * 输入
 * 输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。
 *
 * 输出
 * 输出一行，包含一个整数，表示大象至少要喝水的桶数。
 *
 * Note
 * 1升 = 1000立方厘米
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define N 20
#define PI 3.14159

int main()
{
	int h, r;
	cin >> h >> r;

	if (h <= 0 || r <= 0) return 0;

	cout << (int)((N * 1000) / (PI * r * r * h)) + 1 << endl;

	return 0;
}




