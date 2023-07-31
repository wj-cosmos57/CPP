#include <string>

class Graph {
public:
    int n;
    int **vertex;
public:
    void LoadMatrix(std::string &filename); 
    //인자로 받은 파일명으로 파일에 있는 가중치 행렬을 읽어서 멤버 변수에 저장
    int GetSize();
    // 행렬의 크기 반환 (n x n의 경우 n 반환)
    void PrintMatrix();
    //인접 행렬을 출력
    void PrintShortestPathWeight(int s);
    //시작 정점 s로부터 나머지 vertex까지의 최단 경로 출력
}; 