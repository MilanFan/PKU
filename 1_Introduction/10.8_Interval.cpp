/*
 * 10.8.cpp
 *
 * 描述
 * 某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。我们可以把马路看成一个数轴，
 * 马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。
 * 马路上有一些区域要用来建地铁，这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，
 * 区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。
 *
 * 输入
 * 输入的第一行有两个整数L（1 <= L <= 10000）和 M（1 <= M <= 100），L代表马路的长度，M代表区域的数目，
 * L和M之间用一个空格隔开。接下来的M行每行包含两个不同的整数，用一个空格隔开，表示一个区域的起始点和终止点的坐标。
 *
 * 输出
 * 输出包括一行，这一行只包含一个整数，表示马路上剩余的树的数目。
 *
 * NOTE
 * Runtime Error to POJ 2808
 *
 *  Created on: Jul 30, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_L 10000
#define MAX_M 100

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void quickSort(int a[][2], int n, int pivot)
{
	if (n <= 1) return;

	int c = 0;
	for (int i = 0; i < n; i++) {
		if (a[i][0] <= pivot) {
			if (c < i) {
				swap(a[i][0], a[c][0]);
				swap(a[i][1], a[c][1]);
			}
			c++;
		}
	}
	quickSort(a, c, a[1][0]);
	quickSort(a + c, n - c, a[c][0]);
}

int main()
{
	int l, m;
	cin >> l >> m;
	if (l < 1 || l > MAX_L ||
			m < 1 || m > MAX_M) {
		cout << 0 << endl;
		return 0;
	}

	int a[MAX_M][2] = {};
	for (int i = 0; i < m; i++)
		cin >> a[i][0] >> a[i][1];
	quickSort(a, m, a[0][0]);

	int data[MAX_M * 2];
	data[0] = a[0][0];
	data[1] = a[0][1];
	int count = 1;
	for (int i = 1; i < m; i++) {
		if (a[i][0] > data[count*2-1]) {
			data[count*2] = a[i][0];
			data[count*2+1] = a[i][1];
			count++;
		} else if (a[i][1] > data[count*2-1]) {
			data[count*2-1] = a[i][1];
		}
	}

	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += data[i*2+1] - data[i*2] + 1;
	}

	cout << l + 1 - sum << endl;

	return 0;
}


