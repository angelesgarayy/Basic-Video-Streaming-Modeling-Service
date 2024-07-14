#include<iostream>
#include<string>
using namespace std;

#include "StreamingInterface.h"
#include "LinkedList.h"
#include "Manager.h"
#include "Movie.h"
#include "Series.h"
#include "Episode.h"

int main()
{
    Manager m;
    Movie harry(1, "Harry Potter y el Cáliz de Fuego", 154, "Fantasia", 5, " (P)");
    Movie theGiver(2, "The Giver", 100, "Ciencia Ficción", 4, " (P)");
    Movie bigHero6(3, "Big Hero 6", 108, "Animada", 5, " (P)");
    Movie spiderwick(4, "Las Crónicas de Spiderwick", 147, "Fantasia", 5, " (P)");
    Movie toyStory(5, "Toy Story", 81, "Toy Story", 5, " (P)");

    Series loki(6, "Loki", 50, "Super héroes", 5, " (S)");
    Episode loki1(7, "Loki Capitulo 1", 50, "Super héroes", 5, " (S)");

    Series teenWolf(8, "Teen Wolf", 4, "Sobrenatural", 4, " (S)");
    Episode teenWolf1(9, "Teen Wolf Capitulo 1", 44, "Sobrenatural", 4, " (S)");
    Episode teenWolf2(10, "Teen Wolf Capitulo 2", 45, "Sobrenatural", 3, " (S)");
    Episode teenWolf3(11, "Teen Wolf Capitulo 3", 42, "Sobrenatural", 5, " (S)");
    Episode teenWolf4(12, "Teen Wolf Capitulo 4", 42, "Sobrenatural", 4, " (S)");
    Episode teenWolf5(13, "Teen Wolf Capitulo 5", 44, "Sobrenatural", 4, " (S)");

    m.add(&harry);
    m.add(&theGiver);
    m.add(&bigHero6);
    m.add(&spiderwick);
    m.add(&toyStory);
    m.add(&loki);
    loki.addEpisode(&loki1);
    m.add(&teenWolf);
    teenWolf.addEpisode(&teenWolf1);
    teenWolf.addEpisode(&teenWolf2);
    teenWolf.addEpisode(&teenWolf3);
    teenWolf.addEpisode(&teenWolf4);
    teenWolf.addEpisode(&teenWolf5);

    m.print();
    loki.printEpisodes();
    teenWolf.printEpisodes();

    cout << "Teen Wolf"; teenWolf.averageEpisodes();

    cout << "El género de Teen Wolf es: " << teenWolf.getGenre() << endl;
    cout << "El id de Teen Wolf es: " << teenWolf.getId() << endl;
    cout << "La duración del capítulo 1 de Teen Wolf es: " << teenWolf1.getLength() << endl;
}