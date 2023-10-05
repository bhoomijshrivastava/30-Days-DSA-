#include <bits/stdc++.h>
using namespace std;

int EqualNumbers(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
 
        while (arr[i] % 2 == 0) // Divide number by 2
            arr[i] /= 2;
 
        while (arr[i] % 3 == 0) // Divide number by 3
            arr[i] /= 3;
 
        if (arr[i] != arr[0]) {
            return 0;
        }
    }
 
    return 1;
}
 
int main()
{
    int arr[] = { 50, 75, 100 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if (EqualNumbers(arr, n))
        cout<<"Yes";
    else
        cout<<"No";
 
    return 0;
}