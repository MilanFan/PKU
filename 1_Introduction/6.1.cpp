/*
 * 6.1.cpp
 *
 * ����
 * ������һ��n��ƻ�����ܲ��ҵ�������ʱ����������һ�����ӡ�����ÿxСʱ�ܳԵ�һ��ƻ������������ڳ���һ��ƻ��֮ǰ�������һ������ô����yСʱ�㻹�ж��ٸ�������ƻ����
 *
 * ����
 * �����һ�У�����n��x��y����Ϊ��������
 *
 * ���
 * ���Ҳ��һ�У�ʣ�µ�ƻ������
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;

	if (n <= 0 || x <= 0 || y < 0) return 0;

	int a = y % x ? (y / x) + 1 : y / x;
	cout << (n > a ? n - a : 0) << endl;

	return 0;
}


