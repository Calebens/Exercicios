#include <iostream>
#include <windows.h>
#include <cstring>
 
using namespace std;
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
  char nome[3][20], aux[20];

  for(int i =0; i<3; i++){
    cin>>nome[i];
  }

  for(int i = 1; i < 3; i++){
    for(int j =1; j < 3; j++){
      if(strcmp(nome[j-1], nome[j]) > 0){
        strcpy(aux, nome[j - 1]);
        strcpy(nome[j - 1], nome[j]);
        strcpy(nome[j], aux);
      }
    }
  }

   for(int i = 0; i < 3; i++){
     cout<<"Nome: " << nome[i]<< endl;
   }
 
  cout << endl;
  return 0;
}