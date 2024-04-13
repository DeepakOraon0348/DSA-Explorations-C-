#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;

/********************Remove Dublicate charater********************/
string RemoveDublicate(string s,int n){
    int l=0;
    int h=n-1;
    string ans="";
    while (l<=h)
    {
        if(ans.length()>0 && s[l]==ans[ans.length()-1]){
            ans.pop_back();

        }
        else{
            ans.push_back(s[l]);
        }
        l++;
    }
    return ans;
    
}
string RemoveOccurrences(string s,string part){
    while (s.find(part)!=string::npos)
    {
        //if inside loop it means that part exists in s string;
        s.erase(s.find(part),part.length());
    }
    return s;
    
}
bool checkpalindrome(string s,int i,int j){
    while (i<=j)
    {
        if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

/************************* Valid Palindrome *******************/
bool CheckPalindrome(string s,int len){
    int l=0;
    int h=len-1;
    while (l<=h)
    {
        if(s[l]==s[h]){
            l++;
            h--;
        }
        else{
            //s[l]!=s[h];
            //1.remove allowed
            //check plaindrome for remaining string after removal
            //i th character-> remove
            bool ans1=checkpalindrome(s,l+1,h);
            //i th character ->
            bool ans2=checkpalindrome(s,l,h-1);

            return ans1 || ans2;

        }
        
    }


}

/******************* Palindromic Substring*******************/
int Expand(string s,int i,int j){
    int count=0;

    while (i>=0 && j<s.length() && s[i]==s[j])
    {
        count++;
        j--;
        i++;
    }
    return count;
    
}
int main(){
    /********************* Remove dublicate charater**********************/
    // string s="abbcdccdefghee";
    // int n=s.length();
    // string ans= RemoveDublicate(s,n);
    // cout<<ans;

    /*************************** remove all occurence of substring ***********************/
    // string s="abbcbaddcbabbbaac";
    // string part="cba";
    // string ans=RemoveOccurrences(s,part);
    // cout<<ans;

    /*********************Valid Palindrome ******************/
    // string s="ABCRRRCA";
    // int len=s.length();
    // bool ans=CheckPalindrome(s,len);
    // cout<<ans;

    /***************** Palindromic Substring****************/
    // string s="abcbc";
    // int totalCount=0;
    // for(int center=0;center<s.length();center++){
    //     //ODD
    //     int oddkaAns=Expand(s,center,center);

    //     //EVEN
    //     int evenkaAns=Expand(s,center,center+1);

    //     totalCount+=oddkaAns+evenkaAns;
    // }
    // cout<<totalCount;

    /**************** Decode the message***************/
    // string key="the quick brown fox jumps over the lazy dog";
    // string message="vkbs bs t suepuv";
    // string map="";
    // int i=0;
    // while(i<key.length()){
        
    //     if(key[i]!=' '){
    //         map.push_back(key[i]);
            
    //     }
    //     i++;
    // }
    // char start='a';
    //  for(auto ch:map){
    //       if(map.find(ch)){
    //         map[ch]=start;
    //         start++;
    //       }
    //       cout<<ch<<" "<<map[ch]<<endl;
    //  }
    
    // cout<<map;

    
}