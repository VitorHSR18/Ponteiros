#include<stdio.h>

struct tpPont{
	char Info;
	TpFont *prox; // um ponteiro que aponta só para TpFont
};

TpPont *NovaCaixa(char Elem){
	TpPont *Caixa = new TpPont; // caixa aponta para a posição TpPont
	Caixa ->Info=Elem;  // seta para o lado -> acessa a proxima posição que a caixa esta apontando
	Caixa -> prox = NULL; // caixa aponta para Info que aponta para prox que recebe nulo
	return Caixa; // Retorna o lugar que foi criado essa caixa
}

TpPont *InserirInicio(TpPont *Lista){
	char Elemento;
	TpPont *NC;
	printf("\nInserir na lista dinamica simplesmente encadeada!\n");
	printf("Digite o Elemento\n");
	Elemento=getche();
	while(Elemento!= 27)
	{
		NC = NovaCaixa(Elemento); // Nova caixa vai retornar a posição em que foi inserido o elemento (O NC APONTA PARA O LUGAR NO QUAL FOI CRIADO)
		if(Lista == NULL)
			Lista = NC;  // Lista vai apontar aonde o NC está apontando
		else{
			NC ->prox = Lista; // NC na proxima posição recebe aonde a lista aponta
			Lista = NC; // Depois a lista vai receber todas as posições
	   }
	   printf("\nDigite o Elemento: "); Elemento=getche();
	}
	}
	
TpPont *InserirFim(TpPont *Lista)
{
	char Elemento;
	TpPont *NC,*p;
	printf("\nInserir na lista dinamica simplesmente encadeada!\n");
	printf("Digite o Elemento\n");
	Elemento=getche();
	while(Elemento!= 27)
	{
		NC = NovaCaixa(Elemento); // Nova caixa vai retornar a posição em que foi inserido o elemento (O NC APONTA PARA O LUGAR NO QUAL FOI CRIADO)
		if(L==NULL)
			L==NC;
		else{
			p=Lista
			while(p->prox!=NULL)
				p=p->prox;
			p->prox = NC;
		}
		printf("Elemento:");
		Elemento = getche();
	}
	return Lista;
}

void Exibir(TpPont *Lista)
{
	clrscr();
	printf("\n##Conteudo da Lista##\n");
	while(Lista-> != NULL){
	
		printf("\n %c",Lista->Info);
		Lista = Lista->prox;
	}
	printf("\n %c",Lista->Info);
	getch();
}

int main(void)
{
	TpPont *L=NULL;
	Exibir(L);
	return 0;
}
