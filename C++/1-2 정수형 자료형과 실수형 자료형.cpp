#include <iostream>
#include <climits>

using namespace std;

int main(){
    // 정수형 : 소수부가 없는 수 
    // short < int < long < long long
    

    // 무한히 많은 정수, 무한히 큰 정수를 아무렇게나 사용할 수 없음 (메모리 한계)
    // 각 상황에 맞게 알맞은 정수형 자료형을 써야 함 

    
    int n_int = INT_MAX;
    short  n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_2_long = LLONG_MAX;

    cout << sizeof n_int << endl;
    cout << sizeof n_short << endl;
    cout << sizeof n_long << endl;
    cout << sizeof n_2_long << endl;

    cout << n_int << endl;
    cout << n_short << endl;
    cout << n_long << endl;
    cout << n_2_long << endl; // mac에서는 llong이나 long의 크기가 같음


    // 음의 값을 제외하여 더 넓은 범위의 수들을 포함하게 만드릭
    unsigned int a = -1; // unsigned를 사용하면 음의 부분을 사용하지 않고 사용하지 않는 만큼 양의 부분이 늘어난다
    // -1은 음의 정수이지만 -1 인덱스 느낌으로 생각하면 된다

    cout << a << endl;



    // 실수형 : 소수부가 있는 수
    float x = 3.14;
    int y = 3.14; // 소수부를 제외하고 정수만 출력

    cout << x << endl;
    cout << y << endl;
    return 0;
}
