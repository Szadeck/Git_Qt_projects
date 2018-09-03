#include <iostream>
#include <list>
#include <unordered_set>
#include <iterator>
#include <stack>
#include <vector>

using namespace std;

struct fifo_pile
{
private:
     stack<int> data;

public:
    int front(void)
    {
        return data.top();
    }

    void push_back(int newValue)
    {
        if (!data.empty())
        {
            stack<int> tempo;
            while (!data.empty())
            {
                tempo.push(data.top());
                data.pop();
            }
            data.push(newValue);
            while (!tempo.empty())
            {
                data.push(tempo.top());
                tempo.pop();
            }
        }
        else
            data.push(newValue);
    }

    void pop_front()
    {
        data.pop();
    }

    bool empty()
    {
        return data.empty();
    }
};

void testFIFOStack()
{
    struct fifo_pile myPile;
    stack<int> truepile;
    truepile.push(1);
    truepile.push(2);
    truepile.push(3);
    truepile.push(4);
    truepile.push(5);

    cout << "test FILO" << endl;

    while (!truepile.empty())
    {
        cout << "elem : " << truepile.top() << endl;
        truepile.pop();
    }

    myPile.push_back(1);
    myPile.push_back(2);
    myPile.push_back(3);
    myPile.push_back(4);
    myPile.push_back(5);

    cout << "test FIFO" << endl;

    while (!myPile.empty())
    {
        cout << "elem : " << myPile.front() << endl;
        myPile.pop_front();
    }
}

struct fifo_vector
{
private:
    vector<int> data;
    unsigned int start;
    unsigned int end;
    bool        first;

public:

    fifo_vector()
    {
        this->start = 0;
        this->end = 0;
        data.resize(10);
        first = true;
    }

    int front(void)
    {
        if (start != end)
            return data[start];
        return 0;
    }

    void push_back(int newValue)
    {
        if (first==true || (end < data.capacity() && end != start))
        {
            data[end] = newValue;
            end++;
            if (first == true)
                first = false;
        }
        else if (end == data.capacity())
        {
            end = 0;
            push_back(newValue);
        }
        else if (end == start)
        {
            //last thing
        }
    }

    void pop_front(void)
    {
        if (start != end && start < data.capacity())
            start++;
        else if (start == end)
            return;
        else if (start == data.capacity())
        {
            start = 0;
            pop_front();
        }
    }

    bool empty(void)
    {
        return (start == end);
    }

};

void testFIFOVector()
{
    fifo_vector myPile;
    stack<int> truepile;
    truepile.push(1);
    truepile.push(2);
    truepile.push(3);
    truepile.push(4);
    truepile.push(5);

    cout << "test FILO" << endl;

    while (!truepile.empty())
    {
        cout << "elem : " << truepile.top() << endl;
        truepile.pop();
    }

    myPile.push_back(1);
    myPile.push_back(2);
    myPile.push_back(3);
    myPile.push_back(4);
    myPile.push_back(5);

    cout << "test FIFO" << endl;

    while (!myPile.empty())
    {
        cout << "elem : " << myPile.front() << endl;
        myPile.pop_front();
    }
}

void Exercice_microsoft()
{
    //testFIFOStack();
    testFIFOVector();
}
