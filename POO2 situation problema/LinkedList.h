#include "StreamingInterface.h"
#include "Video.h"

#pragma once
class LinkedList : public StreamingInterface
{
protected:
    Video* first;
public:
    LinkedList() : first(0){}
    void queueUp(Video* video);
    void add(int position, Video* video);
    Video* get(int position);
    void remove(int position, Video* video);
    int size();
    void showVideo();
    void average();
};