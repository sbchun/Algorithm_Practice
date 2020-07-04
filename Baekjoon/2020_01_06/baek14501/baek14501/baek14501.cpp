// baek14501.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int func(int* time, int* pay, int date);
int max(int a = -1,int b = -1, int c = -1, int d = -1, int  e = -1) {

    int abcde[5] = { a,b,c,d,e };
  
    int maxium = a;
    for (int i = 1; i < 5; i++) {
        
        if (maxium < abcde[i]) {
            maxium = abcde[i];
        }

    }
    return maxium;

}


int main()
{

    int Time[15+1];
    int Pay[15 + 1];
    int calendar_size;
    cin >> calendar_size;
   // Calendar = new int[calendar_size];
    for (int i = 1; i < calendar_size + 1; i++) {
        
        int time, pay;
        cin >> time >> pay;;
          
        Time[i] = time;
        Pay[i] = pay;
    } 

    cout << func(Time, Pay, calendar_size);
    



}

int func(int* time, int* pay, int date) {

    int* d = new int[5];

  /*  if (date < 1) {
        return -1;
    }
    if (date == 0 ||date == 1 || date == 2)
        return 0;
    if (date == 3)
        return 1;
    if (date == 4 || date == 5)
        return 30;*/

      if (date < 1) {
              return -1;
          }
     if (date == 1 )
              return 1;
     if (date == 2)
         return 3;
    if (date == 3)
              return 6;
    if (date == 4)
        return 10;
    if (date == 5)
        return 15;

    for (int i = 1; i < 6; i++) {

        if ((date - i) > 0)
            d[i - 1] = func(time, pay, date - i) + pay[date - i];
        else
            d[i - 1] = -1;

    }

    cout << " 리스트" << endl;
    for (int i = 0; i < 5; i++) {
        cout << d[i] << endl;
     

    }


    int result = max(d[0], d[1], d[2], d[3], d[4]);
   /* int d1 = func(time, pay, date - 1) + pay[date - 1];
    int d2 = func(time, pay, date - 2) + pay[date - 2];
    int d3 = func(time, pay, date - 3) + pay[date - 3];
    int d4 = func(time, pay, date - 4) + pay[date - 4];
    int d5 = func(time, pay, date - 5) + pay[date - 5];*/
    
    return result;


}