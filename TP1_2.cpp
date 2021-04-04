//Para evitar la entrada de varios valores se puede realizar las funciones de los incisos a,b,y c con el primer valor que se agrega
//Luego con la impresion de dos nuevos digitos se podra realizar el resto de las funciones

#include <stdio.h>
#include <math.h>
float potencia(float *number);
void potencia1 (float *number);
void CyD (float *number);
void invertir (int *a ,int *b);
void orden (int *num1,int *num2 );

int main(){
	
	
	float numero,resultado;
	
	printf("introduzca un numero:");
	scanf("%f",&numero);
	
	//funcion potencia
	resultado=potencia(&numero); 
	printf("\n\nresultado: %.2f",resultado);
	
	
	//funcion potencia1
	potencia1(&numero); 
	
	
	//funcion CyD (contenido y direccion del numero ingresado)
	CyD(&numero);   
	
	//funcion invertir
	int n,m;
	printf("\n\ningrese dos numeros enteros (por cada una de ellas presione enter):\n\n");
	scanf("%i",&n);
	scanf("%i",&m);
	printf("\n\nnumeros ingresados en x e y:  x= %i , y=%i",n,m);
	invertir(&n,&m);
	
	//funcion orden
	printf("\n\norden de los numeros:\n");
	orden(&n,&m);
	return 0;
}

float potencia(float *number){
	return pow (*number, 2);
}

void potencia1(float *number){
	printf("\n\n%.2f al cuadrado = %.2f",*number,pow (*number, 2));
	
	return;
}

void CyD(float *number){

	printf("\n\nContenido de la variable: %.2f",*number);
	printf("\nDireccion de la variable: %p",&number);
	
	return;
}

void invertir(int *a,int *b){

	if(*a==*b){
		printf("\n\nlos numeros ingresados son los mismo\npor lo tanto x=%i ,y=%i",*a,*b);
	}else{
		int x;
		x=*a;
		*a=*b;
		*b=x;
		printf("\n\nAHORA numeros ingresados invertidos en x e y: x=%i , y=%i",*a,*b);
	}
	
	return;
}

void orden(int *num1,int *num2){
	if(*num1< *num2){
		printf("el valor mas chico x=%i\nel valor mas grande y=%i",*num1,*num2);
	}else{
		if(*num1>*num2){
			printf("el valor mas chico x=%i\nel valor mas grande y=%i",*num2,*num1);
		}else{
			if(*num1== *num2){
				printf("ambos numeros ingresados son iguales");
			}
		}
	}
	return;
}

