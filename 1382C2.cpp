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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string a, b, s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>a>>b;
        vector<ll>v, v1;

        //First of all covert to one all of a  ( if we reversely look back we can form a )
        //So,  convert  b to all one then reverse ultimately converting a to b

        fr1(i , n-1) if(a[i] != a[i-1] )v.pb( i );

        fr1(i , n-1) if(b[i] != b[i-1] )v1.pb( i );

        if(a[n-1] != b[n-1] )v.pb(n);

        reverse(all(v1));

        ans=v.size()+v1.size();

        cout<<ans<<" ";

        fr(i , v.size())cout<<v[i]<<" ";
        fr(i , v1.size())cout<<v1[i]<<" ";
        pn;

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




