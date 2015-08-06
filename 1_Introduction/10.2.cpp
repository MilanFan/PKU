/*
 * 10.2.cpp
 *
 * 描述
 * 一般我们用strcmp可比较两个字符串的大小，比较方法为对两个字符串从前往后逐个字符相比较（按ASCII码值大小比较），
 * 直到出现不同的字符或遇到'\0'为止。如果全部字符都相同，则认为相同；如果出现不相同的字符，则以第一个不相同的字符的比较结果为准。
 * 但在有些时候，我们比较字符串的大小时，希望忽略字母的大小，例如"Hello"和"hello"在忽略字母大小写时是相等的。
 * 请写一个程序，实现对两个字符串进行忽略字母大小写的大小比较。
 *
 * 输入
 * 输入为两行，每行一个字符串，共两个字符串。（请用gets录入每行字符串）（每个字符串长度都小于80）
 *
 * 输出
 * 如果第一个字符串比第二个字符串小，输出一个字符"<"
 * 如果第一个字符串比第二个字符串大，输出一个字符">"
 * 如果两个字符串相等，输出一个字符"="
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


