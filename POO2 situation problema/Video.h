#include <iostream>
#include<string>
using namespace std;

#pragma once
class Video
{
protected:

    int id; //identificador
    string name; //nombre
    int length; //duracion
    string genre; //género
    int stars; //calificacion
    string type; // tipo (película o serie)
    Video* next;

public:

    Video();
    Video(int id, string name, int length, string genre, int stars, string type);

    void setId(int id);
    int getId();

    void setName(string name);
    string getName();

    void setLength(int length);
    int getLength();

    void setGenre(string genre);
    string getGenre();

    void setStars(int stars);
    int getStars();

    void setType(string type);
    string getType();

    void setNext(Video* next);
    Video* getNext();
};