/*
 * 10.3.cpp
 *
 * ����
 * һ����'.'��β�ļ�Ӣ�ľ��ӣ�����֮���ÿո�ָ���û����д��ʽ������������ʽ
 *
 * ����
 * һ����'.'��β�ļ�Ӣ�ľ��ӣ����Ȳ�����500��������֮���ÿո�ָ���û����д��ʽ������������ʽ
 *
 * ���
 * �þ�������ĵ��ʡ��������һ�����������һ��
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <cstdio>
using namespace std;

#define MAX_CHAR 501

int main()
{
	char str[MAX_CHAR];
	gets(str);

	int idx = 0;
	int maxLen = 0;
	int maxIdx = 0;
	int len = 0;
	char c = str[idx];
	while (c) {
		if (c == ' ' || c == '.') {
			if (len > maxLen) {
				maxLen = len;
				maxIdx = idx - len;
			}
			len = 0;
			if (c == '.')
				break;
		} else
			len++;
		idx++;
		c = str[idx];
	}

	for (int i = maxIdx; i < maxLen + maxIdx; i++)
		cout << str[i];
	cout << endl;

	return 0;
}


