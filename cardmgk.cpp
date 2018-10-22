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
		int n ;
		cin>> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int b_point =0;
		int l1,r1,l2,r2;
		l1 = 0;
		r2 = n-1;
		bool possible = true;
		for(int i=0;i<n-1;i++){
			if(a[i] > a[i+1]){
				b_point++;
				if(b_point==1){
					r1 = i;
					l2 = i+1;
				}
				// else if(b_point ==2){
				// 	r2 = i;
				// }
				else if(b_point > 1){
					possible  = false;
					break;
				}
			}				
		}
		if(b_point ==0){
			cout << "YES"<< endl;
		}
		else{
			if(possible){
				if(a[r2] <= a[l1]){
					;
				}
				else{
					possible = false;
					for(int i=l1;i<r1;i++){
						if(a[i]<=a[l2] && a[i+1]>=a[r2]){
							possible = true;
							break;
						}
					}
				}
			}
			if(possible){
				cout << "YES" << endl;
			}
			else{
				cout << "NO"<< endl;
			}
		}
	}
	return 0;
}