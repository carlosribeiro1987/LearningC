/* Imprime o endereço de cada membro do vetor utilizando ponteiro */
#include <stdio.h>

int main() {
    char *p, str[] = "sou um vetor";
    p = str;
    fprintf(stdout, "+-------------------+----------+\n");
    fprintf(stdout, "| ENDEREÇO          | CONTEÚDO |\n", p, *p);
    fprintf(stdout, "+-------------------+----------+\n");
    while(*p != '\0'){
        fprintf(stdout, "| %p \t| %c \t   |\n", p, *p);
        p++;
    }
    fprintf(stdout, "+-------------------+----------+\n");
    return 0;
}
