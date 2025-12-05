struct Caixa* remove(struct Caixa* Lista, int x) {
  
    if (L == NULL)  //caso a lista esteja vazia
        return NULL;

    //caso o valor esteja logo no primeiro nó
    if (L->valor == valor) { //L^.E==x
        struct Caixa* removida = L;      //nó que eu quero remover
        L = L->prox;                 //avança o início
        removida->prox = NULL;       //o primeiro elemento se desliga da sequencia de nós, assim o removendo     
        free(removida);                      // libero o ponteiro
        return L;    
    }

    //caso o valor esteja no meio da lista
    struct Caixa* aux = L;

    while (aux->prox != NULL && aux->prox->valor != x) { //enquanto o aux^.prox não apontar para nulo e o proximo valor que aux aponta não for o x que eu quero ele avança. ou seja, vai para exatamente antes do elemento que eu quero
        aux = aux->prox;   //avança até o nó anterior ao que será removido
    }

    //não encontrou o x na lista
    if (aux->prox == NULL) {
        return L;
    }

    //remove o nó encontrado
    struct Caixa* removida = aux->prox;
    aux->prox = removida->prox;
    removida->prox = NULL;
    free(removida);

    return L;
}
