#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int a;

    cin>>a;
    
    cout<< a/3600 << " jam " << a%3600/60 << " menit " << a%60 << " detik "<<endl;
    return 0;
}
