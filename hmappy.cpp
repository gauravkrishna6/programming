#include <bits/stdc++.h>
using namespace std;

bool comparison(const pair<long long int,long long int> &a,const pair<long long int,long long int> &b){
	if(a.first == b.first){
		return a.second < b.second;
	}
    return a.first<b.first;
}

int main(int argc, char const *argv[]){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	long long int n,m;
	cin >> n >> m;
	long long int a[n],b[n];
	long long int c[n];
	for(long long int i=0;i<n;i++){
		cin>> a[i];
	}
	for(long long int i=0;i<n;i++){
		cin >> b[i];
	}
	// for(long long int i=0;i<n;i++){
	// 	c[i] = a[i]*b[i];
	// }

	std::vector<pair<long long int ,long long int> > v;
	for(long long int i=0;i<n;i++){
		v.push_back(make_pair(a[i]*b[i],b[i]));
	}
	sort(v.begin(),v.end());

	// for(long long int i=0;i<n;i++){
	// 	cout << v[i].first << " "<< v[i].second << endl;
	// }

	while(m--){
		if(v[n-1].first >= v[n-2].first){
			v[n-1].first -= v[n-1].second;
		}
		else{
			sort(v.begin(), v.end());
			v[n-1].first -= v[n-1].second;
		}
		// for(long long int i=0;i<n;i++){
		// 	cout << v[i].first <<" ";
		// }
		// cout << endl;
	}
	sort(v.begin(), v.end());

	if(v[n-1].first >=0){
		cout << v[n-1].first<< endl;
	}else{
		cout << 0<< endl;
	}

	return 0;
}