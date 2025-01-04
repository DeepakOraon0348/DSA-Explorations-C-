#include<iostream>
#include<vector>
#include<limits.h>
#include<string>
using namespace std;

void printArray(int arr[],int size,int index){
    //base case
    if(index>=size){
        return;
    }
    //processing 
    cout<<arr[index]<<" ";

    //recursive call 
    printArray(arr,size,index+1);
}

bool SearchArray(int arr[],int target,int size,int index){
    //base case
    if(index>=size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    bool aagekaAns=SearchArray(arr,target,size,index+1);
    return aagekaAns;
}

void findMin(int arr[],int size, int index, int &mini){
    //base case
    if(index>=size){
        return;
    }
    //processing 
    mini=min(mini,arr[index]);

    //recursive call
    findMin(arr, size, index+1,mini);

}
vector<int> EvenNo(int arr[],int size,int index){
    vector<int>ans;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
void EvenNopush(int arr[],int size, int index,vector<int> &ans){
    if(index>=size){
        return;
    }
    if(arr[index]%2==0){
        ans.push_back(arr[index]);
    }
    EvenNopush(arr,size,index+1,ans);


}

void Solve(int arr[],int size,int index){
    if(index>=size){
        return;
    }
    arr[index]=arr[index]*2;
    Solve(arr,size,index+1);
}
void findmaxno(int arr[],int size,int index,int &maxi){
    //base case
    if(index>=size){
        return;

    }
    //processing 
    // if(arr[index]>=max){
    //     max=arr[index];
    // }
    maxi=max(arr[index],maxi);
    //revursive call
    findmaxno(arr,size,index+1,maxi);
}

int SearchingEle(int arr[],int size,int index,int target){
    //base case
    if(index>=size){
        return -1;
    }
    //processing 
    if(arr[index]==target){
        return arr[index];
    }
    //Revursive call
    SearchingEle(arr,size,index+1,target);
}

void printAllOccurence(int arr[],int size,int index,int target){
    if(index>=size){
        return;
    }
    if(arr[index]==target){
        cout<<"index: "<<index<<endl;
    }
    printAllOccurence(arr,size,index+1,target);
}

void find(int arr[],int size,int index,int target,vector<int> &ans){
    //base case
    if(index>=size){
        return;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    find(arr,size,index+1,target,ans);
}
void breackInDigit(int &num,vector<int> &ans){
    //base case
    if(num==0){
        return;
    }
    //processing
    int digit=num%10;
    //cout<<"processing"<<endl;
    int num1=num/10;
    //cout<<num1<<endl;
    //recursive relation
    breackInDigit(num1,ans);
    ans.push_back(digit);
}
void ConVecToDig(vector<int>v,int size,int index,int &ans){
    
    //base case
    if(index>=size){
        return;
    }
    ans=ans*10+v[index];
    ConVecToDig(v,size,index+1,ans);

}

void findthetarget(string name,char ch,int i){
    
    //base case
    if(name[i]=='\0'){
        return;
    }
    //processing
    if(name[i]==ch){
        cout<<"index: "<<i<<endl;
    }
    //Recursive call
    findthetarget(name,ch,i+1);
}
int main(){
    // int arr[]={10,20,30,40,50};
    // int size=5;
    // int index=0;
    // printArray(arr,size,index);

    //++++++++++++++++ Search in Array +++++++++++
    // int arr[]={10,20,30,40,50};
    // int size=5;
    // int target=50;
    // int index=0;
    // cout<<SearchArray(arr,target,size,index)<<endl;

    //++++++++++++++ find mini no in array ++++++++++++
    // int arr[]={10,20,30,40,50};
    // int size=5;
    // int index=0;

    // int mini= INT8_MAX;
    // findMin(arr,size,index,mini);
    // cout<<"Minimum number in array: "<<mini<<endl;

    //+++++++++++++++++ insert the even number in an vector ++++++++++++
    // int arr[]={10,11,12,13,14,15,16};
    // int size=7;
    // int index=0;
    // vector<int>ans;
    // EvenNopush(arr,size,index,ans);
    // int len = ans.size();
    // cout<<"length of vector:"<<len<<endl;
    // for(int i=0;i<len;i++){
    //     cout<<ans[i]<<" ";
    // }

    //+++++++++++++ convert into 2x each element of an array+++++
    // int arr[]={10,20,30,40,50};
    // int size=5;
    // int index=0;
    // Solve(arr,size,index);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    //+++++++++++++++++find the max element in an array +++++++
    // int arr[]={10,20,30,40,50};
    // int size=5;
    // int index=0;
    // int max=INT_MIN;
    // findmaxno(arr,size,index,max);
    // cout<<"Maximum no in an arr is: "<<max<<endl;

    //++++++++++++++searching in an array++++++++++++
    // int arr[]={10,20,30,40,50,60};
    // int size=6;
    // int index=0;
    // int target=20;
    // cout<<SearchingEle(arr,size,index,target); 

    //++++++++++++++ print index of all occurence of target +++++
    // int arr[]={10,20,10,10,30,40,10};
    // int size=7;
    // int index=0;
    // int target=10;
    // //printAllOccurence(arr,size,index,target);
    // vector<int>ans;
    // find(arr,size,index,target,ans);
    // for (int aut: ans)
    // {
    //     cout<<aut<<" ";
    // }
    
    //++++++++++++ Convert the number into the digit ++++++
    //int num=4215;
    // while(num>0){
    //     cout<<num%10<<" ";
    //     num=num/10;
    // }
    //vector<int>ans;
    //breackInDigit(num,ans);
    // int i=0;
    // int j=ans.size()-1;
    // while (i<j)
    // {
    //     swap(ans[i],ans[j]);
    //     i++;
    //     j--;
    // }
    // for(int index:ans){
    //     cout<<index<<" ";
    // }

    //++++++++++++ convert into the vector to digit ++++++++++
    // vector<int>v={4,2,1,7};
    // int index=0;
    // int size=v.size();
    // int ans=0;
    // ConVecToDig(v,size,index,ans);
    // cout<<ans<<endl;
    
    
    //++++++++++++++ find the target in the string +++++++++++++
    string name="Babbar";
    int i=0;
    // while (name[i]!='\0')
    // {
    //     cout<<name[i]<<endl;
    //     i++;
    // }
    char ch='a';
    findthetarget(name,ch,i);
    
}