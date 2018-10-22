#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
	if(a.second == b.second){
		return (a.first < b.first);
	} 
    return (a.second < b.second); 
} 

int main(int argc, char const *argv[]){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	//========================================
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n>>m;
		int mat[n][m];
		int zr;
		std::vector<pair<int ,int>> v;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> mat[i][j];
			}
		}
		for(int i=0;i<n;i++){
			zr=0;
			for(int j=0;j<m;j++){
				if(mat[i][j]==0){
					zr++;
				}
			}
			v.push_back(make_pair(i+1,zr));

		}
		sort(v.begin(),v.end(),comp);
		for(int i=0;i<n;i++){
			cout << v[i].first<< " ";
		}
		cout << endl;
	}
	return 0;
}