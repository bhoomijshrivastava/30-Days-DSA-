#include<bits/stdc++.h>
using namespace std;

int main(){

   int arr[] = {10, 20, 30, 50, 89};

   int n = sizeof(arr)/sizeof(arr[0]); 

   int sum =0;

   for(int i=0; i<n; i++){
      sum += arr[i];
   }

   cout<<sum;
}