/*
 * 12.1.cpp
 *
 * 描述
 * 判断某年是否是闰年。
 *
 * 输入
 * 输入只有一行，包含一个整数a(0 < a < 3000)
 *
 * 输出
 * 一行，如果公元a年是闰年输出Y，否则输出N
 *
 * 提示
 * 公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年， 能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_YEAR 30000

int main()
{
	int yr;
	cin >> yr;
	if (yr < 1 || yr >= MAX_YEAR) return 0;

	if (yr % 4 != 0 ||
			(yr % 100 == 0 && yr % 400 != 0) ||
			(yr % 100 == 0 && yr % 3200 == 0))
			cout << "N" << endl;
	else
		cout << "Y" << endl;

	return 0;
}

