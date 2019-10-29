#ifndef ASSIGN_FAVOURITEGAMESLIST_H
#define ASSIGN_FAVOURITEGAMESLIST_H

#include "FavouriteGame.h"

class FavouriteGamesList {
private:
    int maxSize;
    int currSize;
    FavouriteGame *gameList;
public:
    FavouriteGamesList();
    void addItem(const FavouriteGame &fg);
    void printGames();
    int getCurrSize()const;
    bool searchGame(string title);
    void setCurrSize(int size);
    ~FavouriteGamesList();
};


#endif //ASSIGN_FAVOURITEGAMESLIST_H
