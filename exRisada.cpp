#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
  /*
  Primeiro dia de programação - 10/03/2018
  */
int main(){

      string palavra;
      string vogal;
      string vogalP;
      cin >> palavra;
      for(int x = 0; x != palavra.size(); x++){
        if(palavra.at(x) == 'a'|| palavra.at(x) == 'e'|| palavra.at(x) == 'i'|| palavra.at(x) == 'o'|| palavra.at(x) == 'u')
        {
            vogal += palavra.at(x);
            vogalP += palavra.at(x);
        }

      }
      reverse(vogalP.begin(),vogalP.end());
    if(vogal == vogalP)
    cout << "S" << endl;
    else
    cout << "N" << endl;
      return 0 ;
}
