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

#define MAX_N 10000
#define MAX_L 80

void output(char s[], int len) {
	for (int i = 0 ; i < len; i++)
		cout << s[i];
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	cin.get();
	char str[MAX_N];
	cin.getline(str, MAX_N);

	int i = -1;
	int j = -1;
	int idx = 0;
	int t = 0;
	while (str[idx]) {
		if (idx - i > MAX_L && i != -1) {
			output(str + i, j - i + 1);
			idx = j + 1;
			i = j = -1;
		}
		if (str[idx] != ' ') {
			if (i == -1) {
				i = idx;
			}
			t = idx;
		} else if (i != -1){
			j = t;
		}
		idx++;
	}
	j = t;
	if (i > 0 && j > 0)
		output(str + i, j - i + 1);

	return 0;
}


