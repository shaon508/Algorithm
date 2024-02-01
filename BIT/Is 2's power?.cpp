#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1009;
int main()
{
    int n;
    cin>>n;
    if(n&(n-1))cout<<"Not 2's power "<<endl;
    else cout<<"2's power"<<endl;
    return 0;
}
