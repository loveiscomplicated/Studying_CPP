#include <iostream>

using namespace std;

int main() {
  int day = 1;

  switch (day) {
    case 1:
      cout << "Monday" << endl;
      // break를 사용하지 않으면 fall-through 문제를 겪을 수 있다.
      // 즉 break를 만나거나 맨 아래 코드 블록에 도달할 떄까지 쭉 실행된다.
      // 이를 역이용할 수도 있다. 여러 개의 케이스에 대해 같은 처리를 하고 싶을 때 !
    case 2:
      cout << "Tuesday" << endl;

    case 3:
      cout << "Wednesday" << endl;
    
    default: // case로 정의되지 않은 모든 경우에 대해 어떻게 할 건지
      cout << "Missing" << endl;
  }


  return 0;
}