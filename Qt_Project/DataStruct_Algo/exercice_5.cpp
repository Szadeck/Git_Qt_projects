#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <list>
#include <iterator>

using namespace std;

struct binary_list_tree
{
    vector<int> root;
    binary_list_tree * leaf_left;
    binary_list_tree * leaf_right;

    binary_list_tree(size_t size) : root(size, -1), leaf_left(nullptr), leaf_right(nullptr)
    {
    }

};

void fusionTri(binary_list_tree * tree, int * tab, size_t size)
{
    if (size == 1)
    {
        tree->root[0] = *tab;
    }
    else
    {
        // step 1, divide, fill the leaf
        size_t leftSize = size/2;
        size_t rightSize = size - leftSize;
        tree->leaf_left = new binary_list_tree(leftSize);
        tree->leaf_right = new binary_list_tree(rightSize);
        fusionTri(tree->leaf_left, tab, leftSize);
        fusionTri(tree->leaf_right, tab+leftSize, rightSize);

        // step 2, fusion, fill the roots
        unsigned int it_left(0);
        unsigned int it_right(0);
        unsigned int it_root(0);
        while (it_left != leftSize || it_right != rightSize)
        {
            if (it_right == rightSize && it_left != leftSize)
            {
                tree->root[it_root] = tree->leaf_left->root[it_left];
                it_left++;
            }
            else if (it_right != rightSize && it_left == leftSize)
            {
                tree->root[it_root] = tree->leaf_right->root[it_right];
                it_right++;
            }
            else if (tree->leaf_left->root[it_left] <= tree->leaf_right->root[it_right])
            {
                tree->root[it_root] = tree->leaf_left->root[it_left];
                it_left++;
            }
            else if (tree->leaf_right->root[it_right] <= tree->leaf_left->root[it_left])
            {
                tree->root[it_root] = tree->leaf_right->root[it_right];
                it_right++;
            }
            it_root++;
        }
    }
}

void printTree(binary_list_tree * tree)
{
    if (tree->leaf_left != nullptr)
        printTree(tree->leaf_left);
    if (tree->leaf_right != nullptr)
        printTree(tree->leaf_right);
    if (tree->root.front() != -1)
        cout << tree->root.front() << endl;
}

void printVector(vector<int> vec)
{
    cout << "vector print" << endl;
    for (auto it = vec.begin(); it != vec.end(); it++)
        cout << *it << endl;
}

void Exercice_5()
{
    int intTab[15] = { 5, 10, 47, 96, 36, 71, 179, 876, 25, 632, 0, 487, 66, 329, 999};
    binary_list_tree * tree = new binary_list_tree(15);

    fusionTri(tree, &intTab[0], 15);
    for (int i = 0; i<15; i++)
        cout << intTab[i] << endl;

    cout << endl << endl;

    //printVector(tree->root);

    auto it = tree->root.begin();
    unsigned int tabIt(0);
    while (it != tree->root.end() && tabIt < 15)
    {
        intTab[tabIt] = *it;
        tabIt++;
        it++;
    }

    for (int i = 0; i<15; i++)
        cout << intTab[i] << endl;
}
