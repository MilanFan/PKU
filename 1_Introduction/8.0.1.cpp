/*
 * 8.0.1.cpp
 *
 * 描述
 * 4名专家对4款赛车进行评论
 * 1）A说：2号赛车是最好的；
 * 2）B说：4号赛车是最好的；
 * 3）C说：3号赛车不是最好的；
 * 4）D说： B说错了。
 * 事实上只有1款赛车最佳，且只有1名专家说对了，其他3人都说错了。
 * 请编程输出最佳车的车号，以及说对的专家。
 *
 * 输入
 * 无输入。
 *
 * 输出
 * 输出两行。第一行输出最佳车的车号（1-4中的某个数字）。第二行输出说对的专家（A-D中的某个字母）。
 *
 *  Created on: Jul 29, 2015
 *      Author: Milan Fan
 */

#include <iostream>
using namespace std;

int main()
{
	for (int best = 1; best <= 4; best++) {
		bool a = (best == 2);
		bool b = (best == 4);
		bool c = (best != 3);
		bool d = !b;

		if (a + b + c + d != 1) continue;
		cout << best << endl;
		cout << (char)(a*0+b*1+c*2+d*3 + 'A') << endl;
	}

	return 0;
}




