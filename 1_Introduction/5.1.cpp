/*
 * 5.1.cpp
 *
 * ���������ѱ���Լ��������һ��ȥ��չ����������ÿ�ܵ�1��3��5�пα����ϿΣ���ﾧ���ж����ܷ���ܱ��������룬��������YES��������������NO��
 *
 * ����
 * ������һ�У��������뾧��ȥ��չ�������ڣ�������1��7��ʾ������һ�������ա�
 *
 * ���
 * �����һ�У�����������Խ��ܱ��������룬���YES���������NO��ע��YES��NO���Ǵ�д��ĸ��
 *
 *  Created on: Jul 23, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	int date;
	cin >> date;

	if (date < 1 || date > 7 ||
			(date % 2 != 0 && date != 7))
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}


