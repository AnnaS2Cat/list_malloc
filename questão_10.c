int retira(struct Caixa* L, int x) {
    if (L == NULL)
        return 0;   //lista vazia, n remove

    struct Caixa* p = L;
    struct Caixa* ant = NULL;

    if (p->valor == x) { //se o primeiro valor for o x
        return 0;   
    }

    while (p != NULL && p->valor != x) {    // procurar o valor x
        ant = p;         // guarda quem veio antes, ou seja, no final do while p vai estar em x, e o ant no nó anterior a ele
        p = p->prox;      
    }

    if (p == NULL)  //se não encontrou
        return 0;
  
    ant->prox = p->prox;  //remover do meio ou do fim
    free(p);

    return 1;  //removeu com sucesso
}
