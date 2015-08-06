/*
 * 10.4.cpp
 *
 * ����
 * ��дһ�����������������5*5�Ķ�ά���飬��n��m�������±ꡣ���ܣ��ж�n��m�Ƿ������鷶Χ�ڣ�������ڣ��򷵻�0������ڷ�Χ�ڣ���n�к�m�н�����������1��
 * ��main�����У� ����һ��5*5�ľ�������������ݣ�������n��m��ֵ������ǰ��ĺ������������ֵΪ0�����error���������ֵΪ1���������n��m����¾���
 *
 * ����
 * 5*5��������ݣ��Լ�n��m��ֵ��
 *
 * ���
 * ������ɽ����������error��
 * ����ɽ�����������¾���
 *
 * NOTE
 * Wrong Answer if use "^" to swap two values, not sure why
 * void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define DIM 5

/* Wrong Answer if use "^" to swap two values as following,
 * not sure why
void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
*/

int exchange(int a[][DIM], int n, int m) {
	if (n < 0 || n >= DIM ||
			m < 0 || m >= DIM)
		return 0;
	for (int j = 0; j < DIM; j++) {
//		swap(a[n][j], a[m][j]);
		int tmp = a[n][j];
		a[n][j] = a[m][j];
		a[m][j] = tmp;
	}
	return 1;
}

int main()
{
	int a[DIM][DIM] = {};
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			cin >> a[i][j];
		}
	}
	int n, m;
	cin >> n >> m;

	if (exchange(a, n, m) > 0) {
		for (int i = 0; i < DIM; i++) {
				for (int j = 0; j < DIM; j++) {
					cout << setw(4) << a[i][j];
				}
				cout << endl;
		}
	} else
		cout << "error" << endl;

	return 0;
}


