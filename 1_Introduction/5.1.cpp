/*
 * 5.1.cpp
 *
 * 晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。
 *
 * 输入
 * 输入有一行，贝贝邀请晶晶去看展览的日期，用数字1到7表示从星期一到星期日。
 *
 * 输出
 * 输出有一行，如果晶晶可以接受贝贝的邀请，输出YES，否则，输出NO。注意YES和NO都是大写字母！
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int date;
	cin >> date;

	if (date < 1 || date > 7 ||
			(date % 2 != 0 && date != 7))
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}


