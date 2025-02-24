#include <stdio.h>
#define pi 3.141592 // const 정의하는 법

int main(){
    printf("Hello World \n");

    int age = 24;
    float weight = 67.8;
    char letter_score = 'A';

    printf("Hi, I'm %d years old. \n", age);
    printf("I'm %.2f kg. \n", weight);
    printf("My score is %c \n", letter_score);
    return 0;
}

/*
const 정의하는 법
출력 - printf()
변수 선언, 초기화는 C++과 동일
\n, \t 이런 이스케이프 문자
%~~~ 이런 방식에 익숙해지기, 모르면 찾아보기
d, c, f, 등

소수점 ~째 자리까지만 자르기 = .2f
*/