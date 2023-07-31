#include<stdio.h>
#include<iostream>
char arr[20];
int input;
void sub(int n)
{
    if(n==0)
    {
        for(int i=0; i<input; i++)
            printf("%c", arr[i]);
        printf("\n");
        return;
    }

    arr[input - n] = 'a';
    sub(n-1);
    arr[input - n] = 'b';
    sub(n-1);
}
int main(void)
{
    std::cin >> input;
    sub(input);
}