#include<iostream>
#include<cctype>
using namespace std;

int main() {
	char c;
	
	while (cin.get(c))
	{
		if (isupper(c)) cout << (char)tolower(c);
		else if (islower(c)) cout << (char)toupper(c);
		else cout << c;
	}
}