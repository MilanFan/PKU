/*
 * 3.4.cpp
 *
 * 描述
 * 在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。
 * 写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注,不能匹配的右括号用"?"标注.
 *
 * 输入
 * 输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100
 * 注意：cin.getline(str,100)最多只能输入99个字符！
 *
 * 输出
 * 对每组输出数据，输出两行，第一行包含原始输入字符，第二行由"$","?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。
 *
 *  Created on: Aug 13, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100 + 1

const char l = '(';
const char r = ')';

void copy(char dest[], char ori[])
{
	int idx = 0;
	while (ori[idx]) {
		dest[idx] = ori[idx];
		idx++;
	}
}

int pairingHelper(char s[], int idx)
{
	while(s[idx] && s[idx] != l && s[idx] != r) {
		s[idx] = ' ';
		idx++;
	}
	return s[idx] ? idx : -1;
}

int pairing(char s[], int idx)
{
	int nidx = pairingHelper(s, idx);

	while (nidx >= 0 && s[nidx] == l) {
		int ridx = pairing(s, nidx + 1);
		if (ridx > 0) {
			s[nidx] = s[ridx] = ' ';
			nidx = pairingHelper(s, ridx + 1);
		} else {
			nidx = -1;
		}
	}

	return nidx;
}

void unmached(char s[])
{
	int i = 0;
	while(s[i]) {
		if (s[i] == l)
			s[i] = '$';
		else if (s[i] == r)
			s[i] = '?';
		i++;
	}
}

int main()
{
	char s1[MAX_N][MAX_N] = {};
	char s2[MAX_N][MAX_N] = {};
	int count = 0;

	while (cin.getline(s1[count], MAX_N)) {
		int idx = 0;
		copy(s2[count], s1[count]);
		while (idx >= 0) {
			idx = pairing(s2[count], idx);
			if (idx < 0) break;
			idx++;
		}
		unmached(s2[count]);
		count++;
	}

	for (int i = 0; i < count; i++) {
		cout << s1[i] << endl;
		cout << s2[i] << endl;
	}

	return 0;
}


