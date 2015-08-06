/*
 * 7.1.cpp
 *
 * 描述
 * 某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。
 *
 * 输入
 * 共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
 *
 * 输出
 * 每个年龄段（分四段：18以下，19-35，36-60，60-注意看样例输出的格式）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。
 *
 *  Created on: Jul 28, 2015
 *      Author: Milan Fan
 */

#include <iostream>
#include <iomanip>
using namespace std;

#define MAX_N 100

int main()
{
	int n;
	int a[MAX_N];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count[4] = {};
	for (int i = 0; i < n; i++) {
		if (a[i] <= 18)
			count[0]++;
		else if (a[i] <= 35)
			count[1]++;
		else if (a[i] <= 60)
			count[2]++;
		else
			count[3]++;
	}
	int sum = count[0] + count[1] + count[2] + count[3];

	cout << "1-18: " << setiosflags(ios::fixed) << setprecision(2) << count[0] * 100.0 / sum << '%' << endl;
	cout << "19-35: " << count[1] * 100.0 / sum << '%' << endl;
	cout << "36-60: " << count[2] * 100.0 / sum << '%' << endl;
	cout << "60-: " << count[3] * 100.0 / sum << '%' << endl;

	return 0;
}


