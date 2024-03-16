#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int FindUniqueElement(int arr[],int size){
    int i=0+1;
    int ans=arr[0];
    while(i<size){
        //cout<<"your operation going on";
        ans=ans^arr[i];
        i++;
    }
    return ans;
}

void print(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}
void shift(int arr[],int size){
    int n;
    int Arr[size];
    int i=0;
    while(i<size){
        n=i%size;
        Arr[n]=arr[i];
        i++;
    }
    for(int j=0;j<size;j++){
        //arr[i]=Arr[i];
        cout<<Arr[i]<<" ";
    }

}

void swapvector(vector<int>& v){
    int size=v.size();
    int i=0,l=0;
    while(l<size){
        if(v[l]<0){
            swap(v[i],v[l]);
            i++;
            l++;
        }
        else{
            l++;
        }
    }
}
void printvector(vector<int>& v){
    int size=v.size();
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void rotatevector(vector<int>& v){
    int size=v.size();
    vector<int>ans(size);
    int i=0;
    while(i<size){
        int mod=(i+2)%size;
        ans[mod]=v[i];
        i++;
    }
    v=ans;
}
int FirstOccurence(vector<int>& v,int target){
    int size=v.size();
    int l=0;
    int h=size-1;
    int mid=l+(h-l)/2;
    int ans=-1;
    while(l<=h){
        if(v[mid]==target){
            ans=mid;
            h=mid-1;
        }
        else if(v[mid]>target){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        mid=l+(h-l)/2;

    }
    return ans;

}

int LastOccurence(vector<int>& v,int target){
    int size=v.size();
    int l=0,h=size-1;
    int mid=l+(h-l)/2;
    int ans=-1;
    while(l<=h){
        if(v[mid]==target){
            ans=mid;
            l=mid+1;
        }
        else if(v[mid]>target){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        mid=l+(h-l)/2;
    }
    return ans;
}

int TotalOccurence(vector<int>& v,int target){
    int fist=FirstOccurence(v,target);
    int last=LastOccurence(v,target);
    int total=last-fist+1;
    return total;
}

int FindMissingElement(vector<int>& v){
    int size=v.size();
    int l=0;
    int h=size-1;
    int mid=l+(h-l)/2;
    int ans=-1;
    int temp=v[0]-l;
    cout<<l<<" "<<h;
    while(l<=h){
        int diff=v[mid]-mid;
        if(diff==temp){
            //right me jaw
            l=mid+1;
        }
        else{
            //ans store
            ans=mid;
            //left me jao
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }
    return ans+temp;
}
int FindPeak(vector<int>& v){
    int size=v.size();
    int l=0;
    int h=size-1;
    int ans=0;
    int mid=l+(h-l)/2;
    while(l<h){
        if(v[mid]<v[mid+1]){
            l=mid+1;
        }
        else{
            h=mid;
        }
        mid=l+(h-l)/2;
    }
    return v[h];
}
// void transpose(vector<vector<int> &marix){
//       int row=marix.size();
//       int col=marix[0].size();
// }

int swapUsingTemp(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    
    cout<<a<<" "<<b;
    cout<<endl;
    return a,b;
}
void swapUsingArthmatic(int a,int b){
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<a<<" "<<b;
}
void swapUsingXOR(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
}
void rotate(vector<int>& v,int k){
    int size=v.size();
    k=k%size;
    //1.reverse[0,k-1]
    reverse(v.begin(),v.end());
    printvector(v);
    cout<<endl;
    //2.reverse[0,k-1]
    reverse(v.begin(),v.end()+k);
    printvector(v);
    cout<<endl;
    //3.reverse
    reverse(v.begin()+k,v.end());
    printvector(v);
    cout<<endl;
}
int main(){
    //***************find unique element**********
    // int arr[]={2,10,11,13,10,2,15,13,15};
    // int size=end(arr)-begin(arr);
    // int ans=FindUniqueElement(arr,size);
    // cout<<ans;

    //*******************************shift arrays element by 1************

    // int arr[]={10,20,30,40,50,60};
    // int size=end(arr)-begin(arr);
    // shift(arr,size);
    //print(arr,size);

    /*********************vector STL*******************/
    //vector<int>v={10,20,30,40,50,60};
    // for(int i=0;i<6;i++){
    //     cout<<v[i]<<" ";
    // }
    // v.push_back(70);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }

    /*****************questions no -1**********/
    //vector<int>v={23,-7,12,-10,-11,40,60};
    //swapvector(v);
    // sort(v.begin(),v.end());
    // printvector(v);

    /****************rotating  vector****************/
    // vector<int>v={10,20,30,40,50,60};
    // rotatevector(v);
    // printvector(v);

    /*********************first occurence of a number*************/
    // vector<int>v={10,20,30,30,30,40,50};
    // int target=10;
    // int ans=FirstOccurence(v,target);
    // cout<<"First Occurence index of "<<target<<" is "<<ans;


    /*******************************last occurence number**************/
    // vector<int>v={10,20,30,30,30,40,50};
    // int target=10;
    // int ans=LastOccurence(v,target);
    // cout<<"the last Occurence index of "<<target<<" is "<<ans;

    /*********************find total occurence*******************/
    // vector<int>v={10,20,30,30,30,30,40,50};
    // int target=30;
    // int ans=TotalOccurence(v,target);
    // cout<<"total occurence index="<<ans;

    /******************Missing element in a sorted array****************/
    // vector<int>v={11,12,13,14,16,17,18};
    // int ans=FindMissingElement(v);
    // cout<<"Missing element is ="<<ans;


    /*******************peak element in a moutaina array***************/
    //  vector<int>v={10,60,50,40,30};
    //  int ans=FindPeak(v);
    //  cout<<"peak element equal to="<<ans;
    

    /**********************Traspose of Matrix**********************/
    // vector<vector<int>>marix={
    //     {1,2,3},
    //     {4,5,6,},
    //     {7,8,9}
    // };
    // transpose(marix);
    // for(int i=0;i<marix.size();i++){
    //     for(int j=0;j<marix[i].size();j++){
    //         cout<<marix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    /************************swaping implement*******************/
    // int a=9;
    // int b=5;
    /*********************using temp variable**************************/
    // swapUsingTemp(a,b);
    // cout<<a<<" "<<b;
    /********************************using arthmatic******************/
    //swapUsingArthmatic(a,b);

    /**********************************using XOR ********************/
    // swapUsingXOR(a,b);
    

    /********************************Rotate-Array******************/
    vector<int>v={1,2,3,4,5,6,7};
    int k=3;
    printvector(v);
    cout<<endl;
    rotate(v,k);
    


}