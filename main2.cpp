#include<iostream>

using namespace std;
#define Num 10


int main()
{
    int A[Num] = { 0, };
    
    srand((unsigned int)time(0));

    for (int i = 0; i < Num; ++i)
    {
        A[i] = i + 1;
    }

    //shuffle
    for (int i = 0; i < Num * 2; ++i)
    {
        int FirstNumber = rand() % Num;
        int SecondNumber = rand() % Num;

        //Swap
        int Temp = A[FirstNumber];
        A[FirstNumber] = A[SecondNumber];
        A[SecondNumber] = Temp;
    }
    for (int i = 0; i < Num; ++i)
    {
        cout << A[i] << endl;
    }

    return 0;
}





