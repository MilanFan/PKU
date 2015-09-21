/*
 * 5.3.cpp
 *
 * 描述
 * 给一段英文短文，单词之间以空格分隔（每个单词包括其前后紧邻的标点符号）。请将短文重新排版，要求如下：
 * 每行不超过80个字符；每个单词居于同一行上；在同一行的单词之间以一个空格分隔；行首和行尾都没有空格。
 *
 * 输入
 * 第一行是一个整数n，表示英文短文中单词的数目. 其后是n个以空格分隔的英文单词（单词包括其前后紧邻的标点符号，且每个单词长度都不大于40个字母）。
 *
 * 输出
 * 排版后的多行文本，每行文本字符数最多80个字符，单词之间以一个空格分隔，每行文本首尾都没有空格。
 *
 *  Created on: Aug 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_W 40
#define MAX_L 80

int length(char s[])
{
	for (int i = 0; i < MAX_W; i++) {
		if (!s[i]) return i;
	}

	return MAX_W;
}

void output(char (*s)[MAX_W], int count)
{
	for (int i = 0; i < count; i++) {
		if (i > 0)
			cout << " ";
		cout << s[i];
	}
	cout << endl;
}

int main()
{
	char s[MAX_N][MAX_W] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];

	int sum = 0;
	int count = 0;
	int start = 0;
	for (int i = 0; i < n; i++) {
		int len = length(s[i]);
		if (sum + len > MAX_L) {
			output(s + start, count);
			sum = len + 1;
			start = i;
			count = 1;
		} else {
			sum += len + 1;
			count++;
		}
	}
	output(s + start, count);

	return 0;
}


