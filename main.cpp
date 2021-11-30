#include <iostream>
using namespace std;
#include "lib.h"

int main(){
    char let;
    cin >> let;
    if ((let >= 'a' && let <= 'z') || (let>='A' && let<='Z')){
    char res1= funzione(let);
    cout << res1 << endl;
}else{
    cout << "errore"<<endl;}
}
