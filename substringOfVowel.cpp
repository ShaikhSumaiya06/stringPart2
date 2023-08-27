/*
input a string and return the number of substrings that contains only vowel.
continous part of any string is called substring
ex : s="abcde"
ans : "a","ab","abc","abcd","abcde","b","bc","bcd","bcde","c","cd","dce","d","de","e" --> substrings of 's'
I: s = "acde"
O :  a , e, (2)
I: s = "hgdhpw"
O : 0
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;    
    cout<<"enter a string : ";
    cin>>s;
    
    int count = 0;
    int ans = 0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
             count++;
        }
        else{
            ans += count*(count+1)/2;
            count=0;
        }
    }
    ans += count*(count+1)/2;
    cout<<"answer : "<<ans;
    /*
    sum of 'n' natural no. ((n*(n+1))/2)
    if n=4
    sum of 'n' natural no. means ---> 1 + 2 + 3 + 4 + ..... + n

    */
}