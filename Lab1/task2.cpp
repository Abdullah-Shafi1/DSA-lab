#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,7,9,10};
    int toCheck;
    cout<<"Enter your roll no:"<<endl;
    cin>>toCheck;
    bool found=false;
    int foundAt;
    int start=0;
    int end=(sizeof(arr)/sizeof(int))-1;
    cout<<end;
    cout<<"------"<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
       
        int mid=(start+end)/2;
        cout<<"Mids are"<<mid<<endl;
        if (toCheck==arr[mid]){
            found=true;
            foundAt=mid;
            break;
        }
        else if(toCheck>arr[mid]){
            cout<<"We are here"<<endl;
            start=mid+1;
        }
        else if(toCheck<arr[mid]){
            end=mid-1;
        }
    }
    if(found){
        cout<<"We found your number at "<<foundAt<<endl;

    }
    else{
        cout<<"Sorry your number couldn't be found!"<<endl;
    }
    system("Pause");
    return 0;
}