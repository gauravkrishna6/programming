#include <bits/stdc++.h>
using namespace std;

long long int max_ind(long long int c[],long long int b[],long long int n){
	long long int max = 0;
	for(long long int i=0;i<n;i++){
		if(c[i] > c[max]){
			max = i;
		}
		else if(c[i]==c[max]){
			if(b[i]>b[max]){
				max =i;
			}
		}
	}
	return max;
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
	for( long long int i=0;i<n;i++){
		cin>> a[i];
	}
	for( long long int i=0;i<n;i++){
		cin >> b[i];
	}
	for( long long int i=0;i<n;i++){
		c[i] = a[i]*b[i];
	}

	long long int max;

	while(m--){
		max = max_ind(c,b,n);
		c[max] -= b[max];
			
	}

	max = max_ind(c,b,n);
	if(c[max]<0){
		cout << 0<< endl;
	}else{
		cout << c[max]<< endl;
	}

	return 0;
}