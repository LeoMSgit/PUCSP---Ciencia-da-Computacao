//Função Sem Retorno
//Criar uma função que calcula o dobro de um numero inteiro
//Reciclar o programa com saída em 0


#include <stdio.h>
int N;

void fdobro(int Numero);		//Protótipo de função, serve para avisar o sistema de que essa função não é errada e será usada futuramente
	
main(){
	do{
		printf("Digite um numero inteiro (0 para Sair): ");
		scanf("%d", &N);
		if(N != 0)
			fdobro(N);
	}
	while (N != 0);
			
	}

void fdobro(int num){
	printf("O dobro de %d: %d\n", num, num*2);
}
