/*
 * 2.4.cpp
 *
 * 描述
 * 甲壳虫的《A day in the life》和《Tomorrow never knows》脍炙人口，如果告诉你a day in the life,
 * 真的会是tomorrow never knows?相信学了计概之后这个不会是难题，现在就来实现吧。
 * 读入一个格式为yyyy-mm-dd的日期（即年－月－日），输出这个日期下一天的日期。可以假定输入的日期不早于1600-01-01，也不晚于2999-12-30。
 *
 * 输入
 * 输入仅一行，格式为yyyy-mm-dd的日期。
 *
 * 输出
 * 输出也仅一行，格式为yyyy-mm-dd的日期
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

bool isLeapYear(int yr)
{
	return (yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0);
}

int main()
{
	int dom[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int yr, mt, dy;
	char s[16];
	cin.getline(s, 8, '-');
	yr = atoi(s);
	cin.getline(s, 8, '-');
	mt = atoi(s);
	cin >> dy;

	dy += 1;
	int days = dom[mt - 1];
	if (isLeapYear(yr) && mt == 2)
		days += 1;
	if (dy > days) {
		dy -= days;
		mt += 1;
	}
	if (mt > 12) {
		mt = 1;
		yr += 1;
	}

	ostream::fmtflags old = cout.flags();
	cout << setfill('0') << setw(4) << yr;
	cout.flags(old);
	cout << '-';
	cout << setfill('0') << setw(2) << mt;
	cout.flags(old);
	cout << '-';
	cout << setfill('0') << setw(2) << dy << endl;

	return 0;
}


