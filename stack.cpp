#include <bits/stdc++.h>
using namespace std;

int main()
{

  stack<int> s;    //a non primitive linear data structure and is in ordered list and in this inerstion and deletion both takes place from top... it is known as Last-in-First-out(LIFO)....

  for (int i = 0; i <= 5; i++)
  {
    s.push(i);
  }
  cout << s.empty() << endl;
  s.pop();
  s.push(99);
  s.emplace(55);

  while (!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }
  cout << endl;

  cout << s.empty();

  return 0;
}