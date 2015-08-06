/*
 * 10.5.cpp
 *
 * ����
 * ���������һ��CT��Ƭ��һ����ά�������洢�����������е�ÿ�������һ��ϸ����ÿ��ϸ������ɫ��0��255֮�䣨����0��255����һ��������ʾ��
 * ���Ƕ���һ��ϸ�����쳣ϸ����������ϸ������ɫֵ������������4��ϸ������ɫֵ��С50���ϣ�����50���������Ե�ϵ�ϸ�����ǲ���⡣
 * �������ǵ������ǣ�����һ���洢CT��Ƭ�Ķ�ά���飬д����ͳ����Ƭ���쳣ϸ������Ŀ��
 *
 * ����
 * ��һ�а���һ������N��100>=N>2��.
 * ������ N �У�ÿ���� N ��0~255֮�������������֮���ÿո������
 *
 * ���
 * ���ֻ��һ�У�����һ��������Ϊ�쳣ϸ������Ŀ��
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_DIFF 50

int main()
{
	int ct[MAX_N][MAX_N];
	int d;
	cin >> d;
	if (d <= 2 || d > MAX_N) return 0;

	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cin >> ct[i][j];
		}
	}

	int count = 0;
	for (int i = 1; i < d - 1; i++) {
		for (int j = 1; j < d - 1; j++) {
			if (ct[i-1][j] - ct[i][j] >= MAX_DIFF &&
					ct[i+1][j] - ct[i][j] >= MAX_DIFF &&
					ct[i][j-1] - ct[i][j] >= MAX_DIFF &&
					ct[i][j+1] - ct[i][j] >= MAX_DIFF)
				count++;
		}
	}

	cout << count << endl;

	return 0;
}


