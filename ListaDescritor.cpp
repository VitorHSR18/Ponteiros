// Lista dinâmica Simplesmente Encadeada com descritor

// descritor = possibilita armazenar detalhes sobre lista e,no mínimo, acessar as extremidades da mesma



struct TpPont{
	char Info;
	TpPont *prox;
};

struct TpDescritor{ // guarda o inicio e o fim da lista
	TpPont *Inicio,*Fim;
	int Qtde;
};
void Inicializar(TpDescritor &Desc)
{
	Desc.Inicio = Desc.Fim = NULL;
	Desc.Qtde=0;
}
TpPont *NovaCaixa(Char Elem)
{
	TpPont *Novo = new TpPont;
	Novo->Info=Elem;
	Novo->prox=Null;
	return Novo;
}

void InserirOrdenado(TpDescritor &Desc,char Elem)
{	
	TpPont *Caixa=NovaCaixa(Elem);
	if(Desc.Qtde==0)
	{
		Desc.Inicio=Desc.Fim=Caixa; // ambos vão apontar para aonde a caixa estiver apontando
	}
	else
	if(Caixa->Info <= Desc.Inicio->Info)
	{
		Caixa->prox = Desc.Inicio;
		Desc.Inicio = Caixa;
	}
	else if(Caixa->Info >= Desc.Fim->Info)
	{
		Desc.Fim->prox=Caixa;
		Desc.Fim = Caixa;
	}
	else
	{
		atual = Desc.Inicio->prox;
		ant = Desc.Inicio;
		while(atual->Info<Caixa->Info)
		{
			ant = atual;
			atual = atual->prox;
		}
		Caixa->prox = atual;
		ant->prox = caixa;
	}
	Desc.Qtde++;
}
/*
void Exibir(TpDescritor D)
{
	if(D.Inicio!=NULL)
		printf("%c",D.Inicio->Info);
	while(D.Inicio != D.Fim)
	{
		
	}
}*/

int main(void)
{
	TpDescritor D;
	Inicializar(D);
	InserirOrdenado(D,'M');
	InserirOrdenado(D,'B');
	InserirOrdenado(D,'J');
	InserirOrdenado(D,'Q');
	InserirOrdenado(D,'R');
	Exibir(D);
	Excluir(D,'B');
	Exibir(D);
}
