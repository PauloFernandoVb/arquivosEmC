#include<stdio.h>
#include<stdlib.h>
main(){
	FILE *file;
	char c;
	
	file=fopen("arquivo.txt","r");
	if(file==NULL){
		printf("ERRO na leitura do arquivo");
		
	}else{
		do{
			c=getc(file);
			printf("%c",c);
			
		}while(c!=EOF);
	}
	fclose(file);
}
