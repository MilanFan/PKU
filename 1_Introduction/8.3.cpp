/*
 * 8.3.cpp
 *
 * ����
 * ĳ����Ա��ʼ��������нN����ϣ�����йش幫����һ��60ƽ�׵ķ��ӣ����ڼ۸���200��
 * ���跿�Ӽ۸���ÿ��ٷ�֮K���������Ҹó���Աδ����н���䣬�Ҳ��Բ��ȣ����ý�˰��
 * ÿ������N��ȫ�������������ʵڼ����ܹ��������׷��ӣ���һ�귿��200������N��
 *
 * ����
 * �ж��У�ÿ����������N��10 <= N <= 50��, K��1 <= K <= 20��
 *
 * ���
 * ���ÿ�����ݣ�����ڵ�20�����֮ǰ�����������׷��ӣ������һ������M����ʾ������Ҫ�ڵ�M�������£��������Impossible�������Ҫ����
 *
 * NOTE
 * use ctrl+z to stop input
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_NUM 100

int main()
{
	int N, K;
	int res[MAX_NUM] = {};
	int count = 0;
	while ((cin >> N >> K) && count < MAX_NUM) {
		if (N < 10 || N > 50 || K < 1 || K > 20) continue;
		int yr = 1;
		double price = 200;
		while (N * yr < price) {
			double inc = price * (K / 100.0);
			if (inc >= N) {
				yr = 0;
				break;
			}
			price += inc;
			yr++;
		}
		res[count++] = yr;
	}

	for (int i = 0; i < count; i++) {
		if (res[i] > 0)
			cout << res[i] << endl;
		else
			cout << "Impossible" << endl;
	}

	return 0;
}

