//
// Created by 李熠 on 2019/10/10.
//
#include "singlyIntNode.h"

SinglyIntNode *singlyIntNodeCreate() {
    SinglyIntNode *rlt = (SinglyIntNode *) malloc(sizeof(SinglyIntNode));

    rlt->value = 0;
    rlt->next = NULL;
    return rlt;
}

void singlyIntNodeAdd(SinglyIntNode *head, int elem) {
    SinglyIntNode *newNode = singlyIntNodeCreate();
    SinglyIntNode *lastNode = head;
    while (lastNode->next) {
        lastNode = lastNode->next;
    }

    newNode->value = elem;
    lastNode->next = newNode;
    head->value++;
}

void singlyIntNodeDisplay(const SinglyIntNode *head) {
//    printf("singly node size=%d\n", head->value);
    SinglyIntNode *curNode = head->next;
    int count = 0;
    while (curNode != NULL) {
        printf("[%d]=%d ", count++, curNode->value);
        curNode = curNode->next;
    }
    printf("\n");
}

void singlyIntNodeDestroy(SinglyIntNode *head) {
    SinglyIntNode *curNode = head;
    SinglyIntNode *temp;
    while (curNode != NULL) {
        temp = curNode->next;
        free(curNode);
        curNode = temp;
    }
}

int singlyIntNodeInsert(SinglyIntNode *head, int index, int elem) {
    if (index < 0 || index > head->value) {
        printf("index is illegal!");
        return 0;
    }

    SinglyIntNode *beforeIndexNode = head;
    for (int i = 0; i < index; ++i) {
        beforeIndexNode = beforeIndexNode->next;
    }

    SinglyIntNode *newNode = singlyIntNodeCreate();
    newNode->next = beforeIndexNode->next;
    newNode->value = elem;
    beforeIndexNode->next = newNode;
    head->value++;

    return 1;
}

int singlyIntNodeUpdate(SinglyIntNode *list, int index, int elem) {
    if (index < 0 || index >= list->value) {
        printf("index is illegal!");
        return 0;
    }
    SinglyIntNode *oldNode = list;
    for (int i = 0; i < index; ++i) {
        oldNode = oldNode->next;
    }
    oldNode->value = elem;
    return 1;
}

int singlyIntNodeGet(SinglyIntNode *list, int index) {
    if (index < 0 || index >= list ->value) {
        printf("index is illegal!");
        return 0;
    }
    SinglyIntNode *findNode = list;
    for (int i = 0; i <= index; ++i){
        findNode = findNode->next;
    }
    return findNode->value;

}

void singlyIntNodeRevert(SinglyIntNode *list){
  int a[list->value];
 SinglyIntNode *node=list;
    for (int i = 0; i <=list->value;i++){
        a[(list->value)-i]=node->value;
        node = node->next;

    }
    for (int i = 0; i < list->value;i++){
    printf("[%d]=%d ",i,a[i]);}
}

int singlyIntNodeDelete(SinglyIntNode *list, int index){
    if (index < 0 || index >= list ->value) {
        printf("index is illegal!");
        return 0;
    }

    SinglyIntNode *delete=list;
    for(int i=0;i<index;i++){
        delete=delete->next;
    }
    delete->next=delete->next->next;
    list->value--;

    return 1;
}

int singlyIntNodeDeleteElem(SinglyIntNode *list, int elem){
    SinglyIntNode*del=list;
    int j=0;
    for(int i=0;i<list->value;i++){
        del=del->next;
        if(del->next->value==elem){
            j=i;
            del->next=del->next->next;
            list->value--;
            return 1;
        }


    if(j==0)
        return 0;}

}



