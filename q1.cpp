#include<iostream>
using namespace std;
int main()
{
	int startNumber, endNumber, starting, ending;
	cout << "Enter the starting integer";
	cin >> startNumber;
	cout << "Enter the ending integer";
	cin >> endNumber;
	starting = startNumber;
	ending = endNumber;
	while (starting <= ending)
	{
		for (int i = startNumber; i <= endNumber; i++)
		{
			cout << "(" << startNumber << "," << "" << i << ")";
		}
		starting++;
		ending--;
		startNumber++;
		endNumber--;
		cout << endl;
	}
	return 0;
}