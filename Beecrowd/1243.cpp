#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string entrada, aux;
  while(getline(cin, entrada)){
    aux.clear();
    int cont=0;
    int media = 0, resultado;
    bool palavra = true;
    
    for(int i=0; i<entrada.size(); i++){
      if(((entrada[i]>='a' && entrada[i]<='z') ||(entrada[i]>='A' && entrada[i]<='Z')) && palavra){
        aux.push_back(entrada[i]);
      }
      if(entrada[i]>='0' && entrada[i]<='9'){
        palavra = false;
        aux.push_back(entrada[i]);
      }
      if((entrada[i]==' '|| entrada[i]==',') && (!aux.empty()) && (palavra)){
        cont++;
        media += aux.size();
        aux.clear();
      }
      
      if((entrada[i]==' '||entrada[i]=='.'||entrada[i]=='.'||entrada[i]==',') && palavra == false){
        palavra = true;
        aux.clear();
      }
    }
    
    if(!aux.empty() && palavra){
      media += aux.size();
      cont++;
    }
    if(cont==0){
      cout<<"250"<<endl;
    }
    else {
      resultado = media/cont;
      if(resultado<=3) cout<<"250"<<endl;
      else if(resultado<=5) cout<<"500"<<endl;
      else cout<<"1000"<<endl;
    }
    
  }
}
