#include <iostream>
using namespace std;

int main() {
    int  numtabla, tabla;

    cout << "¿Que tabla de multiplicar deseas visualizar? \n";
    cin >> numtabla;
  
  double valor [10];

  cout << "La tabla de multiplicar del" <<" " << numtabla <<" " << "es: \n";

  for (int i=1; i<=10; i++)
  {
      valor [i-1] = i*numtabla;
    
    cout  <<numtabla <<" " <<"x" <<" " <<i <<" " <<"=" <<" " << valor[i-1] << "\n" ;
    }

  return 0;
}
