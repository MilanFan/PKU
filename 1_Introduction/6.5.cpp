/*
 * 6.5.cpp
 *
 * ����
 * �Ӽ�������һ���������λ������Ҫ����ȷ�ط�������İ�λ��ʮλ�͸�λ�������ֱ�����Ļ��������������ÿ�����һ�����ķ�ʽ�������������š�
 *
 * ����
 * һ���������λ����
 *
 * ���
 * һ���������λ����
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 100 || n > 999) return 0;

	cout << n / 100 << endl << (n % 100) / 10 << endl << n % 10 << endl;

	return 0;
}



