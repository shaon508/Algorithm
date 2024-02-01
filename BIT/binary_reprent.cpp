#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1009;
void print(int num)
{
    for(int i=10; i>=0; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    for(int i=0; i<=8; i++)
    {
        print(i);
    }
    return 0;
}
