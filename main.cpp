#include <iostream>
using namespace std;

int main()
{
	int Count = 0;
	cin >> Count;
		
	for (int i = 1; i <= 9; ++i)
	{
		cout << Count << 'x' << i << '=' << Count * i << endl;
		
	}




	return 0;
}