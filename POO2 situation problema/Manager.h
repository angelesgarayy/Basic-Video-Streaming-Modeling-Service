#include <string>
#include <iostream>
using namespace std;

#include "StreamingInterface.h"
#include "LinkedList.h"

#pragma once
class Manager 
{
    protected:
    StreamingInterface* list;

    public:
    Manager() : list(new LinkedList){}
    void add(Video* video);
    void place(int position, Video* video);
    Video* get(int position);
    void remove(int position, Video* video);
    int size();
    void print();
};
