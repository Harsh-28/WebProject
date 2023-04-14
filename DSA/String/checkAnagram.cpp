#include <bits/stdc++.h>
using namespace std;
bool itr_sorting_sol1(string s1, string s2){
    if(s1.length() != s2.length())
        return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    // if(s1 == s2)
    //     return true;
    // else
    //     return false;
    return (s1 == s2);
}
bool itr_sp_sol2(string s1, string s2){
    map<char, int> m1;
    map<char, int> m2;
    for (int i = 0; i < s1.length(); i++)
        m1[s1[i]]++;

    for (int i = 0; i < s1.length(); i++)
        m2[s2[i]]++;

    // if (m1 == m2)
    //    return true;
    // else
    //     return false;
    return (m1 == m2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1 = "aab" , s2 ="baa";
    cout << itr_sorting_sol1(s1,s2)<< endl;
    cout << itr_sp_sol2(s1,s2);
}