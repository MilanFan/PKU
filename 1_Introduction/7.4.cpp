/*
 * 7.4.cpp
 *
 * ����
 * �Ӽ�������һָ������ԪΪ��λ����345����Ȼ�����֧���ý��ĸ��������������������ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ�������ţ�Ҫ����ʹ�ô����ĳ�Ʊ��
 *
 * ����
 * һ��С��1000����������
 *
 * ���
 * ������У�ÿ����ʾһ�����������ϵ��·ֱ��ʾ100Ԫ��50Ԫ��20Ԫ��10Ԫ��5Ԫ��1Ԫ����ҵ�����
 *
 *  Created on: Jul 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	int n;
	unsigned int a[] = {100, 50, 20, 10, 5, 1};
	cin >> n;

	for (unsigned int i = 0; i < sizeof(a) / sizeof(unsigned int); i++) {
		cout << n / a[i] << endl;
		n %= a[i];
	}

	return 0;
}

