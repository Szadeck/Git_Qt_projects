#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;
static unsigned int nb_ope(0);

unsigned int power_st(unsigned int x, unsigned int p)
{
    unsigned int nb_op(0);
    unsigned int res(x);

    for (unsigned int i(1); i < p; i++)
    {
        res *= x;
        nb_op++;
    }

    cout << "We used " << nb_op << " operations !" << endl;
    return res;
}

unsigned int power_op(unsigned int x, unsigned int p)
{

    if (p == 0)
        return 1;
    else if (p % 2 == 0)
    {
        unsigned int t = power_op(x, (p / 2));
        nb_ope++;
        return (t * t);
    }
    else
    {
        nb_ope++;
        return (x * power_op(x, (p - 1)));
    }

    return 0;
}

void Exercice_4()
{
    unsigned int x(2), p(458), res(0);

    // test standart
    res = power_st(x, p);
    cout << x << " exposed by " << p << " equals " << res << " !" << endl;
    // test opti
    res = power_op(x, p);
    cout << x << " exposed by " << p << " equals " << res << " !" << endl;
    cout << "We used " << nb_ope << " operations !" << endl;
}
