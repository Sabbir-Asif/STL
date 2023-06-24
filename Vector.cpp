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

    vector<int> v(5, 3);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);   // O(1)
    }

    vector<int> v2 = v;  // O(n)
    v2.push_back(10);
    printVec(v);
    printVec(v2);
     
}