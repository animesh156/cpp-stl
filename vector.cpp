#include <bits/stdc++.h>
using namespace std;
int main()
{
    // simple vector
    // vector<int> v{1, 2, 3, 4, 5};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // push and pop
    // vector<int> w;
    // w.push_back(2);  // insert element at last position
    // w.push_back(24);
    // w.push_back(25);
    // w.push_back(26);
    // w.push_back(28);
    // for (int i = 0; i < w.size(); i++)
    // {
    //     cout<<w[i]<<" ";
    // }
    // w.pop_back();  //removes elemnet from last position
    // w.pop_back();
    // for (int i = 0; i < w.size(); i++)
    // {
    //     cout<<w[i]<<" ";
    // }

    //    int t= w.size();  // gives no elements in vector

    //    cout<<t;

    vector<int> v{4, 6, 2, 1, 3, 9, 5};

    sort(v.begin(), v.end());          // sort in ascending order

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());   // sort in descending order

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}