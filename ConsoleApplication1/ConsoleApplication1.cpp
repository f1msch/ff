// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "nvi.h"
#include <vector>
#include <algorithm>
#include <math.h>

//格式化 ctrl+A ctrl+K+F
//选择排序
void selection_sort(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i; j < a.size(); j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "selection_sort" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
}
//选择排序优化
void selection_sort_2(vector<int> a)
{
	for (int i = 0; i < a.size() - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	cout << "selection_sort_2" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
}

//梳子排序
void comb_sort(vector<int> a)
{
	int i = 0;
	int j = a.size();
	int n = a.size();
	//步长
	int s = max(static_cast<int>(floor(j / 1.3)), 1);
	cout << "s is " << s << endl;
	bool flag = false;

	while (j > 1 || true == flag)
	{
		i = 0;
		j = max(static_cast<int>(floor(j / 1.3)), 1);
		flag = false;
		while (i + j < n)
		{
			if (a[i] > a[i + j])
			{
				swap(a[i], a[i + j]);
				flag = true;
			}
			i++;
		}
	}
	cout << "comb_sort" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
}

int main()
{
	/*a *pa1 = new b;
	pa1->f();*/

	vector<int> v = { 2,5,3,7,98,2,3,6,6 };
	//selection_sort(v);
	//selection_sort_2(v);
	comb_sort(v);

	std::cout << "Hello World!\n";
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
