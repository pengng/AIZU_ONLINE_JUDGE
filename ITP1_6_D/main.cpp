#include<iostream>
using namespace std;

int main() {
	int n, m;
	short A[100][100], B[100];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += A[i][j] * B[j];
		}
		cout << sum << endl;
	}
}