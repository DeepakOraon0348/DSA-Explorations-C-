#include<iostream>
#include<algorithm>
#include<string.h>
#include<limits.h>
#include<vector>
using namespace std;

bool CheckSorted(int arr[],int size, int index){
    //base case
    if(index>=size){
        return true;
    }
    //processing part
    if(arr[index]>arr[index-1]){
        //aage ka processing
        bool aagekaAns=CheckSorted(arr,size,index+1);
        return aagekaAns;

    }
    else{
        return false;
    }
}

int binSearch(int arr[],int s,int e,int target){
    //base case
    if(s>=e){
        return -1;
    }

    //processing part
    int mid=s+(e-s/2);
    if(arr[mid]==target){
        return mid;
    }

    //baaki recursion sambhal lega
    if(arr[mid]<target){
        s=mid+1;
        return binSearch(arr,s,e,target);
    }
    else{
        e=mid-1;
        return binSearch(arr,s,e,target);
    }
}

void findSubsequences(string str,string output,int index,vector<string> &ans){
    //base case
    if(index>=str.length()){
        //ans jo hi vo output str me build ho chuka hii
        //print kar do
        //cout<<"->"<<output<<endl;
        ans.push_back(output);
        return;
    }
    //pehle include baad me exclude.
    
    char ch=str[index];
    //include
    output.push_back(ch);
    findSubsequences(str,output,index+1,ans);

    //exclude
    output.pop_back();
    findSubsequences(str,output,index+1,ans);
    //Pehle exclude baad me include.

    // char ch=str[index];
    // //exclude

    // findSubsequences(str,output,index+1);

    // //include
    // //output string me ch character ko include kar do.
    // output.push_back(ch);
    // findSubsequences(str,output,index+1);
}
int main(){
    // int arr[]={10,20,30,20,60,70};
    // int size=6;
    // int index=1;
    // bool isSorted=CheckSorted(arr,size,index);
    // if(isSorted){
    //     cout<<"Array is sorted"<<endl;
    // }
    // else{
    //     cout<<"Array is not Sorted"<<endl;
    // }

    //++++++++++++++++ Binary Search +++++++++++++++++++
    // int arr[]={10,20,30,40,50,60,70,80};
    // int start=0;
    // int end=8;
    // int target=30;
    // int foundIndex=binSearch( arr,start,end,target);
    // if(foundIndex != -1){
    //     cout<<"target is found at :"<<foundIndex<<endl;
    // }
    // else{
    //     //nahi milne per
    //     cout<<"target is not found"<<endl;
    // }

    //++++++++++++++++++++++ SubSequences of string ++++++++++++++
    string str="abc";
    string output="";
    int index=0;
    vector<string>ans;
    findSubsequences(str,output,index,ans);

    cout<<"Printing the SubSequence of the stiring"<<endl;
    for(string s:ans){
        cout<<"->"<<s<<endl;
    }

    return 0;
}