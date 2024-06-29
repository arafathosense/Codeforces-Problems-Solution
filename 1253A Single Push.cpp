//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
#define FASTREAD            ios_base::sync_with_stdio(0);cin.tie(nullptr);


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll cnt=0,ans=0,n,d=0;
        scl(n);
        ll  a[n], b[n];
        fr(i,n)cin>>a[i];
        fr(i,n)cin>>b[i];

        fr(i,n)
        {
            if(a[i] !=b[i]   and d!=b[i]-a[i])cnt++;
            d=b[i]-a[i];
            if(d<0){cnt=2;break;}
        }

        if(cnt<2 )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


