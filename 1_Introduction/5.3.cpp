/*
 * 5.3.cpp
 *
 * ����
 * ����k��1<k<100����������������ÿ�������Ǵ��ڵ���1��С�ڵ���10������д������������k���������У�1��5��10���ֵĴ�����
 *
 * ����
 * ���������У���һ�а���һ��������k���ڶ��а���k����������ÿ������������һ���ո�ֿ���
 *
 * ���
 * ��������У���һ��Ϊ1���ֵĴ��������ڶ���Ϊ5���ֵĴ�����������Ϊ10���ֵĴ�����
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 100

int main()
{
	int a[MAX_N];
	int k;
	cin >> k;
	if (k <= 1 || k >= MAX_N) return 0;
	for (int i = 0; i < k; i++)
		cin >> a[i];

	int num1 = 0;
	int num5 = 0;
	int num10 = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] == 1)
			num1++;
		else if (a[i] == 5)
			num5++;
		else if (a[i] == 10)
			num10++;
	}

	cout << num1 << endl;
	cout << num5 << endl;
	cout << num10 << endl;

	return 0;
}
