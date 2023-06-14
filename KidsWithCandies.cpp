// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
    vector<int> candies = {2,3,5,1,3};
    int len = candies.size();
    string arr[len];
    // cout<<candies[1];
    int extracandies = 3;
    int max= *max_element (candies.begin(), candies.end());
    for(int i=0; i<len;i++){
         if(candies[i]+extracandies >= max){
             arr[i]="true";
         }
         else{
             arr[i]="false";
        }
    }
    for(int k=0; k<len;k++){
        cout<<arr[k]<<endl;
    }
    return 0;
}
