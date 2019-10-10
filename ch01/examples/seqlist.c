#include "seqlist.h"

SeqList *seqListCreate() {
    SeqList *seqListAddr = (SeqList *) malloc(sizeof(SeqList));
    seqListAddr->head = (int *) calloc(CAPACITY_STEP_SIZE, sizeof(int));
    seqListAddr->length = 0;
    seqListAddr->capacity = CAPACITY_STEP_SIZE;
    return seqListAddr;
}

void seqListDestroy(SeqList *list) {
    int *p = list->head;
    free(list);
    free(p);
}

void seqListAdd(SeqList *list, int elem) {

    
    if (list->length == list->capacity) {
        list->head = (int *) realloc(list->head,
                                     (list->capacity + CAPACITY_STEP_SIZE)
                                     * sizeof(int));
        list->capacity += CAPACITY_STEP_SIZE;
    }
    list->head[list->length] = elem;
    list->length++;
}

SeqList seqListCreateDirect() {
    SeqList seqList;
    seqList.head = (int *) calloc(CAPACITY_STEP_SIZE, sizeof(int));
    seqList.length = 0;
    seqList.capacity = CAPACITY_STEP_SIZE;
    printf("inside = %p\n", &seqList);
    return seqList;
}

void seqListDisplay(const SeqList *seqList) {
    for (int i = 0; i < seqList->length; i++) {
        if ((i % 5) == 0) {printf("\n");}
        printf(" [%2d]=%3d", i, seqList->head[i]);
    }
}

int seqListDelete(SeqList *list, int index) {
    if (index >= list->length || index < 0) {

        return 0;
    }
    for (int i = index; i < list->length - 1; i++) {
        list->head[i] = list->head[i + 1];
    }
    list->length--;
    return 1;
}
int seqListDeleteElem(SeqList *list, int elem) {
    int j = 0;
    for (int i = 0; i < list->length; i++) {
        if (list->head[i] == elem) {

            j = i;
        }

    }
    if (j == 0) {
        return 0;
    }
    else {
        for (int m = j; m < list->length - 1; m++) {
            list->head[m] = list->head[m + 1];
        }
        list->length--;
        return 1;

    }
}

void seqListRevert(SeqList *list) {
    for (int i = 0; i < (list->length) / 2; i++) {
        int temp = list->head[i];
        list->head[i] = list->head[list->length - 1 - i];
        list->head[list->length - 1 - i] = temp;
    }
}

int seqListInsert(SeqList *list, int index, int elem) {
    if (index >= list->length || index < 0) {

        return 0;
    }
    else list->head[index - 1] = elem;
    for (int i = index ; i < list->length - 1; i++) {

        list->head[i] = list->head[i + 1];
    }
    list->length++;
    return 1;
}

int seqListUpdate(SeqList *list, int index, int elem) {
    if (index >= list->length || index < 0) {

        return 0;
    }
    else list->head[index - 1] = elem;
    return 1;
}
int seqListGet(SeqList *list, int index) {

    if (index >= list->length || index < 0) {
        return 0;
    }
    return list->head[index];
}





























