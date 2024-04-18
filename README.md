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
