#include "LinkedList.h"

void LinkedList::queueUp(Video* video)
{
    if(first == 0)
    {
        first = video;
        first->setNext(0);
    }
    else
    {
        Video* temporal = first;
        while(temporal->getNext() != 0)
        {
            temporal = temporal->getNext();
        }
        temporal->setNext(video);
        video->setNext(0);
    }
}

void LinkedList::add(int position, Video* video)
{
    if (first == 0)
    {
        first = video;
        first->setNext(0);
    }
    else
    {
        Video* temporal = first;
        int count = 1;
        while(count != position-1 && temporal->getNext()!= 0)
        {
            count++;
            temporal = temporal->getNext();
        }
        video->setNext(temporal->getNext());
        temporal->setNext(video);
    }
}

Video* LinkedList::get(int position)
{
    int count = 1;
    Video* temp = first;
    while(count <= position)
    {
        temp = temp->getNext();
        count+=1;
    }
    return temp;
}

void LinkedList::remove(int position, Video* video)
{
    Video* temporal = first;
    int count = 1;

    while(count <= position-1)
    {
        temporal = temporal->getNext();
        count = count + 1;
    }
    temporal->setNext(temporal->getNext()->getNext());
}

int LinkedList::size()
{
    Video* temporal = first;
    int count = 1;

    while(temporal->getNext() != 0)
    {
        temporal = temporal->getNext();
        count = count + 1;
    }
    return count;
}

void LinkedList::showVideo()
{
    Video* temporal = first;
    while(temporal != 0)
    {
        cout << temporal->getName() << temporal->getType() << " ...... " << temporal->getStars() << endl;
        temporal = temporal->getNext();
    }
}

void LinkedList::average()
{
    Video* temporal = first;
    int acum = 0;
    int count = 0;
    float average;

    while(temporal != 0)
    {
        acum = acum + temporal->getStars();
        temporal = temporal->getNext();
        count = count + 1;
    }
    average = acum/count;
    cout << " calificación promedio de sus episodios es: " << average << endl;
}