/*
given a sentence 'str' return the word that is lexicographically maximum
I: str = "I am a pwians"
O : pwains
I: str = "proud to be pwians"
O : to
I : str = "decode dsa with pw"
O : with
*/
// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    
    string word = "";
    string maxWord = "";
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            maxWord = max(maxWord,word);
            word="";
        } 
        else word += str[i];
    }
    // last word comparing because last me word ke baad space nahi hai
    maxWord = max(maxWord , word);
    cout<<maxWord;
   
}