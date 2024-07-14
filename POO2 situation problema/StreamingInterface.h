#include "Video.h"
#pragma once

class StreamingInterface
{
    public:
    virtual void queueUp(Video* video) = 0;
    virtual void add(int position, Video* video) = 0;
    virtual Video* get(int position) = 0;
    virtual void remove(int position, Video* video) = 0;
    virtual int size() = 0;
    virtual void showVideo() = 0;
    virtual void average() = 0;
};