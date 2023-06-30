#include<iostream>
#include<utility>
#include<map>
#include<iterator>
using namespace std;

void printMap(map<string, int> &m)
{
    cout << "Printed from printMap function : \n";
    for(auto & pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    map<string, int>  :: iterator it;
    cout << "printed from main : \n";
    for(it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    printMap(m);

    m.erase("abc");
    printMap(m);

    it = m.find("adf");
    cout << (*it).first << " "  << (*it).second << endl;

    return 0;
}