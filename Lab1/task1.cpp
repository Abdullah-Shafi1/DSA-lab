#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,3,7,2,1};
    int toCheck;
    cout<<"Enter your roll no:"<<endl;
    cin>>toCheck;
    bool found=false;
    int foundAt;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if (toCheck==arr[i]){
            found=true;
            foundAt=i;
            break;
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