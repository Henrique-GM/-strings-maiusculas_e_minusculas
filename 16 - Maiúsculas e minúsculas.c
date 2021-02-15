#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Funciona em compiladores baixados, por conta da função strlwr(). Exemplo de compiladores: DEV C++
int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char frase[100] ;
	
	printf ("\n Digite uma frase com letras maiúsculas..: ") ;
	fgets (frase, 100, stdin) ;
	
	printf ("\n A palavra em minúsculo é..: %s", strlwr(frase)) ;
	
	return 0 ;
	system ("pause") ;
}
