#include <iostream> // 전처리 지시자

/*
c++ 에서 함수를 사용하고자 한다면
반드시 그 함수의 원형을 미리 정의하여야 한다.

함수 -> 어떤 기능을 하는 부분

cout : 입력값 출력
cout을 따로 정의하지 않고도 사용할 수 있었던 것은 '전처리 지시자 덕분'
*/

using namespace std;
// ; == 종결자, 줄바꿈이나 탭을 자유롭게 해도 컴퓨터는 ;(종결자)를 기준으로 한 라인을 인식함
// std를 쓰는 이유 iostream 안에 있는 _STD_BEGIN과 _STD_END 사이에 cout이 존재함 -- 이거 확인하려면 iostream 하이라이트치고 fn + f12
// 이런 식으로 안 쓰면 main 안에서 cout 쓸 때 번거롭게 일일히 다 써야 함


int main(){
        // c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
    cout << "Hello World" << endl;
        //  endl == 줄 바꿈 다른 코드와 비교해보기

    /*
    cout << "Hello " << endl;
    cout << "World" << endl;
    */

        // << == 데이터의 방향 endl(줄바꿈)을 할 건데, "Hello World"를 cout이 처리해줘
        
     return 0;
}