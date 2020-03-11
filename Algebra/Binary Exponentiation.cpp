/*******Bismillahir-Rahmanir-Rahim**********/
/*
Name         : Abu Rifat Muhammed Al Hasib
Institution  : University of Barisal, Bangladesh
Github       : abu-rifat
Codeforces   : AbuRifatMuhammed
AtCoder      : aburifat
codechef     : aburifat
SPOJ         : abu_rifat
UvaOJ        : aburifat
DevSkill     : abu_rifat
lightoj      : Abu Rifat Muhammed Al Hasib
facebook     : https://www.facebook.com/a.r.m.al.hasib/
linkedin     : https://www.linkedin.com/in/abu-rifat-534258142/
Email        : rifat.cse4.bu@gmail.com, armalhasib@gmail.com
*/

/*
Topic        : Binary Exponentiation
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long


long long binpow(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ///Find the value of a^n in log(n) time
    ll a,n;
    cin>>a>>n;
    ll ans=binpow(a,n);
    cout<<ans<<endl;
    return 0;
}


/***********Alhamdulillah***********/