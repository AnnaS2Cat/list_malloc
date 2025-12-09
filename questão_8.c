struct Caixa* concatena(struct Caixa* L1, struct Caixa* L2) {

    struct Caixa* resultado = NULL;   // nova lista começa vazia. Criando uma nova lista eu não interfiro diretamente em L1 e L2 

    struct Caixa* p;

    p = L1;   // p aponta para o primeiro elem de L1, p<-L1        (minha dúvida frequente)- l1 = p	l1 passa a apontar onde p estiver apontando, no caso pra nada (destrói a lista se p avança)
    while (p != NULL) {
        resultado = insere(resultado, p->valor);    //uso a função insere da questão 6 para copiar os valores de L1 em resultado enquanto a lista não chega a nulo
        p = p->prox;
    }

    p = L2;    // insiro elementos de L2 se não estiverem em resultado
    while (p != NULL) {
        if (!contem(resultado, p->valor)) {   //uso a função contem da questão 4 e digo: se resultado não contem tal valor, insere os valores de L2 em resultado
            resultado = insere(resultado, p->valor);
        }
        p = p->prox;
    }

    return resultado; 
}
