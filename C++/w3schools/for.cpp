#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "기본 사용법" << endl;
  for (int i = 0; i < 10; i++) { // 사실 이러면 while이랑 다를 게 없음
    cout << i << ' ';
  }


  cout << '\n' << '\n' << "array와 함께 사용하는 방법 1" << endl;

  int arr1[3] = {100, 200, 300};

  for (int idx = 0; idx < 3; idx++) {
    cout << arr1[idx] << ' ';
  }

  cout << '\n' << '\n' << "foreach loop - array와 함께 사용하는 방법 2" << endl;
  
  string arr2[3] = {"apple", "orange", "melon"};

  cout << arr2 << endl; // 배열 자체의 메모리 주소를 출력해버림

  // 내용을 알고 싶다면 for 문을 돌려야 함

  for (string fruit : arr2) {
    cout << fruit << endl;
  }
  
  return 0;
}