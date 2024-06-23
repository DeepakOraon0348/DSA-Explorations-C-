#include<iostream>
using namespace std;

void solve(int *arr,int size){
    //cout<<"size of array inside solve fun: "<<sizeof(arr)<<endl;
    // cout<<"inside solve -> arr: "<<arr<<endl;
    // cout<<"inside solve -> &arr: "<<&arr<<endl;
}

void solve3(int* arr,int size){
    for(int i=0;i<size;i++){
        arr[i]*=2;
    }
}
int main(){
    // int a=5;
    // cout<<a<<endl;
    // cout<<"address of a:"<<&a<<endl;

    //pointer creation
    //int* ptr=&a;
    //accessing value store at address store in ptr
    // cout<<ptr<<endl;
    // cout<<"Accessing:"<<*ptr<<endl;

    // int a=5;
    // int* ptr=&a;
    // cout<<sizeof(ptr)<<endl;

    // char ch=5;
    // char* cptr=&ch;
    // cout<<sizeof(ptr)<<endl;

    //null pointer declaration
    // int* ptr=0;
    // cout<<*ptr<<endl;


    // int a=5;
    // int* p=&a;

    // p=p+1;
    // cout<<*p<<endl;

    /*******in aray**************** */
    // int arr[5]={10,20,30,40,50};
    // arr=arr+1;


    /***************Lecture no-2********** */

    //int arr[5]={1,2,3,4,5};

    //poiter to an array
    //int* ptr1=arr;

    //int* ptr=&arr//error through karga

    //pointer to an array
    // int (*ptr)[5]=&arr;
    // cout<<(*ptr)[2];

    //int arr[]={10,20,30,40,50};
    //cout<<"size of an array: "<<sizeof(arr)<<endl;
    //solve(arr,5);
    // cout<<"inside main -> arr: "<<arr<<endl;
    // cout<<"inside main ->&arr: "<<&arr<<endl;

    int value[]={1,2,3,4,5};
    solve3(value,5);
    for(int i=0;i<5;i++){
        cout<<value[i]<<endl;
    }

    return 0;

}