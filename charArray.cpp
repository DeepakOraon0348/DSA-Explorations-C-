#include<iostream>
#include<string.h>
#include<algorithm>
#include<string>
using namespace std;


int findLength(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
         if(ch[i]=='\0'){
            //rukana hii
            break;
         }
         else{
            length++;
         }
    }
    return length;
    
}

void reverseString(char ch[],int len){
    int l=0;
    int h=len-1;
    while (l<h){
        swap(ch[l],ch[h]);
        l++;
        h--;
    }
     
    
}

void   convertToUpperCase(char ch[],int len){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>='a' &&  ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }

}
void replacewithspace(char ch[],int len){
    int index=0;
    while (ch[index]!='\0')
    {
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;
    }
    
}
/****************************check palindrome or not**********************/
bool checkpalindrome(char ch[],int len){
    int l=0;
    int h=len-1;
    while(l<=h){
        if(ch[l]==ch[h]){
            h--;
            l++;
        }
        else{
            return false;
        }

    }
    return true;
}
int main(){
    //creation
    // char ch[100];

    //input
    //cin>>ch;

    //Delimeter 
    // cin.getline(ch,100);

    //output
    // cout<<"printing the char:"<<ch;

    //we can also use loop
    // for(int i=0;i<10;i++){
    //     cout<<"index:"<<i<<"value:"<<ch[i]<<endl;
    // }

    //print value of nullchar
    // char temp=ch[7];
    // int value=(int)temp;
    // cout<<"value of null char:"<<value;


    /***************************find the length of sequence******************/
    // char ch[100];
     
    // cin.getline(ch,100);
    // int len=strlen(ch);
    // cin>>ch;
    //int ans=findLength(ch,100);
    //cout<<"before reverse:"<<ch<<endl;
    //reverseString(ch,len);
     
    //cout<<"after reverse:"<<ch;

    // cout<<"the length of an string is: "<<ans;
    // cout<<"print length:"<<strlen(ch);

    /*********************************Convert To Upper case*********************/
    // char ch[100];
    // cin.getline(ch,100);
    // int len=strlen(ch);
    // cout<<"before :"<<ch<<endl;
    // convertToUpperCase(ch,len);
    // cout<<"afte :"<<ch;
    /********************Replace '@' with space*****************************/
    // char ch[100];
    // cin.getline(ch,100);
    // int len=strlen(ch);
    // replacewithspace(ch,len);
    // cout<<ch;

    /**************************** CHECK PALIDROME *********************/
    char ch[100];
    cin.getline(ch,100);
    int len=strlen(ch);
    bool isPalindrome=checkpalindrome(ch,len);
    if(isPalindrome){
        cout<<"valid palindrome"<<endl;

    }
    else{
        cout<<"invalid palindrome"<<endl;
    }

}
