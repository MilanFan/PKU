/*
 * 10.1.cpp
 *
 * ����
 * ��һ���ַ������ҳ�Ԫ����ĸa,e,i,o,u���ֵĴ�����
 *
 * ����
 * ����һ���ַ������ַ����п����пո�����gets(s)������һ���ַ������뵽�ַ�����s�У����ַ�������С��80���ַ���
 *
 * ���
 * ���һ�У��������a,e,i,o,u�������ַ����г��ֵĴ���������֮���ÿո�ָ���
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char str[80];
	gets(str);

	int count[5] = {};
	char ch = str[0];
	int n = 0;
	while (ch) {
		switch (ch) {
		case 'a':
			count[0]++;
			break;
		case 'e':
			count[1]++;
			break;
		case 'i':
			count[2]++;
			break;
		case 'o':
			count[3]++;
			break;
		case 'u':
			count[4]++;
			break;
		}
		ch = str[++n];
	}
	for (int i = 0; i < 5; i++)
		cout << count[i] << ' ';
	cout << endl;

	return 0;
}



