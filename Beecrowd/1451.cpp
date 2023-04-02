#include <bits/stdc++.h>
using namespace std;

int main() {


  string entrada;  
  
  while(cin >> entrada){
    
    list<char> saida;
    auto it = saida.begin();
    
    for(int i=0; i<entrada.size();i++){
      if(entrada[i]==']'){
        it = saida.end();
      }
      else  if(entrada[i]=='['){
        it = saida.begin();
      }
      else{
        saida.insert(it,entrada[i]);
      }
    }

    for(auto it = saida.begin(); it!=saida.end(); it++){
      cout << *it;
    }
    
    cout<<endl;
    
  }
  
}
  
