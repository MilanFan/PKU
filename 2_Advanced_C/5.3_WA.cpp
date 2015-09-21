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

#define MAX_N 10000
#define MAX_L 80

void output(char s[], int len) {
	for (int i = 0 ; i < len; i++)
		cout << s[i];
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	cin.get();
	char str[MAX_N];
	cin.getline(str, MAX_N);

	int i = -1;
	int j = -1;
	int idx = 0;
	int t = 0;
	while (str[idx]) {
		if (idx - i > MAX_L && i != -1) {
			output(str + i, j - i + 1);
			idx = j + 1;
			i = j = -1;
		}
		if (str[idx] != ' ') {
			if (i == -1) {
				i = idx;
			}
			t = idx;
		} else if (i != -1){
			j = t;
		}
		idx++;
	}
	j = t;
	if (i > 0 && j > 0)
		output(str + i, j - i + 1);

	return 0;
}


