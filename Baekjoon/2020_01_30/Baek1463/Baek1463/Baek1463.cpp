// Baek1463.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int min(int x, int y, int z = 1000000) {

    int result = x;
    if (result > y) {
        result = y;
    }
    if (result > z) {
        result = z;
    }
    return result;
}

int recursive(int &input , int* arr) {
  
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;

    for (int i = 4; i < input +1; i++) {
    

        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0) {
            
            if (arr[i] > arr[i / 3]+1) {
                arr[i] = arr[i / 3] + 1;
            }
        }
        if (i % 2 == 0) {
            if (arr[i] > arr[i / 2] + 1) {

                arr[i] = arr[i / 2] + 1;
            }
        }
       /// arr[i] = min(arr[i - 1], arr[i - 2], arr[i - 3]) + 1;

    }
    return arr[input];

}

int main()
{
    int input1;
    int* arr;
    int count = 0;
    scanf("%d", &input1);
    arr = new int[input1];
    printf("%d",recursive(input1,arr));


}
