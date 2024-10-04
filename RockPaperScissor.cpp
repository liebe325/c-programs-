#include <iostream>
#include <string>
#include <cstdlib>

int RockPaperScissor()
{

    // var

    std::string userinput;

    // random word

    const std::string randomvar[3] = {"Rock", "Paper", "Scissor"};
    std::string randomword = randomvar[rand() % 3];

    // getting input

    std::cout << "choice anyone of give below  " << std::endl;
    std::cout << "Rock Paper Scissor" << std::endl;
    std::cin >> userinput;

    // output

    if (randomword == userinput)
    {
        std::cout << "your a winner " << std::endl;
    }
    else{
        std::cout << "you lossed the game " << std::endl;
    };

    return 0;
}
