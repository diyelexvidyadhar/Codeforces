#include <bits/stdc++.h>
using namespace std;

void printPattern(int,int);
void solve(){
	int n,k;
	cin >> n >> k;
	int temp = k;
	for(int i = 0; i <= n-1; i += 2){
		    k--;
		}
		if(k <= 0){
			printPattern(n,temp);
		}else{
			cout << -1 << endl;
		}
	}

void printPattern(int n, int k){
	for(int i = 0; i <= n-1; i++)
    {
	for(int j = 0; j <= n-1; j++){
         if(i%2 == 0 && i == j && k > 0){
         	cout << "R";
         	k--;
         }else{
         	cout << ".";
         }
	}
	cout << endl;
}
}



int main(){
	int t;
	cin >> t;
	while(t){
		solve();
		t--;
	}

      

}