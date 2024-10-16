#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    LinkedList::head_ = 0;
    LinkedList::size_ = 0;
}

LinkedList::LinkedList(char char_array[]){
    if (char_array[0] != '\0'){
        LinkedList::head_ = new LLNode(char_array[0]);
        size_++;

        while (char_array[size_] != '\0'){
            LLNode* new_node = new LLNode(char_array[size_]);
            size_++;
        }
    }
    else{
        // Call default constructor to set the head and size to 0 if the given string is empty.
        LinkedList();
    }
}