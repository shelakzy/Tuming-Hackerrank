#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t , b, u;

cin>>t; cin>>b; cin>>u;

if (t <= 170)
cout<<"Tidak Lolos"<<endl;
else if (b <= 55)
cout<<"Tidak Lolos"<<endl;
else if (u < 15)
cout<<"Tidak Lolos"<<endl;
else 
cout<<"Lolos"<<endl;
   
    return 0;
}
