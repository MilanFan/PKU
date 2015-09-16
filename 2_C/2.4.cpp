/*
 * 2.4.cpp
 *
 * ����
 * �׿ǳ�ġ�A day in the life���͡�Tomorrow never knows�������˿ڣ����������a day in the life,
 * ��Ļ���tomorrow never knows?����ѧ�˼Ƹ�֮��������������⣬���ھ���ʵ�ְɡ�
 * ����һ����ʽΪyyyy-mm-dd�����ڣ����꣭�£��գ���������������һ������ڡ����Լٶ���������ڲ�����1600-01-01��Ҳ������2999-12-30��
 *
 * ����
 * �����һ�У���ʽΪyyyy-mm-dd�����ڡ�
 *
 * ���
 * ���Ҳ��һ�У���ʽΪyyyy-mm-dd������
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


