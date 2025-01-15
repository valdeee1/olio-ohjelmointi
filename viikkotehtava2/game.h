#ifndef GAME_H
#define GAME_H
#include <ctime>
#include <cstdlib>
#include <iostream>
class game
{
public:
    game(int);
    ~game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses=0;
    void printGameResults();
};

#endif // GAME_H
