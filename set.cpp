// set is a associative container in this elements are unique..values are stored in specific order....

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s = {1, 2, 3, 4, 5, 6};   //declaration of set

    // cout<<"integer set :"<<endl;
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    // cout<<endl;
    // cout<<"character set : "<<endl;

    // set<char> myset={'a','b','c','d'};
    // for (auto i = myset.begin(); i != myset.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    // cout<<endl;

    // set<string> newset={"this","is","Geeksforgeeks"};
    // for (auto i = newset.begin(); i != newset.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // set<int> s={1,2,3,4,5};
    // // cout<<s.size();   // returns no of elemnets in set
    // cout<<s.max_size()<<endl;   // return max elemnts that set can hold
    //       cout<<s.empty();      // returns set is empty or not

    // set<int> s;
    // s.insert(20);
    // s.insert(30);
    // s.insert(40);
    // s.insert(50);
    // s.insert(60);

    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // unordered set

    // unordered_set<int> s={4,2,3,1,9,6,7};
    // for(auto it=s.begin();it !=s.end();it++){
    //     cout<<*it<<" ";
    // }

    // unordered mutliset it can stores duplicates tooo...

    // unordered_multiset<int> s{1, 2, 3, 4, 4, 5, 6, 7};

    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // mutliset to stores duplicates too
    multiset<int> s{1, 2, 3, 4, 4, 5, 6, 7, 8};

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}