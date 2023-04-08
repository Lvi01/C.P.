#include <bits/stdc++.h>
using namespace std;

int main(){
    string palavra, esp;
    int flag = 0;
    int n;
    while(getline(cin, palavra)){
        n = palavra.size();
        while(palavra.size()>=1){
            int i;
            for ( auto x : esp){
                cout << x;
            }
            esp.push_back(' ');
            for (i = 0; i < palavra.size(); i++){
                if(i < palavra.size()-1) cout << palavra[i] << " ";
                else cout << palavra[i];
            }
            if (n != 1) cout << endl;
            palavra.pop_back();
            n--;
        }
        esp.clear();
        cout << endl << endl;
    }
}