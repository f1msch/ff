#pragma once
#include <iostream>
using namespace std;
class a
{
public:
	void f()
	{
		g();
	}
private:
	virtual void g()
	{
		cout << "base" << endl;
	}
};

//private再编译器确定，virtual再运行期确定，互相不影响
class b : public a
{
private:
	//virtual void g()
	//{
	//	cout << "derived" << endl;
	//}
};