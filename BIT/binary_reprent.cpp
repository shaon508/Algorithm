#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
const int SIZE=2e5+9;
vector<int>v[SIZE];
void decToBin(int num, int id)
{
    for (int i = 30; i >= 0; i--)
    {
        v[id].push_back(((num >> i) & 1));
    }
}
int main()
{
    int n;
    cin>>n;
    int arrayy[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>arrayy[i];
        decToBin(arrayy[i], i);
    }
    return 0;
}
