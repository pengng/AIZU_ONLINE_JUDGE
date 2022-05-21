#include<iostream>
using namespace std;

int main() {
	int n, m, l;
	short A[100][100], B[100][100];

	cin >> n >> m >> l;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			long long sum = 0LL;
			for (int k = 0; k < m; k++)
			{
				sum += A[i][k] * B[k][j];
			}
			if (j > 0) cout << " ";
			cout << sum;
		}
		cout << endl;
	}
}