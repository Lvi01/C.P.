#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, P, F;
  
  while((cin>>M>>P>>F) && M){
    
    int aux;
    int matriz[M][P];
  
    for(int j=0; j<M;j++){
      for(int i=0;i<P;i++){
        cin>>aux;
        matriz[j][i] = aux;
      }
    }

    for(int j=P-1; j>-1;j--){
      for(int i=M-1;i>-1;i--){
        if(matriz[i][j] == 0 && F){
          cin>>aux;
          matriz[i][j] = aux;
          F--;
        }
      }
    }
    
    while(F--){
      cin>>aux;
    }
    
    for(int j=0; j<M;j++){
      for(int i=0;i<P;i++){
        cout << matriz[j][i];
        if(i==P-1){}
        else cout<<" ";
      }
    cout<<endl;
    }
  
  }
    
}
