/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
                  Uday srinu  Cse@ MNNIT 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll          long long 
#define ull         unsigned long long
#define nl          '\n'
#define watch(x)    cerr<<(#x)<<"is"<<x<<nl;
#define fast        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fi(a,b)     for(int i=a; i<b; i++)
#define fri(a,b)    for(int i=a; i>b; i--)
#define fj(a,b)     for(int j=a; j<b; j++)
#define ffi(a,b)    for(int i=a;i*i<=b;i++)
#define mp          make_pair
#define ff          first 
#define ss          second
#define all(v)      (v).begin(),(v).end()
#define pb          push_back
#define pint        pair<int,int>
#define mint        map<int,int>
#define sint        set<int>
#define vint        vector<int>
#define tc          int t; cin>>t; while(t--)
#define MOD         1000000007
/*ll fastmodexpo(ll a,ll b,ll m)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=(res*a)%m;;
        }
        a=(a*a)%m;
        b=b>>1;
    }
    return res;
}*/

int main()
{   
    fast
    int  k,m,n,i;
    char c,j;
    tc
    {  
        cin>>n;
        int a[n];
        int s=0;
        fi(0,n){
            cin>>a[i];
            s+=a[i];
        }
        
        if((s>=0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

	return 0;
}