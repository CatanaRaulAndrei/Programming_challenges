#include <bits/stdc++.h>
using namespace std;


int minInterval(int arr[],int i,int j){
    int* i1;
    i1 = min_element(arr+i, arr+j+1);
    return *i1;
}

int main(){
int arr[]={6,7,2,5,3,8,9,4};
cout<<minInterval(arr,1,3);
    return 0;
}
