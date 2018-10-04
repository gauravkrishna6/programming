#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	    int N,S;
	    int i=0,j=0;
	    cin >> N >> S;
		unsigned long int a[N+1];
	    for(int i=0;i<N;i++){
	        cin >> a[i];
	    }
		unsigned long int sum=0;
	    while((j<N && sum<S) || (i<N && sum > S)){
	        if(sum < S){
	            sum += a[j++];
	        }
	        else if(sum > S){
	            sum -= a[i++];
	        }
	        else{
	            break;
	        }
	    }
	    if(sum!=S){
	        cout << -1<<endl;
	    }
	    else{
	        cout << i+1 << " "<< j<< endl;
	    }
	}
	return 0;
}
