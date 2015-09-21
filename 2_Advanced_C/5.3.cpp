/*
 * 5.3.cpp
 *
 * ����
 * ��һ��Ӣ�Ķ��ģ�����֮���Կո�ָ���ÿ�����ʰ�����ǰ����ڵı����ţ����뽫���������Ű棬Ҫ�����£�
 * ÿ�в�����80���ַ���ÿ�����ʾ���ͬһ���ϣ���ͬһ�еĵ���֮����һ���ո�ָ������׺���β��û�пո�
 *
 * ����
 * ��һ����һ������n����ʾӢ�Ķ����е��ʵ���Ŀ. �����n���Կո�ָ���Ӣ�ĵ��ʣ����ʰ�����ǰ����ڵı����ţ���ÿ�����ʳ��ȶ�������40����ĸ����
 *
 * ���
 * �Ű��Ķ����ı���ÿ���ı��ַ������80���ַ�������֮����һ���ո�ָ���ÿ���ı���β��û�пո�
 *
 *  Created on: Aug 28, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_W 40
#define MAX_L 80

int length(char s[])
{
	for (int i = 0; i < MAX_W; i++) {
		if (!s[i]) return i;
	}

	return MAX_W;
}

void output(char (*s)[MAX_W], int count)
{
	for (int i = 0; i < count; i++) {
		if (i > 0)
			cout << " ";
		cout << s[i];
	}
	cout << endl;
}

int main()
{
	char s[MAX_N][MAX_W] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];

	int sum = 0;
	int count = 0;
	int start = 0;
	for (int i = 0; i < n; i++) {
		int len = length(s[i]);
		if (sum + len > MAX_L) {
			output(s + start, count);
			sum = len + 1;
			start = i;
			count = 1;
		} else {
			sum += len + 1;
			count++;
		}
	}
	output(s + start, count);

	return 0;
}


