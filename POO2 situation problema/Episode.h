#include "Video.h"

#pragma once
class Episode : public Video
{
    public:
    Episode();
    Episode(int id, string name, int length, string genre, int stars, string type);   
};
