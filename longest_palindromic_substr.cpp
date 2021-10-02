//    Given a string, find the longest substring which is palindrome.

//   Input : "abcbaefd"
//   Output: "abcba"

//Implemented using dynamic programming
#include<bits/stdc++.h>
using namespace std;
string longestPaliSubstr(string S){
        int n = S.size();
    int table[n][n];
 
    memset(table, -1, sizeof(table));
    int maxLength = 1;
 
    for (int i = 0; i < n; ++i)
      {  table[i][i] = 1;}
     
    bool flag=false;
    int start = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (S[i] == S[i + 1]) {
            table[i][i + 1] = 1;
            if(flag==false){
                start = i;
                maxLength = 2;
                flag=true;
            }
        }
    }
    for (int k = 3; k <= n; ++k) {
        for (int i = 0; i < n - k + 1; ++i) {

            int j = i + k - 1;

            if (table[i + 1][j - 1]==1 && S[i] == S[j]) {
                table[i][j] = 1;
 
                if (k > maxLength) {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    string s1 = S.substr(start, maxLength);
    
    return s1;   

}
int main()
{
    string s;
    cin>>s;
    string str=longestPaliSubstr(s);
    cout<<str;
    
}
