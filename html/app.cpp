#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
 using namespace std;
  
  void solution(){
      int a,b;
      cin >> a >> b;
      int arr[a];
       for(int i = 0; i< a; i++){
          cin >> arr[i];
       }
         for(int i = 0; i < a; i++){
             if(arr[i] == b){
                cout << "YES" << endl;
                   return;
             } 
         }
             
                 cout << "NO" << endl; 
  }
int main(){
       int t;
       cin >> t;
       while(t--){
           solution();
       }
    return 0;

}