/*
 * 10.8.cpp
 *
 * ����
 * ĳУ�����ⳤ��ΪL����·����һ������ÿ�������ڵ���֮��ļ������1�ס����ǿ��԰���·����һ�����ᣬ
 * ��·��һ��������0��λ�ã���һ����L��λ�ã������ϵ�ÿ�������㣬��0��1��2��������L��������һ������
 * ��·����һЩ����Ҫ��������������Щ�����������������ϵ���ʼ�����ֹ���ʾ����֪��һ�������ʼ�����ֹ������궼��������
 * ����֮��������غϵĲ��֡�����Ҫ����Щ�����е�������������˵㴦�������������ߡ���������Ǽ��㽫��Щ�������ߺ���·�ϻ��ж��ٿ�����
 *
 * ����
 * ����ĵ�һ������������L��1 <= L <= 10000���� M��1 <= M <= 100����L������·�ĳ��ȣ�M�����������Ŀ��
 * L��M֮����һ���ո��������������M��ÿ�а���������ͬ����������һ���ո��������ʾһ���������ʼ�����ֹ������ꡣ
 *
 * ���
 * �������һ�У���һ��ֻ����һ����������ʾ��·��ʣ���������Ŀ��
 *
 * NOTE
 * Runtime Error to POJ 2808
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_L 10000
#define MAX_M 100

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void quickSort(int a[][2], int n, int pivot)
{
	if (n <= 1) return;

	int c = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][0] <= pivot) {
			if (c < i) {
				swap(a[i][0], a[c][0]);
				swap(a[i][1], a[c][1]);
			}
			c++;
		}
	}
	quickSort(a, c, a[1][0]);
	quickSort(a + c, n - c, a[c][0]);
}

int main()
{
	int l, m;
	cin >> l >> m;
	if (l < 1 || l > MAX_L ||
			m < 1 || m > MAX_M) {
		cout << 0 << endl;
		return 0;
	}

	int a[MAX_M][2] = {};
	for (int i = 0; i < m; i++)
		cin >> a[i][0] >> a[i][1];
	quickSort(a, m, a[0][0]);

	int data[MAX_M * 2];
	data[0] = a[0][0];
	data[1] = a[0][1];
	int count = 1;
	for (int i = 1; i < m; i++) {
		if (a[i][0] > data[count*2-1]) {
			data[count*2] = a[i][0];
			data[count*2+1] = a[i][1];
			count++;
		} else if (a[i][1] > data[count*2-1]) {
			data[count*2-1] = a[i][1];
		}
	}

	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += data[i*2+1] - data[i*2] + 1;
	}

	cout << l + 1 - sum << endl;

	return 0;
}


