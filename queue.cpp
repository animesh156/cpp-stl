// a linear list of elements in which deletion takes place at front side and insertion at rear side... First In First Out(FIFO).....

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // queue<int> q;

    // for (int i = 0; i <= 5; i++)
    // {
    //     q.push(i);
    // }
    // cout << q.size() << endl;
    // q.pop();
    // q.push(99);

    // while (!q.empty())
    // {
    //     cout << " " << q.front();
    //     q.pop();
    // }

    // Deque in this insertion and deletion both takes place from either front or rear...

    // deque<int> dq;

    // for (int i = 0; i <= 5; i++)
    // {
    //     dq.push_front(i);
    // }
    // dq.pop_back();
    // dq.pop_front();

    // for (auto it = dq.begin(); it != dq.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // priority queue

    priority_queue<int> pq;

    for (int i = 0; i <= 5; i++)
    {
        pq.push(i);
    }

    while (!pq.empty())
    {
        cout << pq.top() << "\n";
        pq.pop();
    }

    return 0;
}