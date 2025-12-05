int contem(struct Caixa* L, int valor) { //L ponteiro para inicio da lista de nós
    struct Caixa* p = L;   // declaro que p é um ponteiro pra nó e faço ele ser igual ao ponteiro que ponta pro primeiro elemento da lista 

    while (p != NULL) {
        if (p->valor == valor) {
            return 1;          //encontrou
        }
        p = p->prox;           //avanço até encontrar
    }

    return 0;                  // não encontrou
}
