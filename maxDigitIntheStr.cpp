/*
find the second largest digit in the string consisting of digits from '0' to '9'
I: s = "2947578"
O : 9
I : s=41325
O : 5
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter a string : ";
    cin>>s;
    // method 1 - by converting the string into integer then find the max1 and max2
    // int x = stoi(s);
    // int max1 = 0;
    // int max2 = 0;
    // while(x>0){
    //     int r = x%10;
    //     if(r>max1){
    //         max2 = max1;
    //         max1 = r;
    //     }
    //     else if(r>max2 && r!=max1) max2 = r ;
    //     x/=10;
    // }
    

    // method2 - directly finding in the string
    char max1 , max2 ;
    max1 = max2 = '!';
    for(int i=0;i<s.size();i++){
        if(s[i]>max1){
            max2 = max1;
            max1 = s[i];
        }
        else if(s[i]>max2 && s[i]!=max1) max2 = s[i];
    }
    if(max2=='!') cout<<"NO 2nd largest number : ";
    else cout<<"second largest : "<<max2;
}