#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,int>mymap;//ye hashtable type hota hai,key value pair
std::map<int,int>::iterator it;
//pehla key dusra value
for(int i=1;i<6;i++){
    mymap[i] = i*10;
}
if(mymap.find(3)!=mymap.end()){//pehle check kie ki exit krta bhi hai ki nai agr krta hai to iterator ka first ar second access kie
    // mymap.find(3) ek iterator return krta hai
 cout<<"found"<<endl;
 cout<<mymap.find(3)->first<<" ";
 cout<<mymap.find(3)->second;
 cout<<endl;
 }

  it=mymap.find(5);
  mymap.erase(it);

 if(mymap.find(5)==mymap.end()){
 cout<<"not found"<<endl;
 }

// acha pair pata hai
pair<int ,int >p;
p.first = 10;
p.second = 20;
cout<<p.first<<p.second;
//bhaiya jaise mypair class me banate the na
//wahi inbuilt hota hai
}
