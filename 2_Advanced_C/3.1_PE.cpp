/*
 * 3.1.cpp
 *
 * 描述
 * 输入一个句子（一行），将句子中的每一个单词翻转后输出。
 *
 * 输入
 * 只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。
 *
 * 输出
 * 翻转每一个单词后的字符串，单词之间的空格需与原文一致。
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

