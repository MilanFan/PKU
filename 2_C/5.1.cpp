/*
 * 5.1.cpp
 *
 * ����
 * ����һ���������󣬼���λ�ھ����Ե��Ԫ��֮�͡���ν�����Ե��Ԫ�أ����ǵ�һ�к����һ�е�Ԫ���Լ���һ�к����һ�е�Ԫ�ء�
 *
 * ����
 * ��һ��Ϊ����k����ʾ��k�����ݡ�
 * ÿ�������ж�����ɣ���ʾһ������
 * ��һ�зֱ�Ϊ���������m������n��m < 100��n < 100��������֮���Կո�ָ���
 * �����������m�������У�ÿ�а���n������������֮���Կո���Ϊ�����
 *
 * ���
 * �����Ӧ����ı�ԵԪ�غͣ�һ��һ�С�
 *
 *  Created on: Aug 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_K 100

int main()
{
	int k;
	int res[MAX_K] = {};
	cin >> k;

	for (int i = 0; i < k; i++) {
		int m, n;
		cin >> m >> n;

		int sum = 0;
		for (int l = 0; l < m; l++) {
			for (int j = 0; j < n; j++) {
				int a;
				cin >> a;
				if (l == 0 || j == 0 || l == m - 1 || j == n - 1)
					sum += a;
			}
		}
		res[i] = sum;
	}

	for (int i = 0; i < k; i++)
		cout << res[i] << endl;

	return 0;
}


