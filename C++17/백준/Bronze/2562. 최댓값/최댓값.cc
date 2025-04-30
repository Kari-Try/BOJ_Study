#include <iostream>
using namespace std;



int main() {
	int NUMS[9];
	int max = -1;
	int index;
	for (int i = 0;i < 9;i++)
	{
		cin >> NUMS[i];
		if (NUMS[i] > max) 
		{
			max = NUMS[i];
			index = i + 1;
		}
	}

	cout << max << "\n" << index;
}