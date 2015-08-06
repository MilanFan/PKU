/*
 * 10.1.cpp
 *
 * 描述
 * 在一个字符串中找出元音字母a,e,i,o,u出现的次数。
 *
 * 输入
 * 输入一行字符串（字符串中可能有空格，请用gets(s)方法把一行字符串输入到字符数组s中），字符串长度小于80个字符。
 *
 * 输出
 * 输出一行，依次输出a,e,i,o,u在输入字符串中出现的次数，整数之间用空格分隔。
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



