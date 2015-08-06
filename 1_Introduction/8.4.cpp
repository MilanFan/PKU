/*
 * 8.4.cpp
 *
 * ����
 * ��һ������Ϊn(n < 1000)�����������У��ж��Ƿ����ĳ����Ԫ��֮��Ϊk��
 *
 * ����
 * ��һ���������еĳ���n��k���ÿո�ֿ���
 * �ڶ������������е�n���������ÿո�ֿ���
 *
 * ���
 * �������ĳ����Ԫ�صĺ�Ϊk�������yes���������no��
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000

int main()
{
	int n, k;
	cin >> n >> k;

	int a[MAX_N];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == k) {
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;

	return 0;
}

