// Baek2294.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

const int  int_maximum = 33333333;;


int main()
{
  
    int target = 0;
    int coin_count = 0;
    cin >> coin_count >> target;

    int* coins = new int[coin_count];

    for (int i = 0; i < coin_count; i++) {
        cin >> coins[i];
    }
    /*int** chart = new int* [target];
    for (int i = 0; i < target; i++) {
        chart[i] = new int[coin_count];
    
    }*/

    int* chart = new int[target+1];

    for (int i = 1; i < target + 1; i++) {
        chart[i] = int_maximum;
    }
    chart[0] = 0;

    for (int i = 0; i < coin_count; i++) {


        for (int j = coins[i]; j < target+1; j++) {

            chart[j] = (chart[j] < chart[j - coins[i]] + 1) ? chart[j] : (chart[j - coins[i]] + 1);

        }

    }
    if (chart[target] == int_maximum) {
        cout << -1 << endl;
    }
    else {
        cout << chart[target] << endl;

    }


    //for (int i = 0; i < target + 1; i++) {
    //    cout << chart[i] << endl;
    //}


    return 0;
}
