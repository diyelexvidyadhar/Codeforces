#include <bits/stdc++.h>
using namespace std;


bool isSquare(string input){
	if(input.length() == 1 || input.length()%2 != 0)
		return false;

	int mid = input.length()/2;
	int start = 0;
	while(mid <= input.length() - 1 && start <= mid){
		if(input[start] == input[mid]){
			mid++;
			start++;
		}else{
			return false;
		}
		
	}
	return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	string input;
    	cin >> input;
    	if(isSquare(input))
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;

    }
   

    return 0;
}