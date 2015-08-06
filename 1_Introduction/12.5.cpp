/*
 * 12.5.cpp
 *
 * ����
 * �������ַ���str��substr��str���ַ�����������10��substr���ַ�����Ϊ3��
 * ���ַ������������ַ�����β����'\0'������substr���뵽str��ASCII�������Ǹ��ַ����棬���ж�������ֻ���ǵ�һ����
 *
 * ����
 * ������������У�ÿһ��Ϊһ��������ݣ���ʽΪ
 * str substr
 *
 * ���
 * ����ÿһ��������ݣ��������֮����ַ�����
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	char str[15];
	char substr[4];

	while (cin >> str >> substr) {
		int imax = 0;
		char cmax = str[0];
		int len = 1;
		while (str[len]) {
			if (str[len] > cmax) {
				cmax = str[len];
				imax = len;
			}
			len++;
		}
		for (int i = len; i > imax; i--) {
			str[i+3] = str[i];
		}
		for (int i = 1; i <= 3; i++) {
			str[imax + i] = substr[i - 1];
		}

		cout << str << endl;
	}

	return 0;
}


