#include <iostream>
#include <list>
#include <unordered_set>
#include <iterator>

using namespace std;

void printList(list<int> & listToPrint)
{
    cout << "Affichage de la liste :" << endl;
    list<int>::iterator it = listToPrint.begin();
    while (it != listToPrint.end())
    {
        cout << *it << endl;
        it++;
    }
}

int Unique(list<int> & listToParse)
{
    // checks
    if (listToParse.empty() == true)
        return 0;

    cout << "Recherche et suppression des doublons :" << endl;
    unordered_set<int> myset;
    auto it = listToParse.begin();
    while (it != listToParse.end())
    {
        auto pair_returned = myset.insert(*it);
        if (pair_returned.second == false)
        {
            cout << "Element doublon trouve :" << *it << endl;
            it = listToParse.erase(it);
        }
        else
            it++;
    }

    return 1;
}

unsigned int facto(unsigned int n)
{
    if (n <= 1)
        return 1;
    return (n * facto(n - 1));
}

unsigned int facto_terminale(unsigned int n, unsigned int acc = 1)
{
    if (n <= 1)
        return acc;
    return facto_terminale((n - 1), (n * acc));
}

int Biggest(list<int> & listToParse)
{
    cout << "Recherche de l'element le plus grand :" << endl;

    //Secure check
    if (listToParse.empty() == true)
        return -1;

    // Algo
    list<int>::iterator it = listToParse.begin();
    int biggest = *it;
    while (it++ != listToParse.end())
        if (*it > biggest)
            biggest = *it;

    // Affichage resultat
    cout << "..." << biggest << "..." << endl;
    return biggest;
}

void Exercice_1()
{
    /*
    int tabint[20] = {42,2,65,42,87,235,98,712,65,114,123,56,42,1245,698,32,98,65,114,2};
    list<int> malist(tabint, tabint+sizeof(tabint)/sizeof(int));
    printList(malist);
    int biggest = Biggest(malist);
    Unique(malist);
    printList(malist);
*/
    auto n = facto_terminale(8);
    std::cout << "Final n value " << n << std::endl;
}


