/*
 * 9.1.cpp
 *
 * ����
 * �������������m �� k������1 < m < 100000��1 < k <5 ���ж�m �ܷ�19��������ǡ�ú���k��3��������������������YES���������NO��
 * ���磬���룺
 * 43833 3
 * �������������YES
 * �������
 * 39331 3
 * ������3��3�������ܱ�19������Ҳ������������Ӧ���NO
 *
 * ����
 * m �� k ��ֵ���ո���
 *
 * ���
 * ��������ʱ��� YES��������ʱ��� NO
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

