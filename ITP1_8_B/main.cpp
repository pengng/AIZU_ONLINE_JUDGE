#include<iostream>
#include<cctype>
using namespace std;

int main() {
	char c;

	while ((c = cin.get()) != '0')
	{
		int sum = 0;

		while (isdigit(c))
		{
			sum += c - '0';
			c = cin.get();
		}

		cout << sum << endl;
	}
}