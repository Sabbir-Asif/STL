#include<iostream>
#include<vector>
#include<iterator>
#include<utility>
using namespace std;

int main()
{
    vector<pair<int, int> > vp;

    for(int i = 0; i < 5; i++)
    {
        vp.push_back(make_pair(i, i+1));
    }
    
    vector<pair<int, int> > :: iterator it;

    for(it = vp.begin(); it != vp.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}