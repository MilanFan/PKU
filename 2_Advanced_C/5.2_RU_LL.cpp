/*
 * 5.2.cpp
 *
 * ����
 * ����һ��row��col�е���������array��Ҫ���array[0][0]Ԫ�ؿ�ʼ���������ϵ����µĶԽ���˳������������顣
 *
 * ����
 * ����ĵ�һ��������������������Ϊrow��col��
 * ������row�У�ÿ�а���col������������һ����ά�������顣
 * ��ע�������row��col��֤0 < row < 100, 0 < col < 100��
 *
 * ���
 * ������˳�����ÿ��������ÿ������ռһ�С�
 *
 *  Created on: Aug 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_K 100

int main()
{
	int row, col;
	int a[MAX_K][MAX_K] = {};
	cin >> row >> col;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> a[i][j];
	for (int k = 0; k < row + col - 1; k++) {
		for (int i = 0; i <= k; i++) {
			int j = k - i;
			if (i < row && j < col)
				cout << a[i][j] << endl;
		}
	}

	return 0;
}

