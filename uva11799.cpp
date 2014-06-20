// 11799.cpp
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;

	string line;
	for (int i = 1; i <= tc; i++)
	{
		int max = 0; 	// 1 <= number <= 100
		int number;
		int n;

		cin >> n;

		while(n) 
		{
			cin >> number;
			if (number > max)
				max = number;
			n--;
		}
		printf("Case %i: %i\n", i, max);
	}
	return 0;
}