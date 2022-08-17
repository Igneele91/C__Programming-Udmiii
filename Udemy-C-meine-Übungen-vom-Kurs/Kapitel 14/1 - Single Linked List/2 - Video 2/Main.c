#include <stdio.h>
#include <math.h>
#include <stdlib.h>     // rpush bedeutet = rechts auf den neuen haufe detail in OneNote notizen
#include <string.h>     // rpop  bedeutet = nimmt vom Haufen auf und bringt es weiter  detail mit bild in onenote 
#include <assert.h>     // assert bibilothek ja ist eine bibilothek mehr info in onenote notizen 

#include "SingleLinkedList.h"   

int main()
{
    single_list_t* list = list_new();

    single_node_t* a = node_new("a");
    single_node_t* b = node_new("b");
    single_node_t* c = node_new("c");

    // a b c
    list_rpush(list, a);        
    list_rpush(list, b);
    list_rpush(list, c);

    // Assertions
    assert(a == list->head);
    assert(b == list->head->next);
    assert(c == list->tail);
    assert(3 == list->len);

    return 0;
}