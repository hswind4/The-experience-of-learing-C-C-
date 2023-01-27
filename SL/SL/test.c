#include"List.h"

void test1()
{
    LTNode* plist = ListInit();
    ListPushBack(plist, 1);
    ListPushBack(plist, 2);
    ListPushBack(plist, 3);
    ListPushBack(plist, 4);
    ListPrint(plist);
    ListPopBack(plist);
    ListPrint(plist);
    ListPushFront(plist, 1);
    ListPushFront(plist, 2);
    ListPushFront(plist, 3);
    ListPushFront(plist, 4);
    ListPrint(plist);
    //ListInsert(plist, 10); // Î²²å
    //ListPrint(plist);
    //ListInsert(plist->next, 8); // Í·²å
    //ListInsert(plist->next, 7);
    //ListPrint(plist);

}


int main()
{
    test1();
    

    return 0;
}