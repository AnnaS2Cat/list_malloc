struct Caixa* concatena(struct Caixa* L1, struct Caixa* L2) {

    if (l1 == NULL)  //se a primeira lista estiver vazia
        return L2;

    if (l2 == NULL) //se a segunda lista estiver vazia
        return L1;

    struct Caixa* aux = L1;   // percorre L1 até o último nó
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = L2;   //liga o último nó de L1 ao início de L2

    return L1;
}
