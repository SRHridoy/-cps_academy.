#include"bits/stdc++.h"
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 2e5+123;

int main(){
    optimize();

    int x;
    cin >> x;
    if(x<3)cout << "GOLD" << endl;
    else if(x>=3 and x < 6)cout << "SILVER" << endl;
    else cout << "BRONZE" << endl;
}
