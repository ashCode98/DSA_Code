#include<iostream>
#include<map>
using namespace std;

int main(){
   map<int, int> m;
   m.insert({1, 10});
   m.insert({2, 20});

  /*
   if(m.find(10)==m.end())cout << "Not found" << endl;
   else cout << "MILGAYA BHAI" << endl;
   */

   // cout << m.size() << endl;
   // cout << m.empty() << endl;
   
   /* 
   for(auto i : m){
      cout << i.first << " " << i.second << endl;
   }
   */
   return 0;
}
