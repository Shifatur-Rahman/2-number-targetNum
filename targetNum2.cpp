#include <bits/stdc++.h>
using namespace std;

int main(){
 int x=13;
 int array[]={2,4,5,1,6,3,7,8};

 int size = sizeof(array)/sizeof(array[0]);
 cout<<"Array size = "<<size<<endl;

    for(int i =0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]+array[j] == x){
                cout<<array[i]<<" "<<array[j]<<endl;
                break;
            }
        }
    }
}
