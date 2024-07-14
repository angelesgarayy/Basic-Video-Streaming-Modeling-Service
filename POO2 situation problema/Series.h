#include "Video.h"
#include "StreamingInterface.h"

#pragma once
class Series : public Video
{
    protected:
    StreamingInterface* episodeList;

    public:
    Series();
    Series(int id, string name, int length, string genre, int stars, string type);
    void addEpisode(Video* video);
    void printEpisodes();
    void averageEpisodes();
};