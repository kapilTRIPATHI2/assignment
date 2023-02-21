#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int m)
{
	if (n == 1)
		return 1;
	else
		return (josephus(n - 1, m) + m - 1) % n + 1;
}

int main()
{
	int n = 14;
	int m = 2;
	cout << "The chosen place is " << josephus(n, m);
	return 0;
}
