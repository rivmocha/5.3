#include<iostream>

using namespace std;

int main()
{
    int A[10] = { 0, };
    
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 10; ++i)
    {
         A[i] = rand() % 10 + 1;
         for (int j = 0; j < i; ++j)
         {
             while (A[i] == A[j])
             {
                 i--;
                 break;
             }
         }     
    }
    for (int i = 0; i < 10; ++i)
    {
        cout << A[i] << endl;
    }

    return 0;
}





