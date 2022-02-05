#include <iostream>

//using namespace std;

// 메인 함수 : 프로그램의 시작점 역할을 하는 함수입니다.
// 함수 명령어 담는 그릇역할을 합니다.
int main() {
    int a;   // 4byte 정수 저장공간을
          // 메모리에 할당해줘
          // 나는 그 할당된 공간을 a라는 이름으로
          // 접근할거야.
    int b;

    a = 20;
    b = 30;

    int sum = a + b;

    // 콘솔 화면에 문자열을 출력할 때 cout 객체를 사용합니다.

    std::cout << a << " + " << b << " = " << sum << std::endl;


    return 0;   // return 문은 함수가 명령어를 처리한 결과값을
             // 함수 외부로 전달할때 사용.
}