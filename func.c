#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "deque.h"

void new_el(deque** top, int value){
    deque* newl = (deque*)malloc(sizeof(deque));
    newl->left = *top;
    newl->numb = value;
    newl->right = NULL;
    *top = newl;
}

void del_el(deque** top){
    deque* newl;
    newl->left = *top;
    *top = newl;
    free(newl);
}