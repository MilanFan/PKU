/*
 * 5.5.cpp
 *
 * ����
 * ��һ�������е�ֵ���������´�š����磬ԭ����˳��Ϊ8,6,5,4,1��Ҫ���Ϊ1,4,5,6,8��
 *
 * ����
 * ����Ϊ���У���һ��������Ԫ�صĸ���n��1<n<100)���ڶ�����n��������ÿ��������֮���ÿո�ָ���
 *
 * ���
 * ���Ϊһ�У��������������������ÿ��������֮���ÿո�ָ���
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 100

int main()
{
	int N;
	cin >> N;
	if (N < 1 || N >= MAX_N) return 0;

	int a[MAX_N];
	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = N-1; i>= 0 ; i--)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}


