#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int a1=1,b1=1;
    int temp=1;
    int num1,num2,num3;
    int diff1, diff2, diff3,min;
    while(temp <= n){
      a1 = temp;
      temp *=2;
    }
    if(a1 ==n){
      if(n==1){
        min = 2;
      }
      else{
        min =1;
      }
    }
    else{
      temp =1;
      while(temp <= n-a1){
        b1 =  temp;
        temp *=2;
      }

      num1 = a1+b1;
      diff1 = n-num1;

      num2 = a1+2*b1;
      diff2 = num2 - n;
      if(a1 == 2*b1){
        num2++;
        diff2 = num2 - n;
      }

      num3 = 2*a1 +1;
      diff3 = num3 -n;

      if(diff1 <= diff2){
        min = diff1;
      }
      else{
        min = diff2;
      }

      if(diff3 < min){
        min = diff3;
      }
    }


    cout << min << endl;



  }
  return 0;
}
