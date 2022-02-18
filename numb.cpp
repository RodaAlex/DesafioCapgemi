#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main() {
  int i;
  int j;
  int k;
  int n; 		//Numero de linhas 
  
  cout << "n= "; 
  cin >> n; 	// Pega o valor n com o usuario
  i = 1;
  while (i <= n) {
  	j = 0;	//Redefine os valores de j e k em cada ciclo
  	k = n;
  	
	  while (k > i) {  	// Escreve os caracteres " "
	  	cout << " " ;
		k--;
	  }
  	
	  while (j < i) { 	// Escreve os caracteres "*"
	  	cout << "*" ;
		j++;
	  }
 
  	cout << "\n";	// Pula a linha e volta o loop
  	i++;
  }
  getch();
  return 0;
}

