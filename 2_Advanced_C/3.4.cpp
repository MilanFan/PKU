/*
 * 3.4.cpp
 *
 * ����
 * ��ĳ���ַ��������Ȳ�����100�����������š������źʹ�Сд��ĸ���涨���볣��������ʽ��һ�����κ�һ�������Ŷ����ڵ����������ұ��Ҿ��������������ƥ�䡣
 * дһ�������ҵ��޷�ƥ��������ź������ţ����ԭ���ַ�����������һ�б������ƥ������š�����ƥ�����������"$"��ע,����ƥ�����������"?"��ע.
 *
 * ����
 * ��������������ݣ�ÿ������һ�У�����һ���ַ�����ֻ�����������źʹ�Сд��ĸ���ַ������Ȳ�����100
 * ע�⣺cin.getline(str,100)���ֻ������99���ַ���
 *
 * ���
 * ��ÿ��������ݣ�������У���һ�а���ԭʼ�����ַ����ڶ�����"$","?"�Ϳո���ɣ�"$"��"?"��ʾ��֮��Ӧ�������ź������Ų���ƥ�䡣
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


