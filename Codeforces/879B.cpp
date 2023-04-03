#include <bits/stdc++.h>
using namespace std;

int main()
{
    int person; 
    long long int wins = 0, streak;
    cin >> person >> streak;

    vector<int> v;
  
    int  x=0, i, val;
    
    for(i = 0; i < person && wins != streak; i++){
      cin >> val;
      v.push_back(val);
      if(i>0){
        if(v[x] > v[i] && wins != streak){
        wins++;
        }
        else {
          x = i;
          wins=1;
        }
        
        if(wins==streak){
          cout<<v[x];
          return 0;
        }
      }
      
    }

    int  j = 0;
    i = x;
  
    while(wins != streak)
    {
        if(i == j){
          break;
        } 
      
        if(v[j] > v[i])
        {
            i = j;
            wins = 1;
        }
          
        else wins++;
      
        j = (j + 1) % person;
              
    }
      
    cout << v[i];   

}
