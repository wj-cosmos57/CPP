// 아래와 같이 main함수에서 여러분이 작성한 list.h 파일을 include하여
// 주어진 동작을 실행하게 됩니다.
// *** 주의! 아래의 내용을 변경할 경우 오답처리될 수 있습니다. **
#include <iostream>
#include <string>
#include <sstream>
#include "list.h"

using namespace std;

int main(void) {
    LinkedList list;
    
    string numbers;
    int number;
    getline(cin, numbers);
    //cin.getline() ->char*형의 문자열 받을 때. 입력 스트림에서 문자들을 읽어서, 인자로 받은 문자열에 저장
    //getline(string) -> string 형을 받을 경우 사용. 공백이 포함된 문자열을 입력받기 편리
    
    istringstream is(numbers);
    //sstream에 포함되어 있는 문자열 파싱 함수
    //isstringstream : string을 입력받아 다른 형식으로 바꿔주는 기능
    //문자열 포맷을 parsing 할 때 사용
    
    while (is >> number) {
        list.Append(number);
    }
    
    list.Print();
    cout << list.Length() << endl;
    
    return 0;
}