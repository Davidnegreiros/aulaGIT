#ifndef ALUNO_C
#define ALUNO_C
#include <stdio.h>
#include <stdlib.h>

typedef int Nota;
typedef unsigned int matricula;

typedef struct aluno{
    const char *nome;
    matricula Id;
    Nota n;
}Aluno;

Aluno* criarAluno(const char *nome, matricula Id, Nota n){
    Aluno *novo = (Aluno*)malloc(sizeof(Aluno));
    novo->nome = nome;
    novo->n = n;
    novo->Id = Id;
    return novo;
}

int main(int argc, char const *argv[]){
    Aluno* a = criarAluno("Davi\0", 10, 8.5);
    printf("\nNome: %s", a->nome);
    printf("\nId: %d", a->Id);
    printf("\nNota: %f", a->n);
    printf("\n\n");
    return 0;
}
#endif