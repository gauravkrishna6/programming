//codechef
//Villages and Tribes ,Problem Code: VILTRIBE


#include <bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
	int t;
	cin >> t;	//test cases
	while(t--){
		string s;
		cin >> s;  //get the stirng  of A B and .

		int count_A=0;
		int count_B=0;
		int count_D=0;
		char prev = ' ';
		char curr = ' ';

		for (int i = 0; i < s.length(); ++i)
		{

			curr = s[i];

			if(curr == 'A'){
				count_A++;
				if(count_D > 0){
					if(prev == curr){
						count_A += count_D;

					}
				count_D =0;	
				}
				prev = curr;
			}
			
			else if(curr == 'B'){
				count_B++;
				if(count_D > 0){
					if(prev == curr){
						count_B += count_D;

					}
				count_D =0;	
				}
				prev = curr;
			}

			else{
				count_D++;
			}


		}
		cout << count_A << " " << count_B <<endl; 
	}
	return 0;
}
