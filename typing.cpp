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
		int n;
		cin >> n;
		string ar[n];
		for(int i=0;i<n;i++){
			cin >> ar[i];
		}

		string word;
		double time;
		double total_time =0.0;
		int prev_hand,curr_hand;  // 0 is left, 1 is right
		map<string,double> mp;  // already typed words
		for(int i=0;i<n;i++){ //for each word
			word = ar[i];
			if(mp[word] >0){
				total_time += mp[word]/2;
			}
			else{
				if(word[0]== 'd' || word[0]=='f'){
					prev_hand = 0;
				}
				else{
					prev_hand = 1;
				}
				time = 0.2;
				for(int j=1;j<word.length();j++){
					if(word[j]=='d' || word[j]=='f'){
						curr_hand = 0;
					}
					else{
						curr_hand =1;
					}

					if(curr_hand == prev_hand){
						time += 0.4;
					}
					else{
						time += 0.2;
					}
					prev_hand = curr_hand;

				}
				total_time += time;
				mp[word] = time;
			}
		}

		cout << total_time*10 << endl;

	}
	return 0;
}
