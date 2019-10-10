
#include "seqlist.h"


int main(void) {
	SeqList *seqList = seqListCreate();
	for (int i = 0; i < 20; i++) {

		seqList->head[i] = 2 * i;
		seqList->length++;
	}
	printf("\n数据为:");
	seqListDisplay(seqList);
	printf("\n结尾追加元素100\n" );
	printf("删除第8个位置的数\n");
	printf("删除14\n");
	printf("数据倒序\n");
	printf("第4个位置的数前加个为200\n");
	printf("第5个位置的数改为300\n");

	seqListAdd(seqList, 100 );
	seqListDelete(seqList, 8);
	seqListDeleteElem(seqList, 14);
	seqListRevert(seqList);
	seqListInsert(seqList, 4, 200);
	seqListUpdate(seqList, 5, 300);
	seqListDisplay(seqList);

	printf("\n\n第%d的数是=%d\n", 5, seqList->head[5] );
	printf("\n");

}
