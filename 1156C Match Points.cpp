#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	          "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
int main()
{
    ll m,n,k,l,r,z,cnt=0;
    cin>>n>>z;
    ll a[n+4];
    fr(i,n)cin>>a[i];
    asort(a);
    ll mid=n/2;
    ll j=mid;

    for(ll i=0;i<mid&&j<n;)
    {
    if(abs(a[i]-a[j])>=z)
    {
        i++,j++,cnt++;
    }
    else j++;
    }
    pfl(cnt);

}
