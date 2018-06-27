/*	Imprime o endereço e cada membro do vetor	*/

#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char str[] = "sou um vetor";
	fprintf(stdout, "ENDEREÇO \t\t| CONTEUDO\n");
	for(i = 0; i < strlen(str); i++){
		fprintf(stdout, "%p \t\t| %c\n", &str[i], str[i]);
	}
	return 0;
}

