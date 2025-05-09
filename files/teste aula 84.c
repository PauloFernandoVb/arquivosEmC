#include<stdio.h>
main(){
	FILE *fl;
	fl=fopen("testes.txt","a");
	if(fl==NULL){
		printf("ERRO");
		return 0;
	}
//====METODOS DE ENTRADA/ "A" APEND/INCERIR 
	fprintf(fl, "primeira linha\n");
	//fprintf();
	char frase[] = "segunda linha\n";
	fputs(frase,fl);
	//fputs();
	char carcter='3';
	fputc(carcter,fl);
	fclose(fl);
	//fputc();
}
