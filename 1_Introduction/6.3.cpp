/*
 * 6.3.cpp
 *
 * ����
 * ����ʦ���ڵġ�������ۡ����ſ����п��Ըոս���������֪��������ȡ�õ���߷�������Ϊ�����Ƚ϶࣬������������齻������������ȽϷ��㡣���ܰ�����ʦ������������
 *
 * ����
 * �������У���һ��Ϊ����n��1 <= n < 100������ʾ�μ���ο��Ե�����.�ڶ�������n��ѧ���ĳɼ�������������֮���õ����ո���������гɼ���Ϊ0��100֮���������
 *
 * ���
 * ���һ������������ߵĳɼ���
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 100

int main()
{
	int n;
	int a[MAX_N];
	cin >> n;
	if (n < 1 || n >= MAX_N) return 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	cout << max << endl;

	return 0;
}



