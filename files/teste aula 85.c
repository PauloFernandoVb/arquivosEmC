#include<stdio.h>
main(){
	void copiarConteudo(FILE *fl1,FILE *fl2);
	// n sabia disso
	FILE *fl1=fopen("func.txt","r");
	if(fl1==NULL){
		printf("\nErro!");
		return 1;
	}
	
	FILE *fl2=fopen("func2.txt","w");
	copiarConteudo(fl1,fl2);
	fclose(fl1);
	fclose(fl2);
}
void copiarConteudo(FILE *fl1,FILE *fl2){
	char leitor[1000];//criei um vet
	while(fgets(leitor,1000,fl1)!=NULL)
	// le os conteudos do arquivo 1
		
		fputs(leitor,fl2);
		//passa o conteudo de
		// leito pro segundo arquivo(fl2)
}
