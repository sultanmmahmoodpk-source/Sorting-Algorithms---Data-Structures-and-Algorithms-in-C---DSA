#include<iostream>
using namespace std;

void linearsearch(int arr[], int range, int search){
    int k = 0,i;
    for(i = 0;i<range; i++){
        if(arr[i] == search){
            cout<<"Number is Found at position: "<< i + 1 << endl;
            k = 1;   // number mil gaya to k ki value change karni zaroori thi
            // break
            // if your Number is Unique then you can use break keyword
        }
    }
    if(k==0){
        cout<<"Number not Found"<<endl;
    }
}


int main(){
    int arr[100], range, search, i;   // FIX: unused variable k hata diya
    cout<<"Enter Your Range Between (1 - 100): ";
    cin>>range;

    // range check, warna 100 se zyada par array overflow ho jata hai
    if(range < 1 || range > 100){
        cout<<"Invalid Range! Please enter between 1 and 100."<<endl;
        return 0;
    }

    cout<<"Enter "<<range<<" Numbers: ";
    for(i = 0;i<range; i++){
        cin>>arr[i];
    }
    for(i = 0;i<range;i++){
        cout<<"You Entered Numbers: "<<arr[i]<<endl;   // FIX: ": " add kiya taake output saaf dikhe
    }
    cout<<"Enter a Number that you want to search: ";
    cin>>search;
    linearsearch(arr,range,search);

    return 0;
}