#include<stdio.h>
#include<iostream>
using namespace std;

int Fibo(int input)
{
    if(input==1 || input==2)
        return 1;
    else
        return Fibo(input-1) + Fibo(input-2);
}

int main(void)
{
    int input;
    cin >> input;
    Fibo(input);
    int ans = Fibo(input);
    cout << ans << endl;
}