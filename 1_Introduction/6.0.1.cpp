/*
 * 6.0.1.cpp
 *
 * ����
 * ��һ��ϸ����ΪA��B�������֣����ǵ���������������ȫ��ͬ�������ڷ�ֳ���������������A���ַ�ֳ�����ǳ�ǿ��B���ֵķ�ֳ����������
 * ��һ��Ϊʱһ�� Сʱ��ϸ����ֳʵ���У�ʵ��Ա���������ϸ������������ˣ������дһ�����򣬸���ʵ���������������ֵ����������·ֳ����顣
 *
 * ����
 * �����ж��У���һ��Ϊ����n��n��100������ʾ��n��������
 * ����n�У�ÿ���������������ֱ�����������ţ�����ǰϸ�������������ϸ��������
 *
 * ���
 * ����ж��У�
 * ��һ�����A��������������������ÿ�����A����������ı�ţ�����ֳ���������С�
 * Ȼ��һ�����B��������������������ÿ�����B����������ı�ţ�Ҳ����ֳ���������С�
 *
 *  Created on: Jul 24, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100

void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

int main()
{
	int n;
	cin >> n;
	if (n < 2 || n > MAX_N) return 0;

	int id[MAX_N];
	double rate[MAX_N];
	for (int i = 0; i < n; i++) {
		int a;
		double b, c;
		cin >> a >> b >> c;
		id[i] = a;
		rate[i] = c / b;
	}

	// sort all
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (rate[i] > rate[j]) {
				swap(id[i], id[j]);
				double tmp = rate[i];
				rate[i] = rate[j];
				rate[j] = tmp;
			}
		}
	}

	// find the biggest diff
	double diff = rate[1] - rate[0];
	int idx = 1;
	for (int i = 1; i < n - 1; i++) {
		if (rate[i + 1] - rate[i] > diff) {
			idx = i + 1;
			diff = rate[i + 1] - rate[i];
		}
	}

	// output
	cout << n - idx << endl;
	for (int i = idx; i < n; i++){
		cout << id[i] << endl;
	}
	cout << idx << endl;
	for (int i = 0; i < idx; i++) {
		cout << id[i] << endl;
	}

	return 0;
}

