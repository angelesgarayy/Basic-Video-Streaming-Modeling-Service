#include "Video.h"

Video::Video(){}

Video::Video(int id, string name, int length, string genre, int stars, string type) : 
id(id), name(name), length(length), genre(genre), stars(stars), type(type) {}

void Video::setId(int id)
{
    id = id;
}

int Video::getId()
{
    return id;
}


void Video::setName(string name)
{
    name = name;
}

string Video::getName()
{
    return name;
}


void Video::setLength(int length)
{
    length = length; 
}

int Video::getLength()
{
    return length;
}


void Video::setGenre(string genre)
{
    genre = genre;
}

string Video::getGenre()
{
    return genre;
}


void Video::setStars(int stars)
{
    stars = stars;
}

int Video::getStars()
{
    return stars;
}


void Video::setType(string type)
{
    type = type;
}

string Video::getType()
{
    return type;
}


void Video::setNext(Video* next)
{
    this->next = next;
}

Video* Video::getNext()
{
    return next;
}