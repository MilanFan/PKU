/*
 * 12.3.cpp
 *
 * ����
 * ����һ���(x,y)���������Զ��������֮��ľ��롣
 *
 * ����
 * ��һ���ǵ���n��n���ڵ���2��
 * ����ÿһ�д���һ���㣬������������x y��ɡ�
 *
 * ���
 * ���һ������Զ����֮��ľ��롣
 * ʹ��printf("%.4f\n", dis)�������ֵ����ȷ��С�����4λ��
 *
 * ��ʾ
 * ע�����ڲ�����ʱ���ʹ��double���ͣ�������scanf��ȡ����ʱֻ����float���͵ı�����
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define MAX_N 100

int main()
{
	int n;
	cin >> n;
	if (n < 2) return 0;

	double p[MAX_N][2];
	for (int i = 0; i < n; i++)
		cin >> p[i][0] >> p[i][1];

	double dmax = 0.0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				double d = sqrt(pow(p[i][0]-p[j][0], 2.0) + pow(p[i][1]-p[j][1], 2.0));
				if (dmax < d) dmax = d;
			}
		}
	}

	cout << fixed << setprecision(4) << dmax << endl;

	return 0;
}


