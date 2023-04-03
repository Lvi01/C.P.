#include <bits/stdc++.h>
using namespace std;

int main() {

  char enter;
  int n;
  cin>>n >> enter;

  while(n--){
    int cont=0, maior=0;
    string entrada, aux;
    getline(cin, entrada);
    aux.clear();
    
    for(int i=0; i<entrada.size(); i++)
      entrada[i]=tolower(entrada[i]);

    for(int i=0; i<entrada.size(); i++){
      if(entrada[i] >= 'a' && entrada[i] <='z'){
        cont++;
        aux.push_back(entrada[i]);
      }
      else{
        if(aux=="jogo"||aux=="perdi"){
          maior= max(cont, maior);
          cont = 0;
        }
        aux.clear();
      }
      maior = max(cont,maior);
    }
    cout<<maior<<"\n";
  }
}