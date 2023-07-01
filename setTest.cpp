#include<iostream>
#include<set>
#include<utility>
#include<iterator>
using namespace std;

void printSet(set<string> &s)
{
    for(string value : s)
    {
        cout << value << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    set<string> s;
    for(int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        s.insert(input);
    }

    set<string> :: iterator it;

    cout << "size : " << s.size() << endl;
    for(it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    printSet(s);

    return 0;
}
