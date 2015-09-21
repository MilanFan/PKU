/*
 * 6.2.cpp
 *
 * ����
 * �������Ǻ��ᣨDNA�������������ļ������˫�����ķ�ʽ��϶��ɡ�������DNA�ļ������4�֣��ֱ�Ϊ����ʣ�A���������ʣ�G����������ण�T���Ͱ���ण�C����
 * ����֪��������������������Ķ�Ӧλ���ϣ���������Ǻ����������ԣ����������ǺͰ������ԡ����������Ǹ���һ�������ϵļ�����У�������Ӧ�Ļ������ϵļ�����С�
 *
 * ����
 * ��һ����һ��������n����������n��Ҫ���ļ������
 * ���¹���n�У�ÿ����һ���ַ�����ʾһ�������������ַ���ֻ���д�д��ĸA��T��G��C���ֱ��ʾ����ʡ�������ड������ʺͰ���ड�ÿ��������ĳ��ȶ�������255��
 *
 * ���
 * ����n�У�ÿ��Ϊһ��ֻ���д�д��ĸA��T��G��C���ַ������ֱ�Ϊ������ĸ�����������ļ������
 *
 *  Created on: Sep 2, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_L 255 + 1

int main()
{
	char str[MAX_N][MAX_L] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < n; i++) {
		int idx = 0;
		while (str[i][idx]) {
			switch (str[i][idx]) {
			case 'A':
				str[i][idx] = 'T';
				break;
			case 'T':
				str[i][idx] = 'A';
				break;
			case 'G':
				str[i][idx] = 'C';
				break;
			case 'C':
				str[i][idx] = 'G';
				break;
			default:
				str[i][idx] = '*';
				break;
			}
			idx++;
		}
		cout << str[i] << endl;
	}

	return 0;
}


