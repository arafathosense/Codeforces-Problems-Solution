//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define N 200006
ll calc ( ll n)
{
    return (n*(n+1))/2;
}

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,a, b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        scll(a, b);

        if(a>b)swap(a, b);
        ll dif=b-a;


        if(dif!=0)
        {
            n=1 , i=1;
            while(dif > calc(n) ) n++;
            while(dif%2  != calc(n)%2)n++;
            ans=n;
        }



        cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



