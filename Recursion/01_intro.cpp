#include<iostream>
using namespace std;

int factorial(int n){
    //base case;
    if(n == 1)
        return 1;

    if(n==0)
        return 1;

    //processing call;
    // int ans = n*factorial(n-1);
    // return ans;//ye vi ho sakta hii.


    //Recursive relation
    int recursionkaAns=factorial(n-1);


    //processing
    int factorialAns=n*recursionkaAns;
    return factorialAns;
}

void print(int n){
    //base case
    if(n==1){
        cout<<1;
        return;
    }
    //processing 
    cout<<n<<" ";
    //recursive call
    print(n-1);//yeshe tail recursion kahte hii.

}

void printcounting(int n){
    //base case
    if(n==1){
        cout<<1<<" ";
        return;
    }
    //recursive call
    printcounting(n-1);//yeshe head recursion kahte hii.

    //processing
    cout<<n<<" "; 
}
int pow(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive call
    int ans = 2*pow(n-1);
    return ans;
}

int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive call
    int ans = fib(n-1)+fib(n-2);
    return ans;
}
int sum(int n){
    //base case 
    if(n==1){
        return 1;
    }
    //recursive call
    int ans = n+sum(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"please enter the your number: "<<endl;
    cin>>n;
    // cout<<"your result is : "<<factorial(n)<<endl;
    // print(n);

    // printcounting(n);
    // cout<<pow(n)<<endl;
    // cout<<fib(7)<<endl;
 
    cout<<sum(5)<<endl;

    return 0;
}