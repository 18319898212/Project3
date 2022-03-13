
#include<iostream>
using namespace std;
int main()
{
	int n, i, sum = 0, number = 0, zhengshu = 0;
	double ave;
	cin >> n;
	int* p = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> p[i];
		if (p[i] < 0)
			number++;
		else if (p[i] > 0)
		{
			zhengshu++;
			sum += p[i];
		}
		else
			continue;
	}
	ave = double(sum) / double(zhengshu);
	cout << "ave=" << ave << " number=" << number << endl;
	delete[]p;
	return 0;
}


