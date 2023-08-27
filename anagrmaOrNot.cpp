/*
given 2 string , check whether they are anagram or not
if the frequency of every character is similar in both the string & the order(arrangement) of characters may or may not be shuffled
I: s = car , t=arc
O : yes
I : s=bock , t=hook
O : no
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isAnagram(string s , string t){
    int n = s.size();
    int m = t.size();    
    if(n != m){
         cout<<"Anagram no possible."<<endl;
         return false;
    }
    else{
        // considering 26 lowercase alphabet
        vector<int> v(26,0);
        
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i] != 0){
                return false;                
            }
            
        }
        return true;
    }
}
int main(){
    // optimal approach
    string s;
    string t;
    cout<<"enter 1st string : ";
    cin>>s;
    cout<<"enter 2nd string : ";
    cin>>t;
    cout<<"Is Anagram : "<<isAnagram(s,t);
    // int n = s.size();
    // int m = t.size();

    // if(n != m){
    //     cout<<"Anagram is no possible";
    // }
    // else{
    //     // considering only small alphabets
    //     vector<int> v(26,0);
    //     bool flag=false;
    //     for(int i=0;i<n;i++){
    //         v[s[i]-'a']++;
    //         v[t[i]-'a']--;
    //     }
    //     for(int i=0;i<v.size();i++){
    //         if(v[i]!=0){
    //             flag=true;
    //             break;
    //         }          
    //     }
    //     if(flag==true) cout<<"Yes";
    //     else cout<<"No"; 
    // }
}