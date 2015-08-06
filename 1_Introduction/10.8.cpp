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

int main()
{
	int l, m;
	cin >> l >> m;
	if (l < 1 || l > MAX_L ||
			m < 1 || m > MAX_M) {
		return 0;
	}

	bool r[MAX_L + 1] = {};
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a; j <= b && b <= l; j++) {
			r[j] = true;
		}
	}

	int count = l + 1;
	for (int i = 0; i <= l; i++) {
		if (r[i]) count--;
	}

	cout << count << endl;

	return 0;
}

