/*
 * 8.1.cpp
 *
 * ����
 * ����һ��������a���Լ������5���������������ǣ���5�������У�С��a�������ĺ��Ƕ��٣�
 *
 * ����
 * ����һ�У�ֻ����6��С��100�������������е�һ������������a��
 *
 * ���
 * ���һ�У�����һ������������5������С��a�����ĺ͡�
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int b, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		if (b < a) sum += b;
	}

	cout << sum << endl;

	return 0;
}


