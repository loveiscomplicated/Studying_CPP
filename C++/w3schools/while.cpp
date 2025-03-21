#include <iostream>
using namespace std;

int main(){
  int a = 0;
  while (a < 10) {
    cout << a << endl;
    a++;
  } // 이건 마지막에 ; 안 붙음

  int i = 0;
  do { // 조건 따지기 전에 한 번은 실행
    cout << i << endl;
  } while (i < 0); // 마지막에 ; 붙음
  
  return 0;
}