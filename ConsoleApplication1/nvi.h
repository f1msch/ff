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

class b : public a
{
private:
	//virtual void g()
	//{
	//	cout << "derived" << endl;
	//}
};