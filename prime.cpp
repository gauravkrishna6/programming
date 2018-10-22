#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n==2){
		return true;
	}
	else{
		int z = ceil(sqrt(n));
		for(int i=2;i<=z;i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
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
	cin>> t;
	while(t--){
		int n;
		int dig;
		cin >> n;
		int ans=1;
		if(n==1){
			ans =0;
		}
		else{
			if(isprime(n)){
				while(n>0){
					dig = n%10;
					if(dig==2 || dig==3 || dig==5 || dig==7){
						n= n/10;
					} 
					else{
						ans = 0;
						break;
					}
				}
			}
			else{
				ans =0;
			}
		}
		if(ans==1){
			cout << "YES" <<endl;
		}
		else{
			cout << "NO"<< endl;
		}

	}
	return 0;
}