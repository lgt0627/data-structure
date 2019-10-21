//
// Created by 李熠 on 2019/10/10.
//
#include "stack.h"

/**
 * 返回位于栈顶的元素，并在堆栈中删除它
 * @param list
 * @return  栈顶的元素
 */
int seqStackPop(SeqList *list) {
    int rlt = seqListGet(list, list->length - 1);
    seqListDelete(list, list->length - 1);
    return rlt;
}

int seqStackPush(SeqList *list, int elem) {
    seqListAdd(list, elem);
    return elem;
}

int seqStackIsEmpty(SeqList *list) {
    return list->length == 0;
}

int seqStackPeek(SeqList *list) {
    return seqListGet(list, list->length - 1);
}

int seqStackSearch(SeqList *list, int elem) {
    int j = 0;


    for (int i = 0;
         i < list->
                 length;
         i++) {
        if (list->head[i] == elem) {
            j = i;
            return
                    i;
        }
    }
    if (j == 0) {
        return -1;
    }
}

int linkedStackPush(SinglyIntNode *list, int elem) {
    singlyIntNodeAdd(list, elem);
    return elem;
}
int linkedStackPop(SinglyIntNode *list){
    int i=singlyIntNodeGet(list,list->value-1);
    singlyIntNodeDelete(list,list->value-1);
    return i;


}
int linkedStackSearch(SinglyIntNode *list, int elem){
    SinglyIntNode*del=list;
    int j=0;
    for(int i=0;i<list->value;i++) {
        del = del->next;
        if (del->value == elem) {
            return i;
        }

    }
        if(j==0)
            return 0;
}
int linkedStackPeek(SinglyIntNode *list){
    return singlyIntNodeGet(list,list->value-1);
}

int linkedStackIsEmpty(SinglyIntNode *list){
    return (list->value==0);

}