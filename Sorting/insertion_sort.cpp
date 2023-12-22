#include<iostream>
#include <utility>
using namespace std;
int main(){
  int arr[] = {5, 2, 6, 9, 0, 12, 6};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i<n; i++){
    for(int j = i+1; j>0; j--){
      if(arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
      }
    }
  }

  for(auto i:arr){
    cout << i << " ";
  }

  return 0;
}