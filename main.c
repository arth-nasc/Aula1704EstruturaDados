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
	struct no *p,*r,*lista; //auxiliar a criar nos e descritores
	struct descritor *d; 
	
	 //lista LSE vazia

	//deve-se criar o descritor
	p=malloc(sizeof(struct descritor));
	//agora tem-se uma lista com campo i,n,f
	d->i=NULL;
	d->f=NULL;
	d->n=0;
	
	/* Nota: s� para demonstracao, sera 
	//campos i,n,f est�o vazios
	//insercao do primeiro no
	p=malloc(sizeof(struct no));
	scanf("%d",&p->dado);
	p->prox=NULL; // S� tem um n� por enquanto e "p" sabe a pos. dele
	d->i=p; // p sabe p�s
	d->f=p;
	d->n=1; // num. do n�
	*/
	
	//ins. a direita
	// agora diferentemente da lse simples, o f vai apontar para o novo n�.
	do{
		
		//perguntar se a lista esta vazia
		//se n=0 a lista esta vazia
		p=malloc(sizeof(struct no));
		scanf("%d",&p->dado);
		p->prox=NULL;// S� tem um n� por enquanto e "p" sabe a pos. dele
		if (d->n=0){
			d->i=p; // p sabe p�s.
			d->f=p;
			d->n=1; // num. do n�
		}
		else{
			q=d->f; //quer que q aponte para o mesmo n� que o d->f aponta.
			q->prox=p; // p � o ultimo n� , e o prox de q agora aponta para ele
			d->f=p; // p � o ultimo n� ent�o f agora aponta para ele inves de q (era o unico item na lista).
			d->n++; // n � incrementado j� que um n� foi adicionado, agora tem 2.
			//note que o n n�o tem nada a ver com os ponteiros i e f, ent�o n�o use ele na remo��o de n�s.
			
		}
		
		printf("Deseja inserir outro no a direita? 0-nao 1-sim");
		scanf("%d",&sn)
	}while(sn==1);
	

	
	
	
	return 0
}
