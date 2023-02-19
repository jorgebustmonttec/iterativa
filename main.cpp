#include <iostream>
using namespace std;

int vmax(int lista[], int n) {
  int maxnum;
  if (n == 1) {
    return lista[0];
  }
  else{
    n=n-1;
    int current,prev;
    current=lista[n+1];
    prev=vmax(lista, n);
    if(current>prev){return current;}
    else{return prev;}
  }
  //return max(lista[n-1],vmax(lista,n-1));
}

int main() {
  int lista[] = {34, 65, 1, 34, 234534, 23, 34, 654, 32};
  int arrSize = sizeof(lista) / sizeof(lista[0]);
  cout << arrSize << endl;
  cout << vmax(lista, arrSize);
}