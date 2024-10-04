#include <iostream>
#include <string>
#include <cstdlib>

int CasinoNumberGuessingGame(){

    //all variables 
    int initialamount;
    int guessednumber;



    // rules for the game
    std::cout<<"Casino Number Guessing Game Rules : "<<std::endl;
    std::cout<<"1.Player shuold deposits an initial amount to start playing game."<<std::endl;
    std::cout<<"2.He guesses a number between 1 to 10 and enters betting amount."<<std::endl;
    std::cout<<"3.If he wins he will get 10 times of money he bets."<<std::endl;

    // user input 
    std::cout<<"Enter the initial amount : "<<std::endl;
    std::cin>>initialamount;
    std::cout<<"Enter number between 1 to 10 : "<<std::endl;
    std::cin>>guessednumber;
    std::cout<<""<<std::endl;


    
    return 0;
}
