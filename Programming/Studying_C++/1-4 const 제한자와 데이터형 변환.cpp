#include <iostream>

using namespace std;

int main(){

    // 원의 넓이를 구하는 프로그램을 만들어보자
    // 반지름 * 반지름 * 파이
    int r = 3;
    float s = r * r * 3.14;

    cout << s << endl;
      
    int r2 = 3;
    float s2 = r2 * r2 * 3.14;

    // 바뀔 필요가 없는 수
    // 바뀌어서는 안 되는 수
    // 이런 수를 **상수**라고 함

    const float PIE = 3.1415926536;
    
    cout << PIE;


    // 데이터형 변환
    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때 (지금은 이거만)
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3. 함수에 매개변수를 전달할 때
    */

    int a = 3.141592;
    cout << a << endl;

    // 강제적으로 데이터형 변환
    // typeName(변수명) 또는 (typeName)변수명
    char ch = 'M';
    cout << (int)ch << "  " << int(ch) << endl; // 아스키 코드에서 M에 해당하는 77이 출력됨


    // C++ (더 제한적인 데이터 변환 연산자)
    // static_cast<typeName>(변수명) -> 앞의 것과 어떤 차이가 있는지는 나중에 알아보도록 하자
    // 지금은 typeName(변수명), (typeName)변수명과 동일한 기능을 한다는 것까지만
    char ah = 'M';
    cout << static_cast<int>(ah) << "  " << int(ah) << "  " << (int)ah << endl;
    return 0;
}