/*
given tow strings 's' and 'p' return an array of all the start indices of p's anagrams in s. you may
return the answer in any order.
I : s = gigiraffe  , p = gi
O : 
*/
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s ;
    string t;
    cout<<"enter 1st string : ";
    cin>>s;
    cout<<"enter 2nd string : ";
    cin>>t;
    int n = s.size();
    int m = t.size();
    if( m > n) cout<<"anagram is not possible";
    else{
        // assume you have only lowercase alphabet
    }
}