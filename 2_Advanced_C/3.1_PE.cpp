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

#define MAX_WORD 100

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
	char s[MAX_WORD];
	int i = 0;
	while (cin >> s) {
		if (i++ > 0) cout << "?";
		reverseWords(s);
	}
	return 0;
}

