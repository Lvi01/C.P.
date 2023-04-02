#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
  
  vector<int> ordem;
  int nop, valor;
  string op;

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>nop;

  for(int i=0; i<nop; i++){
    cin >> op;
    
    if(op == "PUSH"){
      cin>>valor;
      if(ordem.empty()){
        ordem.push_back(valor);
      }
      else ordem.push_back(min(ordem.back(),valor));
    }
        
    else if(op == "MIN"){
      if(ordem.empty()) cout<<"EMPTY"<<endl;
      else cout<<ordem.back()<<endl;
    }
    else {
      if(ordem.empty()) cout<<"EMPTY"<<endl;
      else ordem.pop_back();
    }
  }
}