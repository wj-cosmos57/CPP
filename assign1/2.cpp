#include<stdio.h>
#include<iostream>
int len;
int arr[1000000];
int cnt = 0;

int BinarySearch(int arr[], int x, int first, int last)
{
    if(first <= last)
    {
        int mid = (first+last)/2;
        cnt++;
        if(x>arr[mid])
            return BinarySearch(arr, x, mid+1, last);
        else if(x<arr[mid])
            return BinarySearch(arr, x, first, mid-1);
        for(int i=0; i<len; i++)
        {
            if(x==arr[i])
               return i;
        }
    }
    return -1;
}
int main(void)
{
    std::cin >> len;
    for(int i=0; i<len; i++)
        std::cin >> arr[i];
    int ans;
    std::cin >> ans;
    int index;
    index = BinarySearch(arr, ans, 0, len-1);
    std::cout << index << std::endl;
    std::cout << cnt << std::endl;
    return 0;
}