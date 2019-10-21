#include "singlyIntNode.h"

int main(void) {
    SinglyIntNode *node = singlyIntNodeCreate();
    singlyIntNodeAdd(node, 10);
    singlyIntNodeAdd(node, 2);
    singlyIntNodeAdd(node, 4);
    singlyIntNodeAdd(node, 3);
    singlyIntNodeAdd(node, 6);
    singlyIntNodeDisplay(node);
    printf("插入\n");
    singlyIntNodeInsert(node, 4, 100);
    singlyIntNodeUpdate(node,4,400);
    singlyIntNodeDisplay(node);
    printf("删除第一个\n");
    singlyIntNodeDelete(node,1);

    singlyIntNodeDisplay(node);
    printf("删除100\n");
    singlyIntNodeDeleteElem(node,100);

    singlyIntNodeDisplay(node);
    printf("倒序\n");

    singlyIntNodeRevert(node);
    printf("\n");
    printf("得到第一个数\n");
    singlyIntNodeGet(node,1);
    singlyIntNodeDestroy(node);
    node = NULL;

}


