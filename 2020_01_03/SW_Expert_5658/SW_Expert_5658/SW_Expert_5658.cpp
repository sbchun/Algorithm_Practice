// SW_Expert_5658.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<string>
#include<vector>
#include  <algorithm>
using namespace std;
int main()
{

    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++) {

        int answer = 0;
        int N;
        int K;
        cin >> N;
        cin >> K;

        string input;
        cin >> input  ;
        const int arr_size = N / 4;
        //int** arr = new int*[arr_size+1];
        int** arr = new int* [arr_size + 1];
        vector<int>vec;
        for (int i = 0; i < arr_size; i++) {
            arr[i] = new int[5];
        }
        
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < arr_size + 1; j++) {
                arr[j-1][i] = input.at(j + i * arr_size - 1)<'9'+3 ? input.at(j + i * arr_size - 1) -'0': input.at(j + i * arr_size - 1) - 'A'+10;
            }
       }
        for (int i = 0; i < 4; i++) {


            for(int i = 0 ; i)

            vec.push_back(arr[);

        }
        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < arr_size; j++) {
                cout << arr[j][i];
            }
        }


        cout << "#"<<i << " " << answer << endl;
    }


}
