#include <bits/stdc++.h>

using namespace std;

bool FaultyKeyboard(string s1,string s2){
    int i=0;
    int j=0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else if(s1[i-1]==s2[j]){
            j++;
        }
    }
    return (i==s1.length());
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<FaultyKeyboard(s1,s2)<<endl;

    return 0;
}
