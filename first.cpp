#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
bool KeyPair(int v[],int key){
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(v[i]+v[j]==key){
                return true;
            }
        }
    }

}
/*********************** Using two poiter aproch***********/
bool towpointer(int v[],int key,int n){
    int l=0;
    int h=5;
    int m=l+(h-l)/2;
    while (l<=h)
    {
        int csum=v[l]+v[h];
        if(csum==key){
            return true;
        }
        else if(csum>key){
            h=m-1;
        }
        else{
            l=m+1;
        }
        m=l+(h-l)/2;
    }
    
}
int PivotElement(vector<int>& num){
    for(int i=0;i<num.size();i++){
        int lsum=0;
        int rsum=0;
        for(int j=0;j<i;++j){
            lsum+=num[j];
        }
        for(int j=i+1;j<num.size();j++){
            rsum+=num[j];
        }
        if(lsum==rsum){
            return i;
        }
    }
    return -1;
}

/********************** Find missing element*****************/


int sortigmethod(vector<int>& v){
    int size=v.size();
    sort(v.begin(),v.end());
    int l=v[0];
    int h=v[size-1];
    for(int i=0;i<size;i++){
        cout<<l<<" "<<v[i]<<endl;
        if(l==v[i]){
            l++;
            continue;
            
        }
        else{
            return l;
        }
        
    }
}
int usingxor(vector<int>& v){
    int size=v.size();
    int sum=0;
    //1.XOR all Range Item
    for(int i=0;i<size;i++){
        sum^=v[i];
        
    }
    for(int i=0;i<=size;i++){
        sum^=i;
    }
    return sum;
}
int findduplicate(vector<int>& v){
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]){
            return v[i];
        }
    }
}
/*************** Using Negative Marking*****************/
int UsingNegativeMethod(vector<int>& v){
    int size=v.size();
    int ans=-1;
    for(int i=0;i<v.size();i++){
        int index= abs (-v[i]);
        //already visited;
        if(v[index]<0){
            ans=index;
            break;
        }
        //visited mark
        v[index]*=-1;
    }
    return ans;
}

int findMissing(vector<int>& v){
    //visited Method
    for (int i = 0; i <v.size(); i++)
    {
        int index=abs(v[i]);
        if(v[index-1]>0){
            v[index-1]*=-1;
        }
        else{
            return index;
        }
    }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // //all positive index are missing
    // for(int i=0;i<v.size();i++){
    //     if(v[i]>0){
    //         cout<<v[i]<<" ";
    //     }
    // }
    
}

int FirstRepeating(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int index=abs(v[i]);
        v[index-1]*=-1;
    }
    for(int i=0;i<n;i++){
        if(v[i]>0){
            return v[i];
        }
    }
}
void waveprintmatrix(vector<vector<int>>& v){
    int row=v.size();
    int col=v[0].size();
    int j=0;
    int i=0;
    while(i<row){
        if(j==0){
            for(j=0;j<col;j++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(j=col-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
            j=0;
        }
        i++;
    }
}
vector<int> spiralprintingofmatrix(vector<vector<int>>& v){
    vector<int>ans;
    int row=v.size();
    int col=v[0].size();
    int total_element=(row*col);

    int startingrow=0;
    int endingcol=col-1;
    int endingrow=row-1;
    int startingcol=0;

    int count=0;
    while (count<total_element)
    {
        //printing starting row
        for(int i=startingcol;i<=endingcol;i++){
            ans.push_back(v[startingrow][i]);
        }
        startingrow++;
        //print ending col
        for(int i=startingrow;i<=endingrow;i++){
            ans.push_back(v[i][endingcol]);
        }
        endingcol--;
        //print ending Row
        for(int i=endingrow;i>=startingrow;i--){
            ans.push_back(v[i][startingcol]);
        }
        //print starting col
        for(int i=endingrow;i>=startingrow;i--){
            ans.push_back(v[i][startingcol]);
        }
        startingcol++;
        count++;
    }
    return ans;
 
}

vector<int> RemoveDuplicatefromSortedArray(vector<int>& v){
    int size=v.size();
    vector<int>temp;
    temp.push_back(v[0]);
    for(int i=1;i<size;i++){
        int end=temp.size();
        if(v[i]!=temp[end-1]){
            //cout<<temp[end]<<" ";
            temp.push_back(v[i]);
        }
    }
    return temp;
}

int RemoveDuplicate(vector<int>& num){
    int i=1,j=0;
    //two pointer approch
    while(i<=num.size()){
        if(num[i]==num[j]){
            ++i;
        }
        else{
            j++;
            num[j]=num[i];
        }
        i++;  
    }
    return j;
}
float MaximumAverageSubarray(vector<int>& v,int k){
    int size=v.size();
    int i=0;
    int sum=0;
    float avg=0;
    while(i<size-k){
        int j=i+k;
        for(int k=i;k<j;k++){
            sum+=v[k];
        }
        float temp=(float)(sum/k);
        if(temp>avg){
            avg=temp;
        }
        i++;
    }
    return avg;
}
int main(){
    //cout<<"Hello world";
    /*************** key pair****************/
    // int v[]={1,4,45,6,10,8};
    // int key=16;
    //bool ans=KeyPair(v,key);
    // bool ans=towpointer(v,key,6);
    // cout<<ans;
    /***************** Find pivot element****************/
    // vector<int>num={1,7,3,6,5,6};
    // int ans=PivotElement(num);
    // cout<<ans;
    
    /************************* Missing Numbers*************/

    // vector<int>v={9,6,4,2,3,5,7,0,1};
    // int ans=sortigmethod(v);
    // cout<<ans;

    /******using xor operator**********/
    // vector<int>v={9,6,4,2,3,5,7,0,1};
    // int ans=usingxor(v);
    // cout<<ans;
    /***********************Dublicate element*******************/
    //vector<int>v={1,3,4,2,2};
    //int ans=findduplicate(v);
     //int ans=UsingNegativeMethod(v);
     //cout<<ans;
    /*************************** Mssing element with DuplicateS****************/
    // vector<int>v={1,3,5,3,4};
    // int ans=findMissing(v);
    // cout<<ans;
    /*************** Find First Repeating element***************/
    // vector<int>v={1,5,3,4,3,5,6};
    // int ans=FirstRepeating(v);
    // cout<<ans;

    /*********************** Wave print A Matrix ************************/
    // vector<vector<int>>v={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16},
    //     {17,18,19,20}
    // };
    // waveprintmatrix(v);
    // return 0;

    /**************************** Spiral printing a matrix *********************/
    // vector<vector<int>>v={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9},
    //     {10,11,12}
    // };
    // vector<int>ans=spiralprintingofmatrix(v);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    /***************** Remove Duplicate from sorted Array ********************/
    // vector<int>v={0,0,1,1,1,2,2,3,3,4};
    // vector<int>ans=RemoveDuplicatefromSortedArray(v);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }
    // vector<int>num={0,0,1,1,1,2,2,3,4};
    // RemoveDuplicate(num);
    // for(auto i:num){
    //     cout<<i<<" ";
    // }

    /************************** Maximum Average Subarray*****************/
    vector<int>v={1,12,-5,-6,50,3};
    int k=4;
    float ans=MaximumAverageSubarray(v,k);
    cout<<ans<<endl;

}
 