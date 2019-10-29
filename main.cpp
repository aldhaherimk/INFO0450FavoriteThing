#include <iostream>
#include "FavouriteGame.h"
#include "FavouriteGamesList.h"


using namespace std;

int main()
{
    FavouriteGamesList myGameList;
    int choice = 0;
    cout<<"     Welcome To Your Favourite Game List     "<<endl;
    do {
        cout<<"1. Add Item"<<endl;
        cout<<"2. Print Items"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Enter Choice:"<<endl;
        cin>>choice;
        if(choice == 1){
            cin.ignore();
            FavouriteGame myGame;
            string input;
            cout<<"Enter Game Title"<<endl;
            getline(cin,input);
            while(true){
                if(myGameList.searchGame(input)){
                    myGame.setTitle(input);
                    break;
                }else{
                    cout<<"Game with this title already Exists.Please Enter Game Title."<<endl;
                    getline(cin,input);
                }
            }
            
           cout<<"Enter Game Description:"<<endl;
           getline(cin,input);
           myGame.setDescription(input);
            
           cout<<"Enter Game GameStore:"<<endl;
           getline(cin,input);
           myGame.setGameStore(input);
            
           cout<<"Enter Game Type:"<<endl;
           getline(cin,input);
           myGame.setType(input);
           cout<<"Enter Game Proficiency (BEGGINER,INTERMEDIATE,PRO):"<<endl;
           getline(cin,input);
            while(true){
                if(input == "BEGGINER" || input == "INTERMEDIATE"|| input =="PRO"){
                    myGame.setProficiency(input);
                    break;
                }else{
                    cout<<"Please Enter Valid Proficiency Level.Enter Game Proficiency (BEGGINER,INTERMEDIATE,PRO):"<<endl;
                   getline(cin,input);
                }
            }
            
            myGameList.addItem(myGame);
        }else if(choice == 2){
            myGameList.printGames();
        }
    }while(choice !=3);
    return 0;
}