#include "doublyIntNode.h"

int main(void) {
    DoublyIntNode *node = doublyIntNodeCreate();
    doublyIntNodeAdd(node,10);
    doublyIntNodeAdd(node,2);
    doublyIntNodeAdd(node,4);
    doublyIntNodeAdd(node,3);
    doublyIntNodeAdd(node,6);
    printf("原数据\n");
    doublyIntNodeDisplay(node);
    printf("2位置插入25\n");
    doublyIntNodeInsert(node, 2, 25);

    doublyIntNodeDisplay(node);
    printf("删除2位置数\n");
    doublyIntNodeDelete(node,2);
    doublyIntNodeDisplay(node);
    printf("删除2\n");
    doublyIntNodeDeleteElem(node,2);
    doublyIntNodeDisplay(node);
    printf("倒序\n");
    doublyIntNodeRevert(node);

    printf("\n更新第二个数字为200\n");
    doublyIntNodeUpdate(node,2,200);
    doublyIntNodeDisplay(node);
    printf("第三个数是\n");
    doublyIntNodeGet(node,3);

    doublyIntNodeDestroy(node);

}

