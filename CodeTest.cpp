
#include <iostream>
#include <memory>
#include <ostream>

#include "TestCodes/SmartPtrTest.h"
#include "TestCodes/STLContainer.h"
#include "TestPractice/BubbleSortPrac.h"
#include "TestPractice/LinkedListPrac.h"
#include "TestPractice/QuickSortPrac.h"

int main(int argc, char* argv[])
{

    //CutString cut_string("abc1Addfggg4556b",6);
    //ReverseString* tt = new ReverseString();
     /*char input[] = "-3a21";
     RawATOI t(input);*/
    //RawITOA t(-123);
    //delete tt;
    //ReverseLinkedNode linkNode;
    //SearchOneBit onebit(8);

    //ContinuesChar tt("aabbccccdddeeff");

    
    // BubbleSortPrac test;

    // STLContainer test;
    // SmartPtrTest test;
    // test.TestCode();

    LinkedListPrac list = LinkedListPrac();
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    list.printList();
    
    list.deleteNode(30);

    list.printList();
    
    return 0;
}
