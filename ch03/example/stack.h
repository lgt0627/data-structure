//
// Created by 李熠 on 2019/10/10.
//
#include "seqlist.h"
#include "singlyIntNode.h"


/**
 * 返回位于栈顶的元素，并在堆栈中删除它
 * @param list
 * @return  栈顶的元素
 */
int seqStackPop(SeqList *list);

/**
 * 将element压入堆栈，同时也返回element
 * @param elem
 * @return
 */
int seqStackPush(SeqList *list, int elem);

/**
 * @param list
 * @return 如果堆栈是空的，则返回1，当堆栈包含元素时，返回0
 */
int seqStackIsEmpty(SeqList *list);

/**
 *
 * @param list
 * @return 返回位于栈顶的元素，但是并不在堆栈中删除它
 */
int seqStackPeek(SeqList *list);

/**
 * 在堆栈中搜索element，如果发现了，则返回它相对于栈顶的偏移量。否则，返回-1。
 * @param elem
 * @return
 */
int seqStackSearch(SeqList *list, int elem);

/**
 * 返回位于栈顶的元素，并在堆栈中删除它
 * @param list
 * @return  栈顶的元素
 */
int linkedStackPop(SinglyIntNode *list);

/**
 * 将element压入堆栈，同时也返回element
 * @param elem
 * @return
 */
int linkedStackPush(SinglyIntNode *list, int elem);

/**
 * @param list
 * @return 如果堆栈是空的，则返回1，当堆栈包含元素时，返回0
 */
int linkedStackIsEmpty(SinglyIntNode *list);

/**
 *
 * @param list
 * @return 返回位于栈顶的元素，但是并不在堆栈中删除它
 */
int linkedStackPeek(SinglyIntNode *list);

/**
 * 在堆栈中搜索element，如果发现了，则返回它相对于栈顶的偏移量。否则，返回-1。
 * @param elem
 * @return
 */
int linkedStackSearch(SinglyIntNode *list, int elem);
