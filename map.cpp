#include <bits/stdc++.h>
using namespace std;
int main()
{

    // map<int, int> mp;   // it contains key value and map value and no two map values can have same key value...
    // mp.insert(pair<int, int>(1, 40));
    // mp.insert(pair<int, int>(2, 50));
    // mp.insert(pair<int, int>(3, 50));
    // mp.insert(pair<int, int>(4, 70));
    // mp.insert(pair<int, int>(5, 80));
    // mp.insert(pair<int, int>(5, 80));
    // mp.insert(pair<int, int>(6, 80));

    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    //     cout << " " << i->first << " " << i->second << "\n";
    // }

    // multimap it can store duplicates too

    multimap<int, int> mmp;
    for (int i = 1; i <= 5; i++)
    {
        mmp.insert({i, i * 10});
    }

    for (auto it = mmp.begin(); it != mmp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;

    cout << mmp.size();

    return 0;
}