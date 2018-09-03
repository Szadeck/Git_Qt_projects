#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;

std::vector<unsigned int> welcomePrint()
{
    cout << "Welcome to the sphinx's game !\n "
         << "You will be asked to choose a number and the Sphinx will try to find it as faster as he can.\n"
         << "But first, please enter the game's boundaries.\n"
         << "Limit minimum (not under 0) : ";
    std::vector<unsigned int> limits(3, 0);
    cin >> limits[0];
    cout << endl << "Limit maximum (not above 4 Billion) : ";
    cin >> limits[1];
    cout << endl << "Thanks, now please think about the number you want the Sphinx to guess.";
    cout << endl << "Press \'ok\' when you are ready to start or \'quit\' if you want to exit the game : ";
    string ready;
    do
        cin >> ready;
    while (ready.compare("ok") && ready.compare("quit"));
    if (ready.compare("ok") == 0)
        limits[2] = 1;
    else
        limits[2] = 0;
    return limits;
}

unsigned int findSolution(std::vector<unsigned int> limits)
{
    unsigned int solution(0), min(limits.at(0)), max(limits.at(1)), nbop(0);
    string newline;
    do
    {
        auto vtc = (max - min);
        if (vtc == 1 && min != limits.at(0))
        {
            solution = max;
            nbop++;
            cout << "This algo made " << nbop << " operations." << endl;
            return solution;
        }
        else
        {
            vtc /= 2;
            auto newLim = min + vtc;
            cout << "Is your value highter than " << newLim << " ? (yes/no)" << endl;
            do
                cin >> newline;
            while (newline.compare("yes") && newline.compare("no"));
            if (newline.compare("yes") == 0)
                min = newLim;
            else
                max = newLim;
            nbop++;
        }
    }
    while (min != max);
    cout << "This algo made " << nbop << " operations." << endl;
    return min;
}

void Exercice_3_dico()
{
    // explication du jeu, recuperation des limites et du nombre a deviner.
    auto limits = welcomePrint();
    if (limits.at(2) == 0)
    {
        cout << "See you for another game of Shinx !" << endl;
        return;
    }
    // boucles de devinettes
    auto solution = findSolution(limits);
    cout << endl << "The number you thought about is " << solution << " !!!" <<  endl;
    //fin du jeu, fermeture ou recommencer.
    cout << endl << "Do you want to retry ? (yes/no)" << endl;
    string retry;
    do
        cin >> retry;
    while (retry.compare("yes") && retry.compare("no"));
    if (retry.compare("yes") == 0)
        Exercice_3_dico();
    else
    {
        cout << "Bye bye then and see you again soon !" << endl;
        return;
    }

}
