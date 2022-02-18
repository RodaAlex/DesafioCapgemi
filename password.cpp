#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cctype>
using namespace std;


int main()
{
    char str[100];
    int i;
	int totChar = 0;
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int s = 0;
	

		
    gets(str); //Recebe a senha do usuario
	
    for(i=0; str[i] != '\0'; i++){  //Conta o numero de caracteres
            
			totChar++;
        
		if (isupper(str[i])) {		//Confere se o caracter é maiusculo
        	
			a = 0;
		}
		
		if (islower(str[i])) {		//Confere se o caracter é minusculo
        	
			b = 0;
		}
		if (isdigit(str[i])) {		//Confere se o caracter é numeral
        	
			c = 0;
		}
		if (ispunct(str[i])) {		//Confere se o caracter é especial
			
			d = 0;
		}
    
	}

	s = a + b + c + d;

    if (totChar < 6){
    	totChar = 6 - totChar;
			if ( s > totChar){
				cout<<"\n Caracteres faltando= "<<s;
			}
			else {
				cout<<"\n Caracteres faltando= "<<totChar;
			}

	}
	else {
		if (s != 0) {
			cout<<"\n Caracteres faltando= "<<s;	
		}
	}
	
	getch();
    return 0;
}
