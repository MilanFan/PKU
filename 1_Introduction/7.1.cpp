/*
 * 7.1.cpp
 *
 * ����
 * ĳҽԺ��ͳ��һ��ĳ����Ļ������������Ƿ��йأ���Ҫ����ǰ����ϼ�¼��������
 *
 * ����
 * ��2�У���һ��Ϊ�������˵���Ŀn��0 < n <= 100)���ڶ���Ϊÿ�����˻���ʱ�����䡣
 *
 * ���
 * ÿ������Σ����ĶΣ�18���£�19-35��36-60��60-ע�⿴��������ĸ�ʽ���Ļ�������ռ�ܻ��������ı������԰ٷֱȵ���ʽ�������ȷ��С�������λ��double����
 *
 *  Created on: Jul 28, 2015
 *      Author: Milan Fan
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_N 100

int main()
{
	int n;
	int a[MAX_N];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count[4] = {};
	for (int i = 0; i < n; i++) {
		if (a[i] <= 18)
			count[0]++;
		else if (a[i] <= 35)
			count[1]++;
		else if (a[i] <= 60)
			count[2]++;
		else
			count[3]++;
	}
	int sum = count[0] + count[1] + count[2] + count[3];

	cout << "1-18: " << setiosflags(ios::fixed) << setprecision(2) << count[0] * 100.0 / sum << '%' << endl;
	cout << "19-35: " << count[1] * 100.0 / sum << '%' << endl;
	cout << "36-60: " << count[2] * 100.0 / sum << '%' << endl;
	cout << "60-: " << count[3] * 100.0 / sum << '%' << endl;

	return 0;
}


