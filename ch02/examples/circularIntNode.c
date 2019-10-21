//
// Created by 李熠 on 2019/10/10.
//
#include "circularIntNode.h"

CircularIntNode *circularIntNodeCreate() {
    CircularIntNode *rlt = (CircularIntNode *) malloc(sizeof(CircularIntNode));

    rlt->value = 0;
    rlt->next = NULL;
    return rlt;
}

void circularIntNodeAdd(CircularIntNode *head, int elem) {
    CircularIntNode *newNode = circularIntNodeCreate();
    CircularIntNode *lastNode = head->next;
    if (lastNode == NULL) {
        newNode->next = newNode;
        head->next = newNode;
    } else {
        while (lastNode->next != head->next) {
            lastNode = lastNode->next;
        }
        newNode->next = head->next;
        lastNode->next = newNode;
    }
    newNode->value = elem;
    head->value++;
}

void circularIntNodeDisplay(const CircularIntNode *head) {
    printf("circular node size=%d\n", head->value);
    if (head->next == NULL) {
        return;
    }
    CircularIntNode *curNode = head->next;
    int count = 0;
    while (curNode->next != head->next) {
        printf("[%d]=%d ", count++, curNode->value);
        curNode = curNode->next;
    }
    printf("[%d]=%d", count, curNode->value);
    printf("\n");
}

void circularIntNodeDestroy(CircularIntNode *head) {
    if (head->next == NULL) {
        free(head);
        return;
    }

    CircularIntNode *curNode = head;

    CircularIntNode *temp;
    while (curNode != head->next) {
        temp = curNode->next;
        free(curNode);
        curNode = temp;
    }
}

int circularIntNodeInsert(CircularIntNode *head, int index, int elem) {
    if (index < 0 || index >= head->value) {
        printf("index is illegal!");
        return 0;
    }
    CircularIntNode *newNode = circularIntNodeCreate();
    CircularIntNode *lastNode = head->next;
    CircularIntNode *firstNode = head->next;
    if (index == 0) {
        while (lastNode->next != head->next) {
            lastNode = lastNode->next;
        }
        newNode->next = firstNode;
        newNode->value = elem;
        lastNode->next = newNode;
        head->next = newNode;
        head->value++;
        return 1;
    }

    CircularIntNode *beforeIndexNode = head;
    for (int i = 0; i < index; ++i) {
        beforeIndexNode = beforeIndexNode->next;
    }

    newNode->next = beforeIndexNode->next;
    newNode->value = elem;
    beforeIndexNode->next = newNode;
    head->value++;
    return 1;

}

int circularIntNodeDelete(CircularIntNode *head, int index) {
    if (index < 0 || index >= head->value) {
        printf("index is illegal!");
        return 0;
    }

    CircularIntNode *lastNode = head->next;
    CircularIntNode *firstNode = head->next;
    CircularIntNode *deleteNode = head->next;
    if (index == 0) {
        while (lastNode->next != head->next) {
            lastNode = lastNode->next;
        }
        lastNode->next = deleteNode->next;
        head->next = deleteNode->next;
        head->value--;
        free(deleteNode);
        return 1;
    }

    CircularIntNode *beforeIndexNode = head;
    for (int i = 0; i < index; ++i) {
        beforeIndexNode = beforeIndexNode->next;
    }
    deleteNode = beforeIndexNode->next;
    beforeIndexNode->next = deleteNode->next;
    free(deleteNode);
    head->value--;
    return 1;

}

int circularIntNodeDeleteNode(CircularIntNode *head, CircularIntNode *deleteNode) {

    CircularIntNode *lastNode = head->next;
    CircularIntNode *firstNode = head->next;
    if (firstNode == deleteNode) {
        while (lastNode->next != head->next) {
            lastNode = lastNode->next;
        }
        lastNode->next = deleteNode->next;
        head->next = deleteNode->next;
        head->value--;
        free(deleteNode);
        return 1;
    }

    CircularIntNode *beforeIndexNode = head;
    while (beforeIndexNode->next != deleteNode) {
        beforeIndexNode = beforeIndexNode->next;
    }

    deleteNode = beforeIndexNode->next;
    beforeIndexNode->next = deleteNode->next;
    free(deleteNode);
    head->value--;
    return 1;
}

int circularIntNodeDeleteElem(CircularIntNode *list, int elem) {
    CircularIntNode *del = list;
    CircularIntNode *last = list;
    for (int m = 0; m < list->value; m++) {
        last = last->next;
    }
    if (del->next == NULL) {
        return 0;
    }
    int j = 0;
    if (del->next->value == elem && list->value == 1) {
        del->next = NULL;
        list->value--;
        return 1;
    }
    for (int i = 0; i < list->value; i++) {
        if (del->next->value == elem && i == 0) {
            j = i;
            del->next = del->next->next;
            last->next = del->next;
            list->value--;
            free(last->next);
            return 1;
        }
        if (del->next->value == elem && del->next->next != list->next) {
            j = i;
            del->next = del->next->next;
            list->value--;
            free(del->next);
            return 1;
        }
        if (del->next->value == elem && del->next->next == list->next) {
            j = i;
            del->next = list->next;
            list->value--;
            free(del->next);
            return 1;
        }
        del = del->next;

    }
}

int circularIntNodeGet(CircularIntNode *list, int index) {
    if (index < 0 || index > list->value) {
        printf("index is illegal!");
        return 0;
    }
    CircularIntNode *findNode = list;
    for (int i = 0; i < index; ++i) {
        findNode = findNode->next;
    }
    printf("[%d]=%d\n", index - 1, findNode->value);
    return 1;
}

void circularIntNodeRevert(CircularIntNode *list) {

    int a[list->value];
    CircularIntNode *node = list;
    for (int i = 0; i <= list->value; i++) {
        a[(list->value) - i] = node->value;
        node = node->next;

    }
    for (int i = 0; i < list->value; i++) {
        printf("[%d]=%d ", i, a[i]);
    }
}

int circularIntNodeUpdate(CircularIntNode *head, int index, int elem) {
    if (index < 0 || index >head->value) {
        printf("index is illegal!\n");
        return 0;
    }
    CircularIntNode *lastNode = head;
    for (int i = 0; i < index; i++) {
        lastNode = lastNode->next;


    }
//    if (lastNode->next == head->next) {
//        lastNode->value = elem;
//    }

    lastNode->value = elem;
    return 1;

}


