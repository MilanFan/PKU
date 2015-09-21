/*
 * 3.1.cpp
 *
 * ����
 * ����һ�����ӣ�һ�У����������е�ÿһ�����ʷ�ת�������
 *
 * ����
 * ֻ��һ�У�Ϊһ���ַ�����������500���ַ�������֮���Կո������
 *
 * ���
 * ��תÿһ�����ʺ���ַ���������֮��Ŀո�����ԭ��һ�¡�
 *
 *  Created on: Aug 13, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 500 + 1

void reverseWords(char s[])
{
	char ch = s[0];
	if (ch) {
		reverseWords(s + 1);
		cout << ch;
	}
}

int main()
{
	char str[MAX_N] = {};
	cin.getline(str, MAX_N);

	int idx = 0;
	while (str[idx]) {
		char s[MAX_N] = {};
		int i = 0;
		while (str[idx] && str[idx] != ' ') {
			s[i++] = str[idx++];
		}
		if (i > 0) {
			reverseWords(s);
		}
		if (str[idx])
			cout << " ";
			idx++;
	}
	return 0;
}

