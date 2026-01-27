#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, sum = 0;
    cin >> N;
    
    vector<int> v(N); 
    
    
    for (int i=0; i < N; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for (int j = N; j > 0; j--){
        sum += j * v[N-j];
    }
    
    cout << sum;
    return 0;
}