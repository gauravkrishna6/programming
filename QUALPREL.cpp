#include<bits/stdc++.h>
using namespace std;
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
		int n,k;
		cin >> n >> k;
		int scores[n];
		for (int i = 0; i < n; ++i){
			cin >> scores[i];

		}
		sort(scores, scores+n, greater<int>());
		int count =k;
		int cutoff= scores[k-1];
		for(int i=k;i<n;i++){
			if(scores[i]==cutoff){
				count++;
			}
			else{
				break;
			}
		}
		cout << count << endl;

	}
	return 0;
}