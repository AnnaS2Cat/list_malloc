//função insere

struct Caixa* insere(struct Caixa* L, int x) {

    struct Caixa* novo = (struct Caixa*) malloc(sizeof(struct Caixa));  //aloco novo, ou seja, tô criando um novo nó com "novo" sendo um ponteiro para o primeiro elemento
    novo->valor = x;
    novo->prox = NULL;

    if (L == NULL || x <= L->valor) {    //caso a lista esteja vazia ou x sendo menor que o primeiro elemento
        novo->prox = L;   //novo aponta para o antigo primeiro
        return novo;          //novo é o novo início
    }

    struct Caixa* aux = L;    //inserir no meio ou no final, crio um novo ponteiro e aponto para o primeiro elemento

    while (aux->prox != NULL && aux->prox->valor < x) {   //avança enquanto o próximo elemento for menor que x     
        aux = aux->prox;
    }

    novo->prox = aux->prox; // o novo passa a apontar para o que o aux^.prox apontava
    aux->prox = novo; //então aqui o aux deixa de apontar para o que ele apontava antes e passa a apontar para o novo, assim fazendo com que a sequencia de nós siga certinha 

    return L;  //retorna a lista já com a inserção
}
