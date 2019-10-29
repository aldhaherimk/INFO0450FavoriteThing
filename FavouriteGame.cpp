#include <string>
#include "FavouriteGame.h"

using namespace std;

FavouriteGame::FavouriteGame() = default;

void FavouriteGame::setTitle(string title) {
    this->title = title;
}

void FavouriteGame::setDescription(string desc) {
    this->description =desc;
}

void FavouriteGame::setGameStore(string gs) {
    this->gameStore = gs;
}

void FavouriteGame::setType(string type) {
    this->type = type;
}

void FavouriteGame::setProficiency(string proficiency) {
    this->proficiency = proficiency;
}

string FavouriteGame::getTitle() const{
    return this->title;
}

string FavouriteGame::getDescription() const{
    return this->description;
}

string FavouriteGame::getGameStore() const{
    return this->gameStore;
}

string FavouriteGame::getType() const{
    return this->type;
}

string FavouriteGame::getProficiency() const{
    return this->proficiency;
}

ostream & operator<<(ostream &os, const FavouriteGame &fg) {
    os<<"           Title:    "<<fg.getTitle()<<"                 "<<endl;
    os<<"Description:         "<<fg.getDescription()<<"           "<<endl;
    os<<"Game is offered by:  "<<fg.getGameStore()<<"             "<<endl;
    os<<"GameType is:         "<<fg.getType()<<"                  "<<endl;
    os<<"Proficiency Level is "<<fg.getProficiency()<<"           "<<endl;
    return os;
}