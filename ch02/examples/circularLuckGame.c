//
// Created by 李熠 on 2019/10/10.
//
#include "circularIntNode.h"

int main(void) {
    CircularIntNode *head = circularIntNodeCreate();
    circularIntNodeAdd(head, 2);
    circularIntNodeAdd(head, 2);
    circularIntNodeAdd(head, 3);
    circularIntNodeAdd(head, 4);
    circularIntNodeAdd(head, 5);

    int count = 0;
    CircularIntNode *curNode = head->next;
    while (head->value == 1) {
        count = curNode->value;

        while (count != 0) {
            curNode = curNode->next;
            count--;
        }
        circularIntNodeDelete(head, curNode);
    }

    printf("winner is the people who called:%d", head->next->value);
}
