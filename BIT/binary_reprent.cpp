#include<bits/stdc++.h>
using namespace std;
void decTObin(int num)
{
    // num is 64 to bit integer than start loop from 63
    for(int i=31;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    int num;
    cin>>num;
    decTObin(num);
    return 0;
}
