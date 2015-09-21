/*
 * 6.1.cpp
 *
 * ����
 * ĳ�����ҵĲ�����Ϊ��֢����ͨ��ֻ�е����˵ļ������س̶ȳ�������ס��֢�������������ֵ���ſ��԰�����ס��֢������
 * ����Ҫ�����һ�����򣬸����˰��źò��������������س̶���0��10����ʾ��0��ʾСë����10��ʾ�ǳ����ء�
 *
 * ����
 * ��һ�����벡�˵ĸ���m(m < 50)���Լ�����ס����֢�������������ֵa
 * ������m�У�ÿ�б�ʾ���˱�ţ�����λ����0���룩���伲�������س̶ȣ���������1λС������
 * ÿ�����˵ļ������س̶ȶ���һ����
 *
 * ���
 * Ҫ���ղ��˵����س̶����ס����֢������Ĳ��˵ı��
 *
 * ע�⣺
 * �����ǰ���в��˵����س̶Ȳ�������ס����֢������������None.�������������ţ�
 *
 *  Created on: Sep 2, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_N 50

struct Patient {
	int id;
	double val;
	Patient(): id(0), val(-1.0) {}
};

void sort(Patient a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].val < a[j].val) {
				Patient t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int main()
{
	Patient a[MAX_N] = {};
	int n;
	double l;
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].val;
	}

	sort(a, n);

	if (a[0].val < l) {
		cout << "None." << endl;
	} else {
		for (int i = 0; i < n && a[i].val >= l; i++) {
			cout << setfill('0') << setw(3) << a[i].id << " ";
			cout << fixed << setprecision(1) << a[i].val << endl;
		}
	}

	return 0;
}

