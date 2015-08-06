/*
 * 12.4.cpp
 *
 * ����
 * һ����򵥵ļ�������֧��+, -, *, / �������㡣���迼���������Ϊ��������������ݺ����������ᳬ��int��ʾ�ķ�Χ��
 *
 * ����
 * ����ֻ��һ�У������������������е�1��2������Ϊ��������3������Ϊ��������+,-,*,/����
 *
 * ���
 * ���ֻ��һ�У�һ��������Ϊ��������Ȼ����
 * 1. ������ֳ���Ϊ0��������������Divided by zero!
 * 2. ���������Ч�Ĳ�����(����Ϊ +, -, *, / ֮һ�����������Invalid operator!
 *
 *  Created on: Aug 3, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char ch;
	cin >> a >> b >> ch;

	switch (ch) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b == 0)
			cout << "Divided by zero!" << endl;
		else
			cout << a / b << endl;
		break;
	default:
		cout << "Invalid operator!" << endl;
	}

	return 0;
}


