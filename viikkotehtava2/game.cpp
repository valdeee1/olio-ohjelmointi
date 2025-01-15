#include "game.h"

using namespace std;


game::game(int num) {
    srand(time(0));
    maxNumber = num;
    cout<<"Peli aloitettu maksiminumerona "<<maxNumber<<endl;
}

game::~game()
{
    cout<<"Peli paattyi"<<endl;
}

void game::play()
{
    randomNumber = rand()%maxNumber;
    while(randomNumber != playerGuess)
    {
        cout<<"Arvaa luku 1-"<<maxNumber<<" valilta"<<endl;
        cin >> playerGuess;
        if(playerGuess > randomNumber){
            cout<<"Pienempi"<<endl;
            numOfGuesses++;
        }
        else if(playerGuess < randomNumber){
            cout<<"Suurempi"<<endl;
            numOfGuesses++;
        }
        else{
            numOfGuesses++;
            printGameResults();
        }

    }
}

void game::printGameResults()
{
    cout<<"Oikein"<<endl;
    cout<<"Vastaus oli: "<<randomNumber<<endl;
    cout<<"Arvausten maara: "<<numOfGuesses<<endl;
}
