#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define WL(t) while(t --)
#define runtime() ((double)clock() / CLOCKS_PER_SEC)
#define inrange(i,a,b) ((i>=min(a,b)) && (i<=max(a,b)))
# define l long
#define ll long long
#define llu unsigned long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%ld",&x)
#define sll(x)	scanf("%lld",&x)
#define sllu(x)	scanf("%llu",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%ld",x)
#define pll(x)	printf("%lld",x)
#define pllu(x)	printf("%llu",x)
#define ps(s)	printf("%s",s)
#define nn '\n'
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define SQR(n) ( n * n )
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

const int mod = 1'000'000'007;
const int MAXN = 1000005;
//=======================

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, k = 100005, temp = 0;
    cin >> n >> m;
    int x[m], b;
    bool flag;
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    sort (x, x + m, greater<int>());
    for (int i = 0; i < m; i++)
    {
        temp = 0;
        b = n - 1;
        int j = i;
        flag = false;
        while(b-- && i < m - n + 1)
        {
            temp += (x[j] - x[j + 1]);
            //cout << temp << endl;
            flag = true;
            j++;
        }
        //cout << temp << endl;
        if (flag) k = min(temp, k);
        //cout << x[i];
    }
    cout << k;
    return 0;
}
