//
// Created by 李熠 on 2019/10/10.
//
#include "circularIntNode.h"

int main(void) {
    CircularIntNode *node = circularIntNodeCreate();
    circularIntNodeAdd(node, 10);
    circularIntNodeAdd(node, 2);
    circularIntNodeAdd(node, 4);
    circularIntNodeAdd(node, 3);
    circularIntNodeAdd(node, 6);
    circularIntNodeAdd(node,8);
    circularIntNodeAdd(node,12);
//    printf("原数据是\n");
//    circularIntNodeDisplay(node);
//    printf("在第0位插入100\n");
//    circularIntNodeInsert(node, 0, 100);
//    circularIntNodeDisplay(node);
//    printf("删除第四个节点\n");
//    circularIntNodeDeleteNode(node, node->next->next->next->next);
//    circularIntNodeDisplay(node);
//   printf("删除第三个数\n");
//   circularIntNodeDelete(node,3);
//   circularIntNodeDisplay(node);
//   printf("删除100\n");
//   circularIntNodeDeleteElem(node,100);
//   circularIntNodeDisplay(node);
//   printf("第4个数\n");
//   circularIntNodeGet(node,4);
//   printf("倒序\n");
//   circularIntNodeRevert(node);
   printf("\n变第7个位置值位800\n");
   circularIntNodeUpdate(node,7,800);
   circularIntNodeDisplay(node);

    circularIntNodeDestroy(node);
    node = NULL;

}
