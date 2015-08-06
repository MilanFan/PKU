/*
 * 10.3.cpp
 *
 * 描述
 * 一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式
 *
 * 输入
 * 一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式
 *
 * 输出
 * 该句子中最长的单词。如果多于一个，则输出第一个
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


