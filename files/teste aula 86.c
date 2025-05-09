#include<stdio.h>
main(){
	char x[100];
	printf("Digite algo: \n");
	fgets(x,10,stdin);//standard input|| entrada de teclado
	printf("%s",x);
	//FUNÇAO FREOPEN; redirecionar
	freopen("func.txt","r",stdin);
	//a funcao fropen redireciona onde o stdin le(o tecladono caso
	//e leva para o arquivo func.txt)
	
	/*NA FUNÇAO (FREOPEN ELE N PEGA AGR MAIS DO MEU TECLADO AQUI EM BAIXO)
	.ELE PEGA DO ARQUIVO O (PAO COM QUEIJO E MOSTRA NA TELA)
	*/
	fgets(x,100,stdin);//standard input|| entrada de teclado
	printf("%s",x);
}
