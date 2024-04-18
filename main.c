#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])  {
	// lista com descritor
	struct descritor{
		int n;
		struct no *i,*f;
	};
	struct no{
		int dado;
		struct no *prox;
	};
	struct no *q,*p,*r,*lista; //auxiliar a criar nos e descritores
	struct descritor *d; 
	int sn;
	
	 //lista LSE vazia

	//deve-se criar o descritor
	p=malloc(sizeof(struct descritor));
	//agora tem-se uma lista com campo i,n,f
	d->i=NULL;
	d->f=NULL;
	d->n=0;
	
	/* Nota: só para demonstracao, sera 
	//campos i,n,f estão vazios
	//insercao do primeiro no
	p=malloc(sizeof(struct no));
	scanf("%d",&p->dado);
	p->prox=NULL; // Só tem um nó por enquanto e "p" sabe a pos. dele
	d->i=p; // p sabe pós
	d->f=p;
	d->n=1; // num. do nó
	*/
	
	//ins. a direita
	// agora diferentemente da lse simples, o f vai apontar para o novo nó.
	do{
		
		//perguntar se a lista esta vazia
		//se n=0 a lista esta vazia
		p=malloc(sizeof(struct no));
		scanf("%d",&p->dado);
		p->prox=NULL;// Só tem um nó por enquanto e "p" sabe a pos. dele
		if (d->n=0){
			d->i=p; // p sabe pós.
			d->f=p;
			d->n=1; // num. do nó
		}
		else{
			q=d->f; //quer que q aponte para o mesmo nó que o d->f aponta.
			q->prox=p; // p é o ultimo nó , e o prox de q agora aponta para ele
			d->f=p; // p é o ultimo nó então f agora aponta para ele inves de q (era o unico item na lista).
			d->n++; // n é incrementado já que um nó foi adicionado, agora tem 2.
			//note que o n não tem nada a ver com os ponteiros i e f, então não use ele na remoção de nós.
			
		}
		
		printf("Deseja inserir outro no a direita? 0-nao 1-sim");
		scanf("%d",&sn);
	}while(sn==1);
	

	/*
		Aula 17/04
	Lista com Descritor
	Resolve problemas de performance em listas mto grandes na insercao à 
	direita e intermed. (Se por exemplo uma lista com milhões de items, a
	contagem de items da lista & ponteiros levará mto tempo.)
	- tem descritores.
	- normalmente tem campo i n f 
	i: tem funcao simular a "lista" aponta para o começo.
	n: numero do nó? é incrementado quando um novo nó é adicionado.
	f: aponta para o final.
	
	LISTA DUPLAMENTE ENCADEADA
	tem descritor mas os nós da lsita não são struct nós de 2 campos como 
	a da LSE são nós com 3 campos: 
	- a informação (trabalhamos com o int dado na struct no na aula)
	-*prev ou *esq (para o nó de trás) 
	-*next ou *dir (igual *prox))

	*/
	
	
	return 0;

}
