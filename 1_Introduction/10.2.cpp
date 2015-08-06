/*
 * 10.2.cpp
 *
 * ����
 * һ��������strcmp�ɱȽ������ַ����Ĵ�С���ȽϷ���Ϊ�������ַ�����ǰ��������ַ���Ƚϣ���ASCII��ֵ��С�Ƚϣ���
 * ֱ�����ֲ�ͬ���ַ�������'\0'Ϊֹ�����ȫ���ַ�����ͬ������Ϊ��ͬ��������ֲ���ͬ���ַ������Ե�һ������ͬ���ַ��ıȽϽ��Ϊ׼��
 * ������Щʱ�����ǱȽ��ַ����Ĵ�Сʱ��ϣ��������ĸ�Ĵ�С������"Hello"��"hello"�ں�����ĸ��Сдʱ����ȵġ�
 * ��дһ������ʵ�ֶ������ַ������к�����ĸ��Сд�Ĵ�С�Ƚϡ�
 *
 * ����
 * ����Ϊ���У�ÿ��һ���ַ������������ַ�����������gets¼��ÿ���ַ�������ÿ���ַ������ȶ�С��80��
 *
 * ���
 * �����һ���ַ����ȵڶ����ַ���С�����һ���ַ�"<"
 * �����һ���ַ����ȵڶ����ַ��������һ���ַ�">"
 * ��������ַ�����ȣ����һ���ַ�"="
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */

#define MAX_NUM 80

#include <iostream>
#include <cstdio>
using namespace std;

bool isAlphabet(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') ||
			(ch >= 'a' && ch <= 'z'))
		return true;
	return false;
}
char toLowerCase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 'a';
	return ch;
}

int main()
{
	char s1[MAX_NUM + 1], s2[MAX_NUM + 1];
	gets(s1);
	gets(s2);

	int idx = 0;
	char res = '=';
	while (s1[idx] && s2[idx] && idx <= MAX_NUM) {
		char c1 = s1[idx];
		char c2 = s2[idx];
		if (isAlphabet(c1) && isAlphabet(c2)) {
				c1 = toLowerCase(c1);
				c2 = toLowerCase(c2);
		}
		if (c1 < c2) {
			res = '<';
			break;
		} else if (c1 > c2) {
			res = '>';
			break;
		}
		idx++;
	}

	cout << res << endl;

	return 0;
}


