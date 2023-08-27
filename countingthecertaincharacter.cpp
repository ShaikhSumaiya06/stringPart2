/*
return the count , how many time a given character is appearing int the string
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int count(string s, char ch){
    int n = s.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        if(s[i]==ch) sum++;
    }
    return sum;
}
int main(){
    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    char ch;
    cout<<"target character : ";
    cin>>ch;
    cout<<"count : "<<count(s,ch);
}