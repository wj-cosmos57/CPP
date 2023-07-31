#include<stdio.h>
#include<iostream>
using namespace std;
int n, r;
int Combination(int n, int r)
{
    if( (n) == r )
        return 1;
    else if(r == 1)
        return n;
    else
        return Combination(n-1, r-1) + Combination(n-1, r);
}
int main()
{
    cin >> n;
    cin >> r;
    int res = Combination(n, r);
    cout << res << endl;
}