#include <stdio.h>
int len;
char var[20];
void make(int nowlen){
    if(nowlen == len){
        for(int i=0; i<nowlen; i++){
            printf("%c",var[i]);
        }
        printf("\n");
        return;
    }
    var[nowlen] = 'a';
    make(nowlen + 1);
    var[nowlen] = 'b';
    make(nowlen + 1);
}
int main() {
    scanf("%d",&len);
    make(0);
}