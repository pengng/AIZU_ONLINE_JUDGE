#include<iostream>
#include<climits>
using namespace std;

int main() {
	int minimum = INT_MAX;
	int maximum = INT_MIN;
	long long sum = 0LL;
	int x, n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sum += x;
		if (x < minimum) minimum = x;
		if (x > maximum) maximum = x;
	}

	cout << minimum << " " << maximum << " " << sum << endl;
}