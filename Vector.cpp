#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size = " << v.size() << endl;
    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    pair<int, string> p;
    p = make_pair(2, "abc");
    cout << p.first << " " << p.second << endl;

    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);
     
}