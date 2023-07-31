#include <string>

class Graph {
public:
    int n;
    int **vertex;
public:
    void LoadMatrix(std::string &filename); 
    //인자로 받은 파일명으로 파일에 있는 가중치 행렬을 읽어서 멤버 변수에 저장
    void PrintMatrix();
    //인접 행렬을 출력
}; 