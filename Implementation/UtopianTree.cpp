#include <iostream>
using namespace std;

int a[60];
int maxLenght;

int height(int n) {
    if(n>=maxLenght){
        for(int i=maxLenght; i<=n; i++){
            if(i%2 == 0){
                a[i] = a[i-1] +1;
            }else{
                a[i] = a[i-1] *2;
            }
        }
        maxLenght = n;
    }
    
    return a[n];
}
int main() {
    int T;
    cin >> T;
    a[0] = 1;
    maxLenght= 1;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
