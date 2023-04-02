#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  string entrada;

  while(cin>>n){
    cin>>entrada;
    int saldo=0, count2=0;
    if(n%2 == 0){
      
      for(int i=0; i<n;i++){
        if(entrada[i]=='(') saldo++;
        else saldo--;
        if(saldo<-1){
          cout << "No";
          return 0;
        }
      }
        if(saldo!=0) {
          cout << "No";
        }
        else cout<<"Yes";
    }
    else cout<<"No";
  }
}