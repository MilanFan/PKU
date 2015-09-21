/*
 * 9.1.cpp
 *
 * 描述
 * 输入二个正整数m 和 k，其中1 < m < 100000，1 < k <5 ，判断m 能否被19整除，且恰好含有k个3，如果满足条件，则输出YES，否则，输出NO。
 * 例如，输入：
 * 43833 3
 * 满足条件，输出YES
 * 如果输入
 * 39331 3
 * 尽管有3个3，但不能被19整除，也不满足条件，应输出NO
 *
 * 输入
 * m 和 k 的值，空格间隔
 *
 * 输出
 * 满足条件时输出 YES，不满足时输出 NO
 *
 *  Created on: Sep 4, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_M 100000
#define MAX_K 5
#define DIVISOR 19
#define NUM 3

int main()
{
	int m, k;
	cin >> m >> k;

	if (m % DIVISOR == 0) {
		while (m > 0) {
			if (m % 10 == NUM)
				k--;
			m /= 10;
		}
		if (k == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}

