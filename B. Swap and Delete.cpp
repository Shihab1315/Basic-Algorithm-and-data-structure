#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int one=0,zero=0;
       for(auto u:s){
        one += (u == '1');
        zero += (u == '0');
       }
       
     for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            if(one>0)one--; 
            else break; 
        }else{
                if(zero>0)zero--;
                
                else  break;  
                    
        }
       
     }
     cout<<max(one,zero)<<endl;
    }  

        
    return 0;
}
