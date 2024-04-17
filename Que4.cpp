// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False
#include<iostream>
#include <algorithm>
using namespace std;
bool anagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) return true;
    else return false;
}
int main()
{
    string s,t;
    cout<<"Enter string 1 : ";
    cin>>s;
    cout<<"Enter string 2 : ";
    cin>>t;
    bool flag=anagram(s,t);
    if(flag==true) cout<<"Anagram";
    else cout<<"Not Anagram";
    return 0;
}