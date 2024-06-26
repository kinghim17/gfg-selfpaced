#include<bits/stdc++.h>
#define ll long long
using namespace std;

double getMed(vector<ll>a1, vector<ll>a2, ll n1, ll n2){
    if (n1 > n2) {
        swap(a1, a2);
        swap(n1, n2);
    }
	int begin1 = 0, end1 = n1;
	while(begin1 <= end1){
		int i1 = (begin1 + end1) / 2;
		int i2 = (n1 + n2 + 1) / 2 - i1;
		int min1 = (i1 == n1)?INT_MAX:a1[i1];
		int max1 = (i1 == 0)?INT_MIN:a1[i1 - 1];
		int min2 = (i2 == n2)?INT_MAX:a2[i2];
		int max2 = (i2 == 0)?INT_MIN:a2[i2 - 1];
		if(max1 <= min2 && max2 <= min1){
			if((n1 + n2) % 2 == 0)
				return ((double)max(max1, max2) + min(min1, min2)) / 2;
			else
				return (double)max(max1, max2);
		}
		else if(max1 > min2)
			end1 = i1 - 1;
		else 
			begin1 = i1 + 1;
	}
	return 0.0;
}
int main(){
    ll a,b,m,n,temp1,temp2;
    cin>>m>>n;
    vector<ll>v1;
    vector<ll>v2;
    for(ll i=0;i<m;i++){
      cin>>temp1;
      v1.push_back(temp1);
    }
    for(ll i=0;i<n;i++){
       cin>>temp2;
       v2.push_back(temp2);
    }
    cout<<getMed(v1,v2,m,n);
}
