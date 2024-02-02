// hi!thanks for watching my code :)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
const int SIZE=1e2+9;

ll maax(ll num1,ll num2,ll num3)
{
    if(num1>=num2)num2=num1;
    if(num2>=num3)num3=num2;
    return num3;
}
ll miin(ll num1,ll num2,ll num3)
{
    if(num1<=num2)num2=num1;
    if(num2<=num3)num3=num2;
    return num3;
}
ll GCD(ll a, ll b)
{

    if(b == 0)
        return a;
    else
        return GCD(b, a % b);
}
ll MOD(ll num1,ll num2)
{
    ll Ans;
    Ans= (num1-((num1/num2)*num2));
    return Ans;
}
ll power (ll num,ll poww)
{
    ll anss=1;
    for(ll i=0; i<poww; i++)
    {
        anss*=num;
    }
    return anss;
}
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    ll l,r,num,pos=0;
    cin>>l>>r;
    num=l^r;
    while(num)
    {
        pos++;
        num=(num >> 1LL);
    }
    cout<<(1LL<<pos)-1LL<<endl;
    return 0;
}


//    ***********    THE END  ***********



