#include <iostream>
#include "FavouriteGamesList.h"

using namespace std;

FavouriteGamesList::FavouriteGamesList() {
    this->maxSize = 100;
    this->currSize = 0;
    this->gameList = new FavouriteGame[this->maxSize];
}

void FavouriteGamesList::addItem(const FavouriteGame & fg) {
    if(this->getCurrSize() < this->maxSize){
        this->gameList[this->getCurrSize()].setTitle(fg.getTitle());
        this->gameList[this->getCurrSize()].setDescription(fg.getDescription());
        this->gameList[this->getCurrSize()].setGameStore(fg.getGameStore());
        this->gameList[this->getCurrSize()].setType(fg.getType());
        this->gameList[this->getCurrSize()].setProficiency(fg.getProficiency());
        this->setCurrSize(1);
    }else{
        cout<<"Game List Is Full cannot Add More Games."<<endl;
    }
}

void FavouriteGamesList::printGames() {
    for(int i=0;i<this->getCurrSize();i++){
        cout<<"Game NO:   "<<i<<" is:"<<endl;
        cout<< gameList[i];
    }
}

FavouriteGamesList::~FavouriteGamesList() {
    delete []this->gameList;
}

int FavouriteGamesList::getCurrSize() const {
    return this->currSize;
}

void FavouriteGamesList::setCurrSize(int size) {
    this->currSize = this->currSize+size;
}

bool FavouriteGamesList::searchGame(string title) {
    for(int i=0;i<this->getCurrSize();i++){
        if(this->gameList[i].getTitle() == title)
            return false;
    }
    return true;
}
