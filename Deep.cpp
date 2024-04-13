#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
using namespace std;

void reverseTheString(char ch[],int len){
    int l=0;
    int h=len-1;
    while(l<=h){
        swap(ch[l],ch[h]);
        l++;
        h--;
    }
}

void convertinUpperCase(char ch[],int len){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]-'A'+'a';
        }
        i++;
    }
}

void ReplacewithSpace(char ch[],int len){
    int l=0;
    int h=len-1;
    while(l<=h){
        if(ch[l]=='@'){
            ch[l]=' ';
        }
        l++;
    }
}

bool CheakPalindrome(char ch[],int len){
    int l=0;
    int h=len-1;
    while (l<=h)
    {
        if(ch[l]==ch[h]){
            l++;
            h--;
        }
        else{
            return false;
        }
        
    }
    return true;
    
}
void RemoveAdjacent(string s,int k){

}
int main(){
    //char ch[100];
    // cin>>ch;
    // cin.getline(ch,100);
    // int len=strlen(ch);
    //cout<<"print the value of ch: "<<ch<<endl;
    /**********************using loop********************/
    // for(int i=0;i<strlen(ch);i++){
    //     cout<<"indec : "<<i<<" value: "<<ch[i];
    //     cout<<endl;
    // }

    /**********************Reverase the string *****************/
    /***************before*********/
    // cout<<"before : "<<ch<<endl;
    // convertinUpperCase(ch,len);
    // cout<<"after : "<<ch<<endl;

    /***********************Replace @ with space************/
    // cout<<"before : "<<ch<<endl;
    // ReplacewithSpace(ch,len);
    // cout<<"After : "<<ch<<endl;

    /*********************Cheak Plindrome*****************/
    // bool isPalindrome = CheakPalindrome(ch,len);
    // if(isPalindrome){
    //     cout<<"it is Palindrome";
    // }
    // else{
    //     cout<<"it is not Palindrome";
    // }

    /************************String*********************/
    //string name;
    //cin>>name;
    //getline(cin,name);
    // cout<<"print the name: "<<name<<endl;
    // cout<<"print the length of string:"<<name.length()<<endl;

    // string st ="";
    // cout<<"length : "<<st.length()<<endl;
    // cout<<"is empty : "<<st.empty()<<endl;
    /*******************use at**************/
    // int n;
    // cout<<"please enter the which position would want:"<<endl;
    // cin>>n;
    // cout<<"character at position "<<n<<" is "<<name.at(n);
    /********************front*********************/
    // cout<<"front charater of string is :"<<name.front()<<endl;
    // cout<<"back charater of string is: "<<name.back()<<endl;
    /**************************apend*******************/
    // string str1="Deepak ";
    // string str2="Oraon";
    // cout<<"before apend"<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // cout<<"after apend"<<endl;
    // str1.append(str2);
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    /**************************erase**************/
    // name.erase(3,8);
    // cout<<" ofter the erase : "<<name<<endl;
    /*********************insert******************/
    // string middle;
    // cout<<"enter the which you want to insert"<<endl;
    // cin>>middle;
    // name.insert(7,middle);
    // cout<<"after the insertion : "<<name;

    /*************************push_back & pop_back**************/
    //  name.push_back('o');
    //  cout<<name<<endl;

    //  name.pop_back();
    //  cout<<name<<endl;
    

    /**************using loop************/
    // int  i=0;
    // while (name[i]!='\0')
    // {
    //      cout<<"index: "<<i<<" value: "<<name[i]<<endl;
    //      i++;
    // }

    /*****************************  npos  ******************/
    // string str1="yaar tera super star desi  kalakar";
    // string str2="star";
    // if(str1.find(str2)){
    //     //not found
    //     cout<<"Not found"<<endl;
    // }
    // else{
    //     cout<<"found"<<endl;
    // }

    /******|****************compare ****************/

    // string str1="Deepak";
    // string str2="Deepak";
    // if(str1.compare(str2)==0){
    //     cout<<"matching"<<endl;
    // }
    // else{
    //     cout<<"not matching"<<endl;
    // }

    /********************Substring*********************/
    // string desc="this is a car big daddy of all SUVS";
    // cout<<desc.substr(19,5)<<endl;
    
    /******************** removeDuplicates******************/
    // string s="abbaca";
    // string ans="";
    // int index=0;

    // while (index<s.length())
    // {
        //same 
        //ans ka rightmost character and string S ka c urrent character
        
        //if(ans.length()>0 && ans[ans.length()-1]==s[index]){
            //pop from ans string
           // ans.pop_back();
        //}
    //     else{
    //         //push 
    //         ans.push_back(s[index]);
    //     }
    //     index++;
    // }
    // cout<<"final result : "<<ans;
    

    /*****************************   Remove All Adjacent Duplicates in string *************/
    // string s="deeedbbcccbdaa";
    // int k=3;
    // int i=0;
    // int n=s.length();
    // string name="";
    // while (i<n)
    // {
    //    RemoveAdjacent(s,k);
    //     i++;
    // }
    // cout<<name;
    // string name="Deepak oraon";
    // string str=" ";
    // int i=0;
    // while (i<name.length())
    // {
    //      if(name.find(str)){
    //          break;
    //      }
    //      else{
    //         cout<<name[i];
           
    //      }
    //     i++;
    // }
    
    
}