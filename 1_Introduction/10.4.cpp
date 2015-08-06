/*
 * 10.4.cpp
 *
 * 描述
 * 编写一个函数，输入参数是5*5的二维数组，和n，m两个行下标。功能：判断n，m是否在数组范围内，如果不在，则返回0；如果在范围内，则将n行和m行交换，并返回1。
 * 在main函数中， 生成一个5*5的矩阵，输入矩阵数据，并输入n，m的值。调用前面的函数。如果返回值为0，输出error。如果返回值为1，输出交换n，m后的新矩阵。
 *
 * 输入
 * 5*5矩阵的数据，以及n和m的值。
 *
 * 输出
 * 如果不可交换，则输出error；
 * 如果可交换，则输出新矩阵
 *
 * NOTE
 * Wrong Answer if use "^" to swap two values, not sure why
 * void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define DIM 5

/* Wrong Answer if use "^" to swap two values as following,
 * not sure why
void swap(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
*/

int exchange(int a[][DIM], int n, int m) {
	if (n < 0 || n >= DIM ||
			m < 0 || m >= DIM)
		return 0;
	for (int j = 0; j < DIM; j++) {
//		swap(a[n][j], a[m][j]);
		int tmp = a[n][j];
		a[n][j] = a[m][j];
		a[m][j] = tmp;
	}
	return 1;
}

int main()
{
	int a[DIM][DIM] = {};
	for (int i = 0; i < DIM; i++) {
		for (int j = 0; j < DIM; j++) {
			cin >> a[i][j];
		}
	}
	int n, m;
	cin >> n >> m;

	if (exchange(a, n, m) > 0) {
		for (int i = 0; i < DIM; i++) {
				for (int j = 0; j < DIM; j++) {
					cout << setw(4) << a[i][j];
				}
				cout << endl;
		}
	} else
		cout << "error" << endl;

	return 0;
}


