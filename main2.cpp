#include <iostream>
using namespace std;

#define MAX 52
int A[MAX] = { 0, };
int SplitCard[52];




int main()
{
    srand((unsigned int)time(0));

    //Initialize

    for (int i = 0; i < MAX; ++i)
    {
        A[i] = i;
    }

    //shuffle

    for (int i = 0; i < MAX * 2; ++i)
    {
        int FirstNumber = rand() % MAX;  
        int SecondNumber = rand() % MAX; 

        //Swap
        int Temp = A[FirstNumber];
        A[FirstNumber] = A[SecondNumber];
        A[SecondNumber] = Temp;
    }
 

    //Draw
    int Playercard[3] = { 0, };
    int Dealercard[3] = { 0, };
    
    for (int i = 0; i < 3; ++i)
    {
        Playercard[i] = A[i * 2];
        Dealercard[i] = A[(i * 2) + 1];
    }



    // reslut

    // 
    int PCardsum = 0;
    int DCardsum = 0;
        
    for (int i = 0; i < 3; ++i)
    {
        PCardsum += Playercard[i] > 10 ? 10 : Playercard[i];
        DCardsum += (Dealercard[i] > 10) ? 10 : Dealercard[i];
    }

    cout << "Playercard : " << PCardsum << endl;
    cout << "Dealercard : " << DCardsum << endl;

    // 플레이어 승리 조건
    // 딜러카드 합이 21을 초과할경우
    // 둘다 21 이하일때는 카드합이 플레이어가 같거나 높을경우
    if (DCardsum > 21)
    {
        cout << "Player Win" << endl;
    }
    else if (DCardsum <= 21 && PCardsum <= 21)
    {
        if (PCardsum >= DCardsum)
        {
            cout << "Player Win" << endl;
        }
        else
        {
            cout << "AI Win" << endl;
        }
    }
    else
    {
        cout << "AI Win" << endl;
    }
    




    return 0;
}