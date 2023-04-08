#include <bits/stdc++.h>
using namespace std;

int main() {
  int jogos=0, media=0, mmc;
  string aux, palavra, texto, linha;
  set<string> diferentes;
  while(getline(cin, linha)){
    texto += linha;
    texto += " ";
  }
  //cout << texto<< endl;
    for(int i=0; i<texto.size();i++){
      texto[i] = tolower(texto[i]);
      if(texto[i]>='a' && texto[i]<='z'){   
        aux.push_back(texto[i]);
      }
      else{
        if(aux=="bullshit"){
          jogos++;
          diferentes.clear();
          aux.clear();
        }
        else{
          if(!diferentes.count(aux) && !aux.empty()){
            diferentes.insert(aux);
            media++;
            //cout<< aux<<endl;
            aux.clear();
          }
          else aux.clear();
        }
      }
    }
  //cout << media << endl << jogos << endl;
  mmc = __gcd(media, jogos);
  cout<< media/mmc <<" / "<< jogos/mmc<<"\n";
}
