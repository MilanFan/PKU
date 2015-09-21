/*
 * 6.3.cpp
 *
 * ����
 * ��һ��m��n��ɽ���ϣ���֪ÿ���ؿ��ƽ���̣߳����������ɽ�����ڵĵؿ飨��νɽ����������ؿ�ƽ���̲߳����������������ڵ��ĸ��ؿ�ÿ���ؿ��ƽ���߳�С�ĵط�)��
 *
 * ����
 * ��һ����������������ʾɽ�صĳ�m��5��m��20���Ϳ�n��5��n��20����
 * ���m��Ϊһ��m��n���������󣬱�ʾÿ���ؿ��ƽ���̡߳�ÿ�е���������һ���ո�ָ���
 *
 * ���
 * ��������϶����ڵؿ��λ�á�ÿ��һ��������mֵ��С������nֵ��С�����˳�������
 *
 *  Created on: Sep 2, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_M 20
#define MAX_N 20

bool isHill(int a[][MAX_N], int m, int n, int i, int j)
{
	if ((i > 0 && a[i][j] < a[i - 1][j]) ||
			(i < m - 1 && a[i][j] < a[i + 1][j]) ||
			(j > 0 && a[i][j] < a[i][j - 1]) ||
			(j < n - 1 && a[i][j] < a[i][j + 1]))
		return false;
	return true;
}

int main()
{
	int a[MAX_M][MAX_N] = {};
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (isHill(a, m, n, i, j))
				cout << i << " " << j << endl;

	return 0;
}


