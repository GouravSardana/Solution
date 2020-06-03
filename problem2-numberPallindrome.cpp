class Solution {
public:
    
};


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        int orignal =x;
        if(x<9 &&x>=0){
            return true;
        }
        if(x<0 ||x%10==0){
            return false;
        }
        long reverse = 0;
        while(x>0){
            long pop = x%10;
            x = x/10;
            reverse = (reverse*10)+pop;
        }
        if(reverse>INT_MAX){
            return 0;
        }
        bool samp =false;
        if(reverse==orignal){
            samp =true;
        }
        return samp;
    }
int main() {
    int n;
    cin>>n;
    bool result = isPalindrome(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
	return 0;
}
