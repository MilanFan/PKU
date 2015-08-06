/*
 * 12.3.cpp
 *
 * 描述
 * 给定一组点(x,y)，求距离最远的两个点之间的距离。
 *
 * 输入
 * 第一行是点数n（n大于等于2）
 * 接着每一行代表一个点，由两个浮点数x y组成。
 *
 * 输出
 * 输出一行是最远两点之间的距离。
 * 使用printf("%.4f\n", dis)输出距离值并精确到小数点后4位。
 *
 * 提示
 * 注意在内部计算时最好使用double类型，但在用scanf读取数据时只能用float类型的变量。
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define MAX_N 100

int main()
{
	int n;
	cin >> n;
	if (n < 2) return 0;

	double p[MAX_N][2];
	for (int i = 0; i < n; i++)
		cin >> p[i][0] >> p[i][1];

	double dmax = 0.0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				double d = sqrt(pow(p[i][0]-p[j][0], 2.0) + pow(p[i][1]-p[j][1], 2.0));
				if (dmax < d) dmax = d;
			}
		}
	}

	cout << fixed << setprecision(4) << dmax << endl;

	return 0;
}


