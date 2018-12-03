/*if sum of element dont divisible by 3 the answer is zero else i add element by element
and sum of them become equal the total sum divisible by 3
this one solution and complete this until the sum of element become 2* total sum divisible by 3 this Indicates the stripe Can be divided
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;
typedef bitset<15>mask;
#define F first
#define S second
ll n,m,x,y,z,k,sol,sum,ans,l,r,xx,yy,a[1000000],b[1000000];
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
    if(sum%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    sum/=3;
    for(int i=0;i<n-1;i++)
    {
        x+=a[i];
        if(x==2*sum)ans+=y;
        if(x==sum)y++;
    }
    cout<<ans<<endl;


    return 0;
}
