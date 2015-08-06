/*
 * 5.2.cpp
 *
 * ����
 * ���������� m �� n������m �� n ��֮������������ĺͣ����У�m ������ n����n ������300������ m=3, n=12, �����Ϊ��3+5+7+9+11=35
 *
 * ����
 * ������ m �� n���������Կո��������� 0<=m <= n <= 300 ��
 *
 * ���
 * ����֮��
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	int sum = 0;
	if (m < 0 || n > 300 || m > n) cout << sum << endl;

	int start = m % 2 ? m : m + 1;
	int end = n % 2 ? n : n - 1;
	for (int i = start; i <= end; i += 2)
		sum += i;

	cout << sum << endl;

	return 0;
}



