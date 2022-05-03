#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int Array[10] = { 0, };
    for (int i = 0; i < 10; ++i)
    {
        
        int num = rand() % 10 + 1;
        cout << (int)num << endl;
        
    }
    return 0;
}





