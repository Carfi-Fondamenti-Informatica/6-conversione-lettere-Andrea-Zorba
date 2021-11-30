#include <iostream>
#include "lib.h"
#include <algorithm>
using namespace std;

int main(){
  char a=0;
  cin>>a;
  if (funzione(a)==false){
    cout<< "errore"" << endl;
    }
  else{
    int ascii=a;
    if (97<= a){
      ascii= toupper(a);
      cout<< char(ascii)<< endl;
    }else if (65<= ascii <=90){
      cout<< char (tolower(a)) << endl;
    }
  }
  return 0;
}
