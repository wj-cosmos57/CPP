class Node {
public:
    int data;   // Node에 저장될 data
    Node *next; // 다음 Node에 대한 pointer
    Node *prev; // 이전 Node에 대한 pointer
    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
class LinkedList {
public:
    Node *head; // List의 가장 첫 Node를 가리키는 pointer
    Node *tail; // List의 가장 마지막 Node를 가리키는 pointer
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    void Append(int data);  // List의 마지막에 새로운 data에 대한 Node 추가
    void Prepend(int data); // List의 처음에 새로운 data에 대한 Node 추가
    int Length();           // List에 있는 Node의 수를 return
    void Print();           /* List에 있는 모든 Node를 head부터 순서대로 출력 
                            (ex) 3개의 숫자 4, 3, 5가 저장된 경우 ==> 
                            "4 3 5" 에서 따옴표 안에 있는 내용을 cout으로 출력*/
    void PrintReverse();
};