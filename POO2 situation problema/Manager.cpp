#include "Manager.h"

void Manager::add(Video* video)
{
    list->queueUp(video);
}

void Manager::place(int position, Video* video)
{
    list->add(position, video);
}

Video* Manager::get(int position)
{
    list->get(position);
}

void Manager::remove(int position, Video* video)
{
    list->remove(position, video);
}

int Manager::size()
{
    list->size();
}

void Manager::print()
{
    list->showVideo();
}
