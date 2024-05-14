/* LISTA DINÂMICA DUPLAMENTE ENCADEADA

O primeiro da lista o antecessor dele é sempre nulo

Inserir ordenadamente
exibir recursivo crescente
recrusivo decrescente
excluir
exibir

Estrutura de dados */
struct TpPont
{
	char Info;
	TpPont *ant,*prox;
};

void TpInserçãoOrdenada(*L)
{
	if(L==NULL)
	{
		L=NC;
	}
	else
	if(NC->Info<=L->Info)
	{
		NC->prox=L;
		L = NC;
		NC->prox->ant = NC; // ou L->ant = NC
	}
	else
	{
		TpPont *atual;
		atual = L;
		while(atual->prox!=NULL && NC->Info<=atual->Info)
		{
			NC->prox=atual;
			NC->ant=atual->ant;
			atual-ant=NC;
			NC->ant->prox=NC;
		}
	}
}
