#include<iostream>
using namespace std;

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

    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == Search){
            cout<<"Your Number is Found at "<<mid+1<<" index"<<endl;
            break;
        
        }
        else if(arr[mid] > Search){
            high = mid - 1;
        }
        else if(arr[mid] < Search){
            low = mid  + 1;
        }    
    }
if(low > high){
    cout<<"Number not founded!"<<endl;
}
    return 0;    
}
