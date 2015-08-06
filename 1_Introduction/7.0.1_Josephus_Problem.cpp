/*
 * 7.0.1.cpp
 *
 * 描述
 * 约瑟夫问题：有ｎ只猴子，按顺时针方向围成一圈选大王（编号从１到ｎ），从第１号开始报数，一直数到ｍ，数到ｍ的猴子退出圈外，
 * 剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王，编程求输入ｎ，ｍ后，输出最后猴王的编号。
 *
 * 输入
 * 每行是用空格分开的两个整数，第一个是 n, 第二个是 m ( 0 < m,n <=300)。最后一行是：
 * 0 0
 *
 * 输出
 * 对于每行输入数据（最后一行除外)，输出数据也是一行，即最后猴王的编号
 *
 * SOLUTION
 * assume k is the one quit at first round for f(n), then k = (m - 1) % n + 1
 * Seq1(n values)  : 1  , 2  , 3  , ..., k-1  , k, k+1, ..., n-1, n; then after k quit
 * Seq2(n-1 values): 1  , 2  , 3  , ..., k-1  ,    k+1, ..., n-1, n; rearrange the circle starting from k+1
 * Seq3(n-1 values): k+1, k+2, ..., n-1, n, 1, 2, 3, ...,  k-2, k-1; it equals a f(n-1) Josephus Problem, where the sequence is
 * Seq4(n-1 values): 1, 2, 3, ..., n-k-1, n-k, ...,        n-2, n-1;
 * assume x(in Seq4) is the solution of f(n-1), then its corresponding index in Seq3 is x'=x+k (or (x+k)%n)
 * which would be exactly the same solution of f(n), so we have
 * x'=(x+k) % n = (x+(m-1)%n+1)%n = (x+m-1)%n+1
 *
 * i.e.
 * f(1) = 1;
 * f(i) = (f(i-1) + m - 1) % i + 1.
 *
 *  Created on: Jul 27, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

#define MAX_NUM 300
#define MAX_COUNT 100

int main()
{
	int count = 0;
	int res[MAX_COUNT];

	while (count < MAX_COUNT) {
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		if (n <= 0 || m <= 0 || n > MAX_NUM || m > MAX_NUM)
			res[count] = 0;
		int s = 1;
		for (int i = 2; i <= n; i++) {
			s = (s + m - 1) % i + 1;
		}
		res[count] = s;
		count++;
	}

	for (int i = 0; i < count; i++)
		cout << res[i] << endl;

	return 0;
}




