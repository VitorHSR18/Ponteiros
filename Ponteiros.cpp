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
	
TpPont *InserirOrdenado(TpPont *Lista)
{
	char Elemento;
	TpPont
	printf("\nInserir Ordenado\n");
	printf("Digite o elemento:");
	Elemento=getche();
	while(Elemento!=27)
	{
		
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
TpPont *Excluir(TpPont *Lista)
{
	// Para realizar a exclusão preciso antes mudar para quem o objeto que apontava para o que eu vou excluir aponte para o próximo ou nulo
	
	
	TpPont *aux;
	char Elemento;
	clrscr();
	printf("\n##Exclusão##\n");
	printf("Elemento:\n");
	Elemento=getche();
	while(Elemento!=27)
	{
		if (Elemento==Lista->Info) // Quando o elemento é o primeiro da Lista
		{
			aux=Lista;
			Lista= Lista -> prox; // já que pegamos a auxiliar e marcamos qual queremos excluir podemos ligar a lista com o próximo dela já
			delete(aux);
		}
		else
		{
			aux = Lista;
			ant=Lista;
			while(aux!=NULL && aux->Info!=Elemento){ // enquanto não chegar e não achar o elemento continua
				ant=aux; // usamos 2 váriaveis para andar , se caso achar podemos ajustar 
				aux = aux->prox;
				
			}
				if(aux==NULL)
				{
					printf("\nNão Encontrou!\n");
				}
				else
				{
					ant->prox=aux->prox; // se caso achar o proximo do anterior vai apontar para o proximo do auxiliar
					delete(aux);
				}
		}
		printf("\nElemento");
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
