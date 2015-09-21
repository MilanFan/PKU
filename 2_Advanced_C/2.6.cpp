/*
 * 2.6.cpp
 *
 * ����
 * ��һ���׸���Ⱥס������״���������ڣ�������Ϊn*n�ľ���ÿ�����Ϊһ�����䣬���������ס�ˣ�Ҳ���ܿ��š�
 * �ڵ�һ�죬��Щ��������˵������У��Ժ�ÿ�죬�����е��˻�ʹ���ھӴ�Ⱦ�����У����Ѿ��ò��Ĳ��䣩���շ��䲻�ᴫȾ���������m������е�������
 *
 * ����
 * ��һ��һ������n��n������100����ʾ��n*n�����᷿�䡣
 * ��������n�У�ÿ��n���ַ�����.����ʾ��һ��÷���ס�Ž������ˣ���#����ʾ�÷�����ţ���@����ʾ��һ��÷���ס�ŵ����е��ˡ�
 * ��������һ����һ������m��m������100.
 *
 * ���
 * �����m�죬�����е�����
 *
 *  Created on: Aug 10, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

int count(char r[][MAX_N], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] == '@') {
				res++;
			}
		}
	}
	return res;
}

void checkRoom(char &a, int i, int j, int n)
{
	if (i < 0 || i >= n || j < 0 || j >= n) return;
	if (a == '.') a = '-';
}

void infection(char r[][MAX_N], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] == '@') {
				checkRoom(r[i - 1][j], i - 1, j, n);
				checkRoom(r[i + 1][j], i + 1, j, n);
				checkRoom(r[i][j - 1], i, j - 1, n);
				checkRoom(r[i][j + 1], i, j + 1, n);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] == '-') {
				r[i][j] = '@';
			}
		}
	}
}

void output(char r[][MAX_N], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << r[i][j];
		}
		cout << endl;
	}
}

int main()
{
	char r[MAX_N][MAX_N] = {};
	int n, m;
	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
			cin.getline(r[i], n + 1);
	}
	cin >> m;

	int res = 0;
	for (int day = 1; day <= m; day++) {
		res = count(r, n);
		infection(r, n);
//		cout << endl << "Day " << day << ": " << res << endl;
//		output(r, n);
	}

	cout << res << endl;

	return 0;
}


