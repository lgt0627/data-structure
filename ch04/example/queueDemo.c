//n
// Created by 李熠 on 2019/10/12.
//
#include "queue.h"

int main(void) {
    SeqList *seqListAddr = seqListCreate();
    seqQueueOffer(seqListAddr,50);
    seqQueueOffer(seqListAddr,100);
    seqQueueOffer(seqListAddr,65);
    seqListDisplay(seqListAddr);
    printf("\n%d\n",seqQueuePoll(seqListAddr));
    printf("%d\n",seqQueuePoll(seqListAddr));
    printf("peek=%d\n",seqQueuePeek(seqListAddr));
    printf("isEmpty=%d\n",seqQueueIsEmpty(seqListAddr));
    printf("%d\n",seqQueuePoll(seqListAddr));
    printf("isEmpty=%d\n",seqQueueIsEmpty(seqListAddr));
    seqListDisplay(seqListAddr);
    printf("\n\n");
    SinglyIntNode *singlyListAddr= singlyIntNodeCreate();
    linkedQueueOffer(singlyListAddr,50);
    linkedQueueOffer(singlyListAddr,100);
    linkedQueueOffer(singlyListAddr,65);
    singlyIntNodeDisplay(singlyListAddr);
    printf("%d\n",linkedQueuePoll(singlyListAddr));
    printf("%d\n",linkedQueuePoll(singlyListAddr));
    printf("peek=%d\n",linkedQueuePeek(singlyListAddr));
    printf("isEmpty=%d\n",linkedIsEmpty(singlyListAddr));
    printf("%d\n",linkedQueuePoll(singlyListAddr));
    printf("isEmpty=%d\n",linkedIsEmpty(singlyListAddr));
    singlyIntNodeDisplay(singlyListAddr);

    return 0;
}