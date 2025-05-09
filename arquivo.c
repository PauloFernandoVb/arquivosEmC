#include<stdio.h>
#include<stdlib.h>
main(){
//“b” – para abertura no modo binário
// “+” – para indicar que o arquivo já existe e deve ser atualizado.
	FILE *file;
	int i;
	char ch;
	file=fopen("arquivo.txt","a");
		if(file==NULL){
		printf("\nERRO no Arquivo,nao pode ser Aberto");
		return 0;
	}else{
		do{
			printf("diga um char<espaço finaliza>");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch!=' '){
				putc(ch,file);
			}
		}while(ch!=' ');//para espaço usar apostofro
	}
fclose(file);

}
