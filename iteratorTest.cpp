#include<iostream>
#include<vector>
#include<utility>
#include<iterator>
using namespace std;

int main()
{
    vector<int> v(10,7);
    for(int i = 0; i < 5; i++)
    {
        /*
        int x;
        cin >> x;
        v.push_back(x);
        */
       v[i] = i+1;
    }

    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << endl;
    }
}
