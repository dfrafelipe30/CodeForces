#include <iostream>
#include "string.h"
using namespace std;

int is_palindrom(char * s){
  int i;
  int l = strlen(s);
  for(i=0;i<=l/2;i++)
    if(s[i]!=s[l-i-1]) return 0;
  return 1;
}

int main(){
    int T;
    cin >> T;
    for (int i =1; i<= T;i++){
        char s [100000];
        cin >> s;
        if (is_palindrom(s)){
            if (strlen(s)%2 == 0){
                cout << "YES" << " EVEN" << endl;
            }
            else{
                cout << "YES" << " ODD" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }


    return 0;
}