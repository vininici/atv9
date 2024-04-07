#include <iostream>
using namespace std;
#define ORDEM 3
void ler_matriz(int matriz[ORDEM][ORDEM], int ordem){
  for(int i = 0; i < ordem; i++){
    for(int j = 0; j < ordem; j++){
      cout<<"digite um valor para a matriz ";
      cin>>matriz[i][j];
    }
  }
}
int soma_diagonal(int matriz[ORDEM][ORDEM], int ordem){
  int soma = 0;
  for(int i = 0; i < ordem; i++){
    for(int j = i + 1; j < ordem; j++){
      soma = soma + matriz[i][j];
    }
  }
  return soma;
}
void imprimir_matriz(int matriz[ORDEM][ORDEM], int ordem){
  for(int i = 0; i < ordem; i++){
    for(int j = 0; j < ordem; j++){
      cout<<matriz[i][j]<<" ";

    }
    cout<<endl;
  }
}
int main(){
int ordem;
int matriz[ORDEM][ORDEM];
cout << "digite a ordem da matriz: ";
cin >> ordem;
ler_matriz(matriz, ordem);
int resultado = soma_diagonal(matriz, ordem);
imprimir_matriz(matriz, ordem);
cout<<resultado;
}