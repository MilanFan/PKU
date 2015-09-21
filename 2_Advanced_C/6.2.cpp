/*
 * 6.2.cpp
 *
 * 描述
 * 脱氧核糖核酸（DNA）由两条互补的碱基链以双螺旋的方式结合而成。而构成DNA的碱基共有4种，分别为腺瞟呤（A）、鸟嘌呤（G）、胸腺嘧啶（T）和胞嘧啶（C）。
 * 我们知道，在两条互补碱基链的对应位置上，腺瞟呤总是和胸腺嘧啶配对，鸟嘌呤总是和胞嘧啶配对。你的任务就是根据一条单链上的碱基序列，给出对应的互补链上的碱基序列。
 *
 * 输入
 * 第一行是一个正整数n，表明共有n条要求解的碱基链。
 * 以下共有n行，每行用一个字符串表示一条碱基链。这个字符串只含有大写字母A、T、G、C，分别表示腺瞟呤、胸腺嘧啶、鸟嘌呤和胞嘧啶。每条碱基链的长度都不超过255。
 *
 * 输出
 * 共有n行，每行为一个只含有大写字母A、T、G、C的字符串。分别为与输入的各碱基链互补的碱基链。
 *
 *  Created on: Sep 2, 2015
 *      Author: Milan Fan
 */


#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_L 255 + 1

int main()
{
	char str[MAX_N][MAX_L] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < n; i++) {
		int idx = 0;
		while (str[i][idx]) {
			switch (str[i][idx]) {
			case 'A':
				str[i][idx] = 'T';
				break;
			case 'T':
				str[i][idx] = 'A';
				break;
			case 'G':
				str[i][idx] = 'C';
				break;
			case 'C':
				str[i][idx] = 'G';
				break;
			default:
				str[i][idx] = '*';
				break;
			}
			idx++;
		}
		cout << str[i] << endl;
	}

	return 0;
}


