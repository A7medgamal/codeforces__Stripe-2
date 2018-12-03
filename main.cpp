#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
typedef bitset<15>mask;
#define F first
#define S second
ll n,m,x,y,z,k,sol,sum,ans,l=-1e17,r,xx,yy,a[1000000],b[1000000],mem[200000][5];
vector<ll>v1;
vector<ll>v2;
pair<ll,pair<ll,ll> >pp[1000000];
pair<ll,ll>p[1000000];
map<ll,ll>ma;
string s1,s2,s;
char c;

int main()
{
//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i],sum+=a[i];
    if(abs(sum)%3==0)
    {
        y=sum/3;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                v1.push_back(0);
                continue;
            }
            if(y>=0)
            {
                if(l>y)
                {
                    cout<<0<<endl;
                    return 0;
                }
                else if(l<y)
                {
                    if(l==-1e17)
                    l=a[i];
                    else l+=a[i];
                    if(l==y)
                    {
                        v1.push_back(l);
                    l=-1e17;
                    }
                }
            }
            else
            {
                 if(l<y)
                {
                    cout<<0<<endl;
                    return 0;
                }
                 else if(l>y)
                {
                    if(l==-1e17)
                    l=a[i];
                    else l+=a[i];
                    if(l==y)
                    {
                        v1.push_back(l);
                    l=-1e17;
                    }
                }
            }
        }
    }
    else {

        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<v1.size();i++)
      //  cout<<v1[i]<<" ";
    memset(mem,-1,sizeof mem);
    cout<<dp()<<endl;

    return 0;
}
