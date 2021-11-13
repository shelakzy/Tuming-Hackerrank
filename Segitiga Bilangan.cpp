#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n;

cin>>n;

if(n>9)
cout<< "Bilangan tidak sesuai!"<<endl;
else if(n<1)
cout<< "Bilangan tidak sesuai!"<<endl;
else if(n<=9)
for (int i = n; i>=1; i--){
for (int a = i; a>=1; a--){
cout<<i<<" ";
}cout<<endl;
}
else if(n>=1)
for (int i = n; i>=1; i--){
for (int a = i; a>=1; a--){
cout<<i<<" ";
}cout<<endl;
}

    return 0;
}

