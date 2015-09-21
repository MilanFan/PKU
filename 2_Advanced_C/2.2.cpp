/*
 * 2.2.cpp
 *
 * 描述
 * 我国有4大淡水湖。
 * A说：洞庭湖最大，洪泽湖最小，鄱阳湖第三。
 * B说：洪泽湖最大，洞庭湖最小，鄱阳湖第二，太湖第三。
 * C说：洪泽湖最小，洞庭湖第三。
 * D说：鄱阳湖最大，太湖最小，洪泽湖第二，洞庭湖第三。
 * 已知这4个湖的大小均不相等，4个人每人仅答对一个，
 * 请编程按照鄱阳湖、洞庭湖、太湖、洪泽湖的顺序给出他们的大小排名。
 *
 * 输入
 * 无。
 *
 * 输出
 * 输出为4行，第1行为鄱阳湖的大小名次，从大到小名次分别表示为1、2、3、4；第2、3、4行分别为洞庭湖、太湖、洪泽湖的大小名次。
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int sum = 1 + 2 + 3 + 4;

	// i - 鄱阳湖; j - 洞庭湖; k - 太湖; l - 洪泽湖
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) continue;
			for (int k = 0; k < 4; k++) {
				if (i == k || j == k) continue;
				int l = sum - i - j - k;
				int a = (i == 3) + (j == 1) + (l == 4);
				int b = (i == 2) + (j == 4) + (k == 3) + (l == 1);
				int c = (j == 3) + (l == 4);
				int d = (i == 1) + (j == 3) + (k == 4) + (l == 2);
				if (a * b * c * d == 1) {
					cout << i << endl << j << endl << k << endl << l << endl;
					return 0;
				}
			}
		}
	}

	return 0;
}


