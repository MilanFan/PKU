/*
 * 12.1.cpp
 *
 * ����
 * �ж�ĳ���Ƿ������ꡣ
 *
 * ����
 * ����ֻ��һ�У�����һ������a(0 < a < 3000)
 *
 * ���
 * һ�У������Ԫa�����������Y���������N
 *
 * ��ʾ
 * �������귨�У��ܱ�4�����Ĵ�������꣬���ܱ�100���������ܱ�400��������ݲ������꣬ �ܱ�3200������Ҳ�������꣬��1900����ƽ�꣬2000�������꣬3200�겻�����ꡣ
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

