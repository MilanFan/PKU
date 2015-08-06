/*
 * 12.5.cpp
 *
 * 描述
 * 有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。
 * （字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
 *
 * 输入
 * 输入包括若干行，每一行为一组测试数据，格式为
 * str substr
 *
 * 输出
 * 对于每一组测试数据，输出插入之后的字符串。
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	char str[15];
	char substr[4];

	while (cin >> str >> substr) {
		int imax = 0;
		char cmax = str[0];
		int len = 1;
		while (str[len]) {
			if (str[len] > cmax) {
				cmax = str[len];
				imax = len;
			}
			len++;
		}
		for (int i = len; i > imax; i--) {
			str[i+3] = str[i];
		}
		for (int i = 1; i <= 3; i++) {
			str[imax + i] = substr[i - 1];
		}

		cout << str << endl;
	}

	return 0;
}


