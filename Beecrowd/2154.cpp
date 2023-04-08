#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n){  
        while(n--){
            int frente=0, exp=0;
            char x;
            string ignora;
            cin >> frente >> x >> exp;
            if(n>0) cin >> ignora;
            frente *=exp;
            exp--;
            if (exp == 0) cout << frente;
            else if (exp == 1) cout << frente << x;
            else cout << frente << x << exp;
            if(n>0) cout << " + ";
         }
        cout<<endl;
    }
}