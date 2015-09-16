/*
 * 2.3.cpp
 *
 * ����
 * ��һ��С�͵ı���ϵͳ���������¹��ܣ�
 * ��1��ͳ��ÿ����������Ʊ����Ǯ��
 * ��2��ͳ��ÿ�෢Ʊ����Ǯ��
 * ����ϵͳ��Ϊ���£����跢Ʊ�����A��B��C����;һ���������ˣ�ID�ֱ�Ϊ1��2��3��
 *
 * ����
 * ϵͳ����������У�ÿ�е�һ����Ϊ��ԱID�����ͣ�1��2��3�����ڶ�����Ϊ��Ʊ������(����������100)��֮���Ƕ����Ʊ����ַ��ͣ�A��B��C������Ӧ��Ʊ�������ȸ�����,������1000.0����
 *
 * ���
 * ����������У�ǰ����Ϊÿ�ˣ���ID��С���������������Ʊ��Ǯ����������λС������������Ϊÿ�෢Ʊ����Ǯ����������λС������
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_P 3
#define MAX_T 3

int main()
{
	double p[MAX_P] = {};
	double t[MAX_T] = {};

	for (int i = 0; i < MAX_P; i++) {
		int id;
		int n;
		cin >> id >> n;

		char ch;
		double val;
		for (int j = 0; j < n; j++) {
			cin >> ch >> val;
			switch(ch) {
			case 'A':
				t[0] += val;
				break;
			case 'B':
				t[1] += val;
				break;
			case 'C':
				t[2] += val;
				break;
			}
			p[id - 1] += val;
		}
	}

	cout << fixed << setprecision(2);
	for (int i = 0; i < MAX_P; i++) {
		cout << i + 1 << " " << p[i] << endl;
	}
	for (int i = 0; i < MAX_P; i++) {
		char c = 'A' + i;
		cout << c << " " << t[i] << endl;
	}

	return 0;
}


