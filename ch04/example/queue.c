//
// Created by 李熠 on 2019/10/12.
//

#include "queue.h"

void seqQueueOffer(SeqList *list, int elem) {
    if (seqQueueIsEmpty(list)) {
        seqListAdd(list, elem);
    } else {
        seqListInsert(list, 1, elem);
    }
}

int seqQueuePoll(SeqList *list) {
    if (seqQueueIsEmpty(list)) {
        return 0;
    }
    int rlt = seqListGet(list, list->length - 1);
    seqListDelete(list, list->length - 1);
    return rlt;
}

int seqQueuePeek(SeqList *list) {
    if (seqQueueIsEmpty(list)) {
        return 0;
    }
    return seqListGet(list, list->length - 1);
}


int seqQueueIsEmpty(SeqList *list) {
    return list->length == 0;
}


void linkedQueueOffer(SinglyIntNode *list, int elem) {
    if (linkedIsEmpty(list)) {
        singlyIntNodeAdd(list, elem);
    } else {
        singlyIntNodeInsert(list, 1, elem);
    }

}

int linkedQueuePoll(SinglyIntNode *list) {
    if (linkedIsEmpty(list)) {
        return 0;
    }
    int rlt = singlyIntNodeGet(list, list->value - 1);
    singlyIntNodeDeleteElem(list, list->value - 1);
    return rlt;
}

int linkedQueuePeek(SinglyIntNode *list) {
    if (linkedIsEmpty(list)) {
        return 0;
    }
    return singlyIntNodeGet(list, list->value - 1);
}


int linkedIsEmpty(SinglyIntNode *list) {
    return list->value == 0;

}