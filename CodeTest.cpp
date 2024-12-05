
#include <iostream>
#include <memory>
#include <ostream>

#include "Programmers/BFSPrac/BFSPrac.h"
#include "Programmers/Rhombus/Rhombus.h"
#include "Programmers/TransportNumber/TransportNumber.h"
#include "Programmers/TriSnail/TriSnail.h"
#include "TestCodes/SmartPtrTest.h"
#include "TestCodes/STLContainer.h"
#include "TestPractice/BubbleSortPrac.h"
#include "TestPractice/ContinuesChar.h"
#include "TestPractice/LinkedListPrac.h"
#include "TestPractice/QuickSortPrac.h"
#include "TestPractice/RawITOA.h"
#include "TestPractice/ReclusiveSumN.h"
#include "TestPractice/ReverseString.h"

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

    //ContinuesChar tt("aabbccccdddeeff\0");

    
    // BubbleSortPrac test;

    // STLContainer test;
    // SmartPtrTest test;
    // test.TestCode();

    // LinkedListPrac list = LinkedListPrac();
    // list.append(10);
    // list.append(20);
    // list.append(30);
    // list.append(40);
    //
    // list.printList();
    //
    // list.deleteNode(30);
    //
    // list.printList();

    
    // RawITOA test(1234);
    // char buffer[100];
    // test.solution4(1234,buffer,100,10);

    // ReclusiveSumN N(3);

    //TransportNumber temp(10,40,5);
    // TriSnail t;
    // auto v = t.GetTriSnail(4);
    //
    // for (auto vv : v)
    // {
    //     cout << vv << " " << endl;
    // }
    Rhombus t;
    auto v = t.solution(3);
    for (auto vv : v)
    {
        cout << vv << " " << endl;
    }
    return 0;
}
int temp(const LinkedListPrac& linkedList)
{
    linkedList.head;
    return 0;
}

