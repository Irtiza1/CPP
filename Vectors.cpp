//Vector in CPP
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
     vector<int> myVector; //creating an empty vector

    vector<int> myvector1(5,0); //creating vector with initial size and default value:0;
     
    int arr[]={1,2,3,4,5};
    vector<int> myvector2(arr,arr+sizeof(arr)/sizeof(int));

   // cout<<myvector2[0]; //acccessing 1st element of myvector2

    myvector2[0]=10; //modifying the element at index 0
 //   cout<<myvector2[0]<<endl;
    myvector2.at(4)=100; //modifying the element at index 0
 //   cout<<myvector2[4]<<endl;

   // cout<<myvector2.size()<<endl;//finding the size of vector: 5
  //  cout<<myvector2.capacity()<<endl;//finding the capacity of vector: 5
    
    myvector2.push_back(190);

   // cout<<myvector2.size()<<endl;//finding the size of vector: 6
  //  cout<<myvector2.capacity()<<endl;//finding the capacity of vector: 10    

    myvector2.insert(myvector2.begin()+1,10); //adding 10 at index 1
    //1st mehtod
    for(int i=0; i<myvector2.size();i++ ){
        cout<<myvector2[i]<<" ";
    }

  //2nd method
    // for(int num: myvector2){
    //   cout<<num<<" ";
    // }
  cout<<endl;
  //removing element from a vector
  myvector2.pop_back();
  for(int num: myvector2){
      cout<<num<<" ";
  }

  myvector2.erase(myvector2.begin()+1); // removing element at index 1
  for(int num: myvector2){
      cout<<num<<" ";
  }
  cout<<endl;
  vector<int> arr11={3,2,4,1,10};
  sort(arr11.begin(for(int num: arr11){
    cout<<num<<" ";
  }),arr11.end());
  for(int num: arr11){
      cout<<num<<" ";
  }

  //searching
  int element=4;
  auto it=find(arr11.begin(),arr11.end(),element);
  if(it !=arr11.end()){
    cout<<"element found at index: "<<distance(arr11.begin(),it);
  }
  else{
    cout<<"element not found";
  }

  //resizing a vector
  arr11.resize(2);
  cout<<endl;
  for(int num: arr11){
    cout<<num<<" ";
  }

  arr11.resize(6,0);
  for(int num: arr11){
    cout<<num<<" ";
  }
  cout<<endl;

  arr11.clear();
  cout<<arr11.size()<<endl; 

  if(arr11.empty())
  cout<<"empty"<<endl;
  else
  cout<<"not empty"<<endl;


  cout<<"first element: "<<myvector2.front()<<endl;
  cout<<"last element: "<<myvector2.back()<<endl;


  vector<int> v1={1,2,3};
  vector<int> v2={4,5,6};

  v1.swap(v2);
  for(int num: v1){
    cout<<num<<" ";
  }
  cout<<endl;

  for(int num: v2){
    cout<<num<<" ";
  }

  vector<int> v3;
  v3.reserve(100);
  cout<<v3.capacity();
}

