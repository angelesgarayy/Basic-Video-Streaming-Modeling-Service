#include "Video.h"

#pragma once
class Movie : public Video
{
    public:
    Movie(){}
    Movie(int id, string name, int length, string genre, int stars, string type);
};