#include<iostream>
using namespace std;
void linearSearch(int*,int);
void slectionSort(int*,int);
void bubbleSort(int*,int);
void binarySearch(int*,int);

int main(){
    int arr[5]={2,1,5,3,8};
    int size=sizeof(arr)/sizeof(int);
    int userChoice;
    cout<<"Press 1 for Linear Search"<<endl;
    cout<<"Press 2 for Binary Search"<<endl;
    cin>>userChoice;
    switch (userChoice)
    {
    case 1:
        linearSearch(arr,size);
        break;
    
    case 2:{
        int userChoice1;
        cout<<"Bubble Sort or Selection Sort:(1/2)?"<<endl;
        cin>>userChoice1;
        if (userChoice1==1)
        {
          bubbleSort(arr,size);   
        }
        if (userChoice1==2)
        {
            slectionSort(arr,size);
        }
        binarySearch(arr,size);
        
            
        }    
    
    }
    system("Pause");
    return 0;
}
void slectionSort(int arr[],int size){
    
    int min=0;
    int temp=0;
    for(int i=0;i<size-1;i++){
       min=i;
       for(int j=i;j<size-1;j++){
        if(arr[min]>arr[j]){
            min=j;
        }        
       }
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
    }
    cout<<"Selection Sort Completed..."<<endl;
    cout<<"The size is "<<size<<endl;
    cout<<"The array is:"<<endl;
    cout<<"------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
        
    }
    cout<<"------------"<<endl;
    
}
void binarySearch(int arr[],int size){
    int toCheck;
    cout<<"Enter your roll no:"<<endl;
    cin>>toCheck;
    bool found=false;
    int foundAt;
    int start=0;
    int end=size-1;
    cout<<end;
    cout<<"------"<<endl;
    for(int i=0;i<size;i++){
       
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
}
void linearSearch(int arr[],int size){
    int toCheck;
    cout<<"Enter your roll no:"<<endl;
    cin>>toCheck;
    bool found=false;
    int foundAt;
    for(int i=0;i<size;i++){
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
}
void bubbleSort(int arr[],int size){
    
    int temp=0;
    for(int i=0;i<size-1;i++){
  
       for(int j=i;j<size-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;       
        }        
       }
       
    }
    cout<<"Bubble Sort Completed..."<<endl;
    cout<<"The size is "<<size<<endl;
    cout<<"The array is:"<<endl;
    cout<<"------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
        
    }
    cout<<"------------"<<endl;
       
}