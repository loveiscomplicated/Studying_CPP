#include <iostream>
#include <string>

using namespace std;

int main() {
  int arr_num[5] = {1, 2, 3, 4, 5};

  cout << arr_num << " -> array 자체를 출력하라 하면 메모리 주소를 반환함" << endl;

  /*
  왜 주소가 출력될까?
  arr2는 string 객체를 저장하는 배열이고, 
  cout << arr2에서 cout은 string 배열 전체를 출력하는 방법을 모르기 때문에 배열의 주소를 출력해.
  
  C++에서 배열 이름(arr2)은 배열의 첫 번째 요소를 가리키는 포인터로 해석될 수 있어. 
  하지만 string은 기본 자료형이 아니라 클래스이기 때문에 
  string* 타입(즉, string 객체를 가리키는 포인터)로 변환되지 않고 배열 자체의 주소가 출력돼
  */
  for (int idx : arr_num) {
    cout << idx << ' ';
  }
  cout << " -> For을 사용해야 내부 요소 파악 가능" << endl;

  cout << '\n' << "1. 크기는 정하고, 내용은 안 정하는 경우 (선언)" << endl;
  cout << "그 다음 요소들 각각을 정의하는 법" << endl;

  int arr_num_2[10];

  for (int i = 0; i < 50; i++) {
    arr_num_2[i] = i*2;
  }
  
  for (int i = 0; i < 50; i++) {
    cout << arr_num_2[i] << ' ';
  }
  cout << endl;

  cout << '\n' << "2. 크기는 안 정하고, 내용은 정하는 경우" << endl;
  cout << "근데 이건 권장되지 않는 방법, 그럴 바엔 vector를 사용하자" << endl;
  // Create an array of strings
  string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

  // Loop through strings
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}