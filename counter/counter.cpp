#include <iostream>
#include <conio.h>

int main()
{
    int x = 0;

    while (x >= -1)
    {
        x = x+1;
        std::cout << x << std::endl;
        x++;

        if (_kbhit()) {
            std::cout << "Touche détectée ! Fin de la boucle." << std::endl;
            break; // Sortie de la boucle
        }
    }
    return 0;
}