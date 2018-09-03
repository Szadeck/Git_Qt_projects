#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


// DESIGN PATTERN OBSERVER START

class IObserver
{
public:
    virtual ~IObserver() {}
    virtual void notify() = 0;
};

class IObservable
{
public:
    virtual ~IObservable() {}
    virtual void subsribe(IObserver * new_observer) = 0;
    virtual void unsubsribe(IObserver * observer) = 0;

};

class postal_box : public IObservable
{
    list<IObserver*> to_call_back;

public:
    virtual ~postal_box() {}
    virtual void subsribe(IObserver * new_observer)
    {
        this->to_call_back.push_front(new_observer);
    }

    virtual void unsubsribe(IObserver * observer)
    {
        this->to_call_back.remove(observer);
    }

    void fill()
    {
        for_each(this->to_call_back.begin(), this->to_call_back.end(),
                 [] (IObserver * observer) {observer->notify();});
    }
};

class postal_man : public IObserver
{
    string name;

public:
    virtual ~postal_man() {}
    postal_man(const string new_name) : name(new_name)
    {}

    virtual void notify()
    {
        cout << this->name << " has been notified by observer !" << endl;
    }
};

void    dp_observateur_test()
{
    postal_box Montsoult_box;
    postal_man george("george");
    postal_man henri("henri");

    Montsoult_box.subsribe(&george);
    Montsoult_box.subsribe(&henri);

    Montsoult_box.fill();
    Montsoult_box.unsubsribe(&henri);
    Montsoult_box.fill();

}

// DESIGN PATTERN OBSERVER END


void Exercice_6_dp()
{
    // Exemple Design Pattern : Observateur
    dp_observateur_test();
}
