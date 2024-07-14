#include "Series.h"
#include "LinkedList.h"

Series::Series() : episodeList(new LinkedList){}

Series::Series(int id, string name, int length, string genre, int stars, string type) : 
Video(id, name, length, genre, stars, type), episodeList(new LinkedList){}

void Series::addEpisode(Video* video)
{
    episodeList->queueUp(video);
}

void Series::printEpisodes()
{
    episodeList->showVideo();
}

void Series::averageEpisodes()
{
    episodeList->average();
}