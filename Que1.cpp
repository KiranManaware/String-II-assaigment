// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        s+=s[i];
    }
    cout<<s;
    return 0;
}