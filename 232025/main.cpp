#include <iostream>

int main()
{
    int n;
    std::string game;

    std::cin >> n;

    for(; n > 0; n--)
    {
        int m, Q = 0, C = 0;
        std::cin >> m;
        std::cin >> game;
        
        for(int i = 0; i < game.length(); i++)
        {
            if(game[i] == 'C')
                C++;
            if(game[i] == 'Q')
                Q++;

            if(Q >= 25 || C >= 25)
            {
                std::cout << ((Q >= 25) ? "Quera" : "CodeCup") << std::endl;  
                break;
            }
        }
    }

    return 0;
}