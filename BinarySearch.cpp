#include<iostream>
using namespace std;

void BinarySearch(int arr[], int low, int high, int Search){
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == Search){
            cout<<"The Number "<<Search<<" Is Found At Index: "<<mid<<endl;
            return;
        }
        else if(arr[mid] < Search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<"The Number "<<Search<<" Is Not Found In The Array."<<endl;
}

int main(){
    int arr[100],range, mid, low = 0, num,Search,index,high;

    cout<<"Enter Your Range Between (1 - 100)";
    cin>>num;
    high = num - 1;

    cout<<"Enter "<<num<<" Numbers: ";
    for(index = 0;index<num;index++){
        cin>>arr[index];
    }

    cout<<"Enter A Number That You Want to Search: ";
    cin>>Search;

    BinarySearch(arr, low, high, Search);
    return 0;    
}
