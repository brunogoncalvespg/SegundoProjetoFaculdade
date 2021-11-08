#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1, nota2, media;
	
	printf("Digite sua nota \n");
	scanf("%f", &nota1);
	
	printf("Digite sua outra nota \n" );
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2;
	
	printf("media = %2f", media);
	
	return 0;
}
