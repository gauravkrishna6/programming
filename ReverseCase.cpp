#include<bits/stdc++.h>
using namespace std;
main(){
	//start coding here
	string s;
	char chr;
	int in_asci,out_asci;
	string output="";
	cin >> s;
	string::iterator it;
	for(it= s.begin();it != s.end();++it){
		chr = *it;
		in_asci = (int)chr;
		if(in_asci >=97 && in_asci<=122){
			out_asci = (in_asci -97)+65;
			//output += (char)out_asci;		
		}
		else if (in_asci >=65 && in_asci <= 91){
			out_asci = in_asci-65+97;
		}
		output += (char)out_asci;
	}
	cout << output;
	   
}