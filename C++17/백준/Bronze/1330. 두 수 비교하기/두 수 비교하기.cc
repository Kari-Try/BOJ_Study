#include <iostream>
using namespace std;



int main() {
	int N, X;
	cin >> N >> X;

	if (N == X)
	{
		cout << "==";
	}
	else if (N > X)
	{
		cout << (">");
	}
	else
	{
		cout << "<";
	}

}