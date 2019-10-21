//
// Created by 李熠 on 2019/10/10.
//
#include "doublyIntNode.h"

DoublyIntNode *doublyIntNodeCreate() {
    DoublyIntNode *rlt = (DoublyIntNode *) malloc(sizeof(DoublyIntNode));
    rlt->value = 0;
    rlt->next = NULL;
    rlt->prev = NULL;
    return rlt;
}

void doublyIntNodeDestroy(DoublyIntNode *head) {
    DoublyIntNode *curNode = head;
    DoublyIntNode *temp;
    while (curNode != NULL) {
        temp = curNode->next;
        free(curNode);
        curNode = temp;
    }

}

void doublyIntNodeDisplay(const DoublyIntNode *head) {
    printf("doubly linked list size:%d\n", head->value);
    int count = 0;
    DoublyIntNode *curNode = head->next;
    while (curNode != NULL) {
        printf("[%d]=%d ", count++, curNode->value);
        curNode = curNode->next;
    }
    printf("\n");
}


void doublyIntNodeAdd(DoublyIntNode *head, int elem) {
    DoublyIntNode *curNode = head;
    while (curNode->next != NULL) {
        curNode = curNode->next;
    }
    DoublyIntNode *newNode = doublyIntNodeCreate();
    newNode->next = curNode->next;
    newNode->value = elem;

    curNode->next = newNode;
    newNode->prev = curNode;

    head->value++;
}

int doublyIntNodeInsert(DoublyIntNode *head, int index, int elem) {
    if (index < 0 || index >= head->value) {
        printf("index is illegal!\n");
        return 0;
    }

    DoublyIntNode *curNode = head;

    for (int i = 0; i < index; i++) {
        curNode = curNode->next;
    }

    DoublyIntNode *newNode = doublyIntNodeCreate();
    newNode->next = curNode->next;
    newNode->prev = curNode;
    newNode->value = elem;
    curNode->next = newNode;
    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
    head->value++;

return 1;
}
int doublyIntNodeDelete(DoublyIntNode *list, int index){
    if (index < 0 || index >= list->value) {
        printf("index is illegal!\n");
        return 0;
    }
    DoublyIntNode *del=list;
    for(int i=0;i<index;i++){
    del=del->next;
    }
    del->next=del->next->next;
    list->value--;
    return 1;
}
int doublyIntNodeDeleteElem(DoublyIntNode *list, int elem){
    DoublyIntNode*del=list;
    int j=0;
    for(int i=0;i<list->value;i++){
        del=del->next;
        if(del->next->value==elem){
            j=i;
            del->next=del->next->next;
            list->value--;
            return 1;}
    }
    if(j==0)
    {return 0;}
}
void doublyIntNodeRevert(DoublyIntNode *list){
    DoublyIntNode *rev=list;
    for(int i=0;i<list->value;i++){
        rev=rev->next;
    }

    for(int i=list->value-1;i>=0;i--){
        rev=rev->prev;
        printf("[%d]=%d ",list->value-1-i,rev->value);
    }
}
int doublyIntNodeUpdate(DoublyIntNode *list, int index, int elem){
    if (index < 0 || index >= list->value) {
        printf("index is illegal!");
        return 0;
    }
    DoublyIntNode *oldNode = list;
    for (int i = 0; i < index; ++i) {
        oldNode = oldNode->next;
    }
    oldNode->next->value = elem;
    return 1;
}
int doublyIntNodeGet(DoublyIntNode *list, int index){
    if (index < 0 || index >= list ->value) {
        printf("index is illegal!");
        return 0;
    }
    DoublyIntNode *findNode = list;
    for (int i = 0; i <= index; ++i){
        findNode = findNode->next;
    }
    printf("[%d]=%d\n",index,findNode->value);
    return 1;
}





