#include<bits/stdc++.h>
using namespace std;

int maxWater(int arr[], int n) /// Function to return the maximum water that can be stored
{
    int res = 0; // To store the maximum water that can be stored
    
    for (int i = 1; i < n-1; i++) { // For every element of the array
      
      int left = arr[i]; // Find the maximum element on its left
      for (int j=0; j< i; j++)
        left = max(left, arr[j]);
      
      int right = arr[i]; // Find the maximum element on its right 
      for (int j=i+1; j< n; j++) 
      right = max(right, arr[j]);
     
      res = res + (min(left, right) - arr[i]);  // Update the maximum water 
        
    } 
    return res; 
    
} 
// Driver code 
int main() 
{ 
    int n; 
    cin>>n;

   int arr[n];
   for(int i=0; i < n; i++) 
   cin >> arr[i];

   cout << maxWater(arr, n);

   return 0;
}