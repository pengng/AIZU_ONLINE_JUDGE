#include<iostream>
using namespace std;

int main() {
	int r, c, x, sum, S[100] = {};

	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		sum = 0;
		for (int j = 0; j < c; j++)
		{
			cin >> x;
			cout << x << " ";
			sum += x;
			S[j] += x;
			S[c] += x;
		}
		cout << sum << endl;
	}

	for (int i = 0; i < c; i++)
	{
		cout << S[i] << " ";
	}

	cout << S[c] << endl;
}