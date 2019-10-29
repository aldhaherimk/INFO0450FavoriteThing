#ifndef ASSIGN_FAVOURITEGAMES_H
#define ASSIGN_FAVOURITEGAMES_H

#include <iostream>
#include <string>

using namespace std;

class FavouriteGame{
private:
    string title;
    string description;
    string gameStore;
    string type;
    string proficiency;
public:
    FavouriteGame();
    void setTitle(string title);
    void setDescription(string desc);
    void setGameStore(string gs);
    void setType(string type);
    void setProficiency(string proficiency);
    string getTitle()const;
    string getDescription()const;
    string getGameStore()const;
    string getType()const;
    string getProficiency()const;
    friend ostream & operator << (ostream &os, const FavouriteGame & fg);

};


#endif
