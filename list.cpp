// lists are sequence containers it has non contigious memory allocation... it works botn on FIFO & LIFO...cc


#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l{9, 3, 2, 5, 7, 1, 8, 8, 4};
    // for (auto i = l.begin(); i != l.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    // l.unique();   // removes all duplicates
    //   for (auto i = l.begin(); i != l.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // l.clear();  // removes all elements
    //   for (auto i = l.begin(); i != l.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // list<int> m{11,12,13,14,15,16,17,18,19};
    // l.swap(m);     // swap element of one list with other
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    list<int> l1 = {10, 20, 30, 40};
    list<int> l2 = {50, 60, 70, 80};
    l2.merge(l1);      //merges two list

    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}