#include <iostream>

using namespace std;

int main(){
    /*
    변수란?
    1. 변수의 자료형
    2. 변수의 이름
    3. 변수가 어디에 저장되는가? (메모리 영역)
        -> 주소값을 알고자 할 때에는 &을 사용하면 됨 !!  cout << &a << endl;
    */


   int a; // 선언 @@ 변수는 사용되기 전에 항상 정의되어야 한다
   a = 7; // 대입

   int b = 7; // 초기화 (선언과 동시에 값을 대입)

   a = 100;
   b = 2;
   
   cout << "a = " << a << " b = " << b << endl;
   /*
   1. 숫자로 시작할 수 없음
   2. 예약어는 사용할 수 없음 
   3. white space는 사용할 수 없음
   */  


    return 0;
}