/*	Imprime o endereço e cada membro do vetor de caracteres utilizando o tipo int */
#include <stdio.h>
int main() {
int i;
int str[] = {'s','o','u',' ','u','m',' ','v','e','t','o','r'};
for (i = 0; i < sizeof(int); i++){
fprintf(stdout, "%p \t\t| %c\n", &str[i], (char)str[i]);
}
return 0;
}

