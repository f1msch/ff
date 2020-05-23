#include <vector>
using namespace std;

void bubblesort(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i; j < a.size(); j++)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}