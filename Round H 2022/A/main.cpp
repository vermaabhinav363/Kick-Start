#include <bits/stdc++.h>
#define Mod(a,b) ((((a)%(b))+(b))%(b))
#define ll long long
#define vec vector<ll>
#define pb push_back
#define itrs set<ll>::iterator
#define itrv vector<ll>::iterator
#define mk make_pair
#define MAX2 9223372036854775806;
const int MOD = 1000000007;
const int MAX = 10000005;
//fill(arr, arr + size, value);
#define ff first
#define ss second
//printf("%.15f\n", float(x)/y);
//atoll( str.c_str() )
using namespace std;
using namespace std::chrono;
high_resolution_clock::time_point curTime() { return high_resolution_clock::now(); }

template<class T> T max(T a, T b, T c)
    {
        return max(a, max(b, c));
    }
bool prime[1000001];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
ll fact(ll n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}
//comb = fact(n) / (fact(r) * fact(n-r));
//per = fact(n) / fact(n-r);



/*
//---------sorting vector first in descending and second in ascending---------//
std::sort(vecx.begin(), vecx.end(),
  [](auto&& lhs, auto&& rhs){
    return lhs.first > rhs.first ||
      (lhs.first == rhs.first && lhs.second < rhs.second);
  });

*/
//<<setprecision(60)<<
#define sa(v) sort(v.begin(), v.end())
#define sd(v) sort(v.begin(),v.end(), greater<int>())
/*
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int mx = *max_element(a.begin(), a.end());
    int cmx = count(a.begin(), a.end(), mx);
    int k = count(a.begin(), a.end(), mx - 1);
*/
//count(s.begin(), s.end(), 'N') == 1 ? "NO\n" : "YES\n"
bool cfn(double a, double b)
{

    // Correct method to compare
    // floating-point numbers
    if (abs(a - b) < 1e-9) {
        return true;
    }
    else {
        return false;
    }
}
//Stay Calm
//Read Quest properly
//Check Corner Cases
int main()


{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    for(ll i= 1;i<=t;i++){
        ll n;
        ll l;
        cin>>l;
        cin>>n;
        ll arr[n];
        char crr[n];
        for(ll i =0;i<n;i++){
            cin>>arr[i]>>crr[i];
        }
        char dir;
        char lastDir = crr[0];
        ll dis = 0;
        ll count = 0;
        for(ll i =0;i<n;i++){
            if(lastDir == 'C'){
                dir = crr[i];
                if(dir == 'C'){
                    dis+= arr[i];
                    ll temp = dis;
                    count += temp/l;
                    dis = temp%l;
                }
                else{
                    ll temp1 = arr[i];
                    arr[i]-= (dis);
                    if(arr[i]<0){
                        dis = dis - temp1;
                    }
                    else{
                        dis = 0;
                        lastDir = 'A';
                        dis+= arr[i];
                        ll temp = dis;
                        count += temp/l;
                        dis = temp%l;
                    }
                }
            }
            else{
                dir = crr[i];
                if(dir == 'A'){
                    dis+= arr[i];
                    ll temp = dis;
                    count += temp/l;
                    dis = temp%l;
                }
                else{
                    ll temp1 = arr[i];
                    arr[i]-= (dis);
                    if(arr[i]<0){
                        dis = dis - temp1;
                    }
                    else{
                        dis = 0;
                        lastDir = 'C';
                        dis+= arr[i];
                        ll temp = dis;
                        count += temp/l;
                        dis = temp%l;
                    }
                }
            }


        }
        cout<<"Case #"<<i<<": "<<count<<"\n";
    }

 }

