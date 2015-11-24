#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int tt = 1; tt<= t; tt++){
        int N, K;
        int a;
        int counter = 0;
        cin>>N>>K;
        for(int i=1; i<= N; i++){
            cin>>a;
            if(a <= 0){
                counter++;
            }
        }
        if(counter < K){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
