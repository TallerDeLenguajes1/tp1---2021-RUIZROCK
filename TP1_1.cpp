#include <stdio.h>

int main(){
    int variable=2;
    int *p = &variable;
    
    printf("contenido del puntero p : %d\n",*p);
    
    printf("La dirección de memoria almacenada por el puntero: %p\n",p);
    
	printf("direccion de variable: %p\n",&variable);
    
	printf("direccion de ubicacion del puntero p : %p\n",&p);
    
	printf("tamanho de memoria utilizada por variable: %d bytes\n",sizeof(variable));
    
 return 0;   
}
