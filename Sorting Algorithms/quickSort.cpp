#include <bits/stdc++.h>
using namespace std;

void quick_sort(int arr[], int n) {
  if(n == 0 || n == 1)return;
  
  
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  quick_sort(arr, n);
  return 0;
}