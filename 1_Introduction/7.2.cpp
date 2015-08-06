/*
 * 7.2.cpp
 *
 * 描述
 * 输入一个0--100的分数，判断分数代表什么等级。
 * 95<=分数<=100, 输出1
 * 90<=分数<95,输出2
 * 85<=分数<90,输出3
 * 80<=分数<85,输出4
 * 70<=分数<80,输出5
 * 60<=分数<70输出6
 * 分数 < 60;输出7.
 *
 * 输入
 * n
 *
 * 输出
 * m
 *
 *  Created on: Jul 28, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 0 || n > 100) cout << 0 << endl;

	if (n >= 95)
		cout << 1 << endl;
	else if (n >= 90)
		cout << 2 << endl;
	else if (n >= 85)
		cout << 3 << endl;
	else if (n >= 80)
		cout << 4 << endl;
	else if (n >= 70)
		cout << 5 << endl;
	else if (n >= 60)
		cout << 6 << endl;
	else
		cout << 7 << endl;

	return 0;

}


