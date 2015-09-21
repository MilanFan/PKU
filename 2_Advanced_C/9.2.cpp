/*
 * 9.2.cpp
 *
 * ����
 * ����һ�����Ȳ�����500�����ŵ��ַ���������ڴ��г��ֵ�2���Ӣ����ĸ(��Сд��ĸ��Ϊ��ͬ)�ʹ���������������������ţ�����Բ����ǣ�������ж����ĸ�Ĵ������ǵ�2�࣬�򰴴�����ĸ���ֵ�˳�������1����
 * �� ab&dcAab&c9defgb
 * ���a �� b������3�Σ�c��d������2�Σ�e��f �� g ������1�Σ����еķ���&��9�����Բ����ǡ���ˣ����ֵ�2���Ӧ���� c �� d������ d ��ʼ���ֵ�λ���� c ��ǰ�棬��ˣ����Ϊ
 * D+d:2
 * (�ٶ����ַ����У�������2�����ĸ�ܴ���)
 *
 * ����
 * һ���ַ���
 *
 * ���
 * ��д��ĸ+Сд��ĸ:����
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

