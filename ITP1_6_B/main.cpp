#include<iostream>
using namespace std;

int main() {
	int x, n;
	char c;
	bool A[4][14] = {};
	char C[] = { 'S', 'H', 'C', 'D' };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c >> x;
		int j = 0;
		while (C[j] != c) j++;

		A[j][x] = true;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= 13; j++)
		{
			if (!A[i][j]) {
				cout << C[i] << " " << j << endl;
			}
		}
	}
}