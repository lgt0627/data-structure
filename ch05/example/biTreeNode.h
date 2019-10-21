#include <stdlib.h>
#include <stdio.h>

typedef char *BiTreeElement;
typedef struct BiTreeNode *BiTreeNodeAddr;
// 定义数节点结构
typedef struct BiTreeNode {
    BiTreeElement element;
    // 树节点的左子节点
    BiTreeNodeAddr left;
    // 树节点的右子节点
    BiTreeNodeAddr right;
} BiTreeNode;


void printBiTreeElement(BiTreeElement elem);

/**
 * 创建树
 * @return 树根节点指针
 */
BiTreeNodeAddr biTreeCreate(BiTreeElement);

/**
 * 向节点中添加左右两个子节点
 * BiTreeElement如果是null，则不添加子节点
 * @return 添加成功返回1，失败返回0
 */
int biTreePutLeaf(BiTreeNodeAddr, BiTreeElement, BiTreeElement);

/**
 * 树的前序遍历
 * 根结点 ---> 左子树 ---> 右子树
 */
void biTreePreOrder(BiTreeNodeAddr);

/**
 * 树的中序遍历
 * 左子树---> 根结点 ---> 右子树
 */
void biTreeInOrder(BiTreeNodeAddr);

/**
 * 树的后序遍历
 * 左子树 ---> 右子树 ---> 根结点
 */
void biTreePostOrder(BiTreeNodeAddr);

/**
 * 打印树的叶子节点
 */
void biTreeLeaf(BiTreeNodeAddr);

/**
 * 获取树叶子节点个数
 * @return
 */
int biTreeGetLeafNum(BiTreeNodeAddr);

/**
 * 获取树的高度
 * @return
 */
int biTreeGetHeight(BiTreeNodeAddr);