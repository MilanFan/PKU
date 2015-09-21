/*
 * 9.2.cpp
 *
 * 描述
 * 输入一串长度不超过500个符号的字符串，输出在串中出现第2多的英语字母(大小写字母认为相同)和次数（如果串中有其它符号，则忽略不考虑）。如果有多个字母的次数都是第2多，则按串中字母出现的顺序输出第1个。
 * 例 ab&dcAab&c9defgb
 * 这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，其中的符号&和9均忽略不考虑。因此，出现第2多的应该是 c 和 d，但是 d 开始出现的位置在 c 的前面，因此，输出为
 * D+d:2
 * (假定在字符串中，次数第2多的字母总存在)
 *
 * 输入
 * 一个字符串
 *
 * 输出
 * 大写字母+小写字母:个数
 *
 *  Created on: Sep 4, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 500

char toLower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ch;
	if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 'a';
	return 0;
}

int main()
{
	char str[MAX_N] = {};
	unsigned int count[26] = {};
	unsigned int order[26] = {};
	int idx = 0;
	int seq = 0;
	unsigned int max1 = 0;
	unsigned int max2 = 0;

	cin.getline(str, MAX_N);
	while (str[idx]) {
		if(char ch = toLower(str[idx])) {
			int i = ch - 'a';
			count[i]++;
			if (count[i] > max1) {
				max1 = count[i];
			}
			if (order[i] == 0) {
				order[i] = ++seq;
			}
		}
		idx++;
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] > max2 && count[i] < max1) {
			max2 = count[i];
		}
	}

	idx = -1;
	for (int i = 0; i < 26; i++) {
		if (count[i] == max2) {
			if (idx < 0 || order[idx] > order[i])
				idx = i;
		}
 	}
	if (idx >= 0) {
		char c1 = idx + 'A';
		char c2 = idx + 'a';
		cout << c1 << '+' << c2 << ':' << max2 << endl;
	}

	return 0;
}

