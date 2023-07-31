#include<stdio.h>
#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if( (a%b) == 0 )
        return b;
    else
        return GCD(b, a%b);
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int res = GCD(a,b);
    cout << res << endl;
}