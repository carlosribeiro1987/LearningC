/* Imprime o endereço de ponteiro e o conteúdo da váriavel através do ponteiro */
#include <stdio.h>
int main(){
	char *ptr;
	char tmp = 'A';
	fprintf(stdout, "ptr(%p) tem %d bytes.\n", &ptr, (int)sizeof(ptr));
	fprintf(stdout, "tmp(%p) tem %d bytes.\n", &tmp, (int)sizeof(tmp));

	ptr = &tmp;

	fprintf(stdout, "\n\nAgora ptr(%p) aponta para tmp: %c\n", ptr, ptr[0]);
	fprintf(stdout, "mas o endereço de ptr(%p) é o mesmo!\n", &ptr);

	return 0;
}
