/*
 * 8.2.cpp
 *
 * ����
 * �ڱ���У԰��,û�����г�,�Ͽΰ��»�ܲ�����.��ʵ����,����ȥ���κ����鶼���ﳵ��,
 * ��Ϊ�ﳵ��Ҫ�ҳ���������ͣ����������,��Ҫ����һЩʱ��.�����ҵ����г�,�������������г���ʱ��Ϊ27��;
 * ͣ��������ʱ��Ϊ23��;����ÿ������1.2��,�ﳵÿ������3.0��.���ж��߲�ͬ�ľ���ȥ����,���ﳵ�컹����·��.
 *
 * ����
 * ��һ��Ϊ����������ݵ�����n
 * ���ÿһ������Ϊһ�ΰ���Ҫ���ߵľ���,��λΪ��.
 *
 * ���
 * ��Ӧÿ������,����ﳵ��,���һ��"Bike";�����·��,���һ��"Walk";���һ����,���һ��"All".
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100

int main()
{
	int n;
	cin >> n;

	int res[MAX_N] = {};
	for (int i = 0; i < n; i++) {
		double a;
		cin >> a;
		double tw = a / 1.2;
		double tb = a / 3.0 + 27 + 23;
		if (tw > tb)
			res[i] = -1;
		else if (tw < tb)
			res[i] = 1;
		else
			res[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (res[i] < 0)
			cout << "Bike" << endl;
		else if (res[i] > 0)
			cout << "Walk" << endl;
		else
			cout << "All" << endl;
	}

	return 0;
}
