#include <stdio.h>
#include <stdlib.h>
#include "Aluno.cpp"

typedef struct Node{
    Aluno aluno;
    //Aluno *aluno;
    struct Node* esq;
    struct Node* dir;
} No;


int main(int argc, char const *argv[]){
    struct Node *raiz = (struct Node*)malloc(sizeof(struct Node));
    raiz->esq = 0;
    raiz->dir = 0;
    //raiz->aluno = criarAluno("Davi\0", 10, 8.5);
    Aluno *a = criarAluno("Davi\0", 10, 8.5);
    raiz->aluno = *a;
    return 0;
}