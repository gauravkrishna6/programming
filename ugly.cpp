#include<bits/stdc++.h>
using namespace std;

int findMin(int x,int y,int z){
	if(x<=y){
		if(x<=z){
			return x;
		}
		else{
			return z;
		}
	}
	else{
		if(y<=z){
			return y;
		}
		else{
			return z;
		}
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
    int n;
    cin>> n;

    int mult2Idx=1;
    int mult3Idx=1,mult5Idx=1;
    int nxtMult2,nxtMult3, nxtMult5;
    int m;
    int count =0;

    while(count<n){
    	nxtMult2 = (mult2Idx)*2;
	    nxtMult3 = (mult3Idx)*3;
	    nxtMult5 = (mult5Idx)*5;

	    m = findMin(nxtMult2,nxtMult3,nxtMult5);
	    if(m == nxtMult2){
	    	mult2Idx++;
	    }
	    if(m == nxtMult3){
	    	mult3Idx++;
	    }
	    if(m== nxtMult5){
	    	mult5Idx++;
	    }
	    count ++;
	    //cout << m << " ";
    }
    cout <<m<< endl;

	return 0;
}