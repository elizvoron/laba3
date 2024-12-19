#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "deque.h"

int main(){
    deque* first = NULL;
    // first->left = NULL;
    // deque* last;
    // first->right = NULL;
    new_el(&first, 4);
    printf("%d\n", first->numb);
    new_el(&first, 6);
    printf("%d\n", first->numb);
    del_el(&first);
    printf("%d", first->numb);


    return 0;
}