#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N = 0, K = 0;
    int count = 0; // 출력값
    
    cin >> N >> K;
    vector<int> v(N); // 동전의 가치
    
    
    for (int i = 0; i < N; i++){
        cin >> v[i]; 
    } 
    
    for(int i = N-1; i >= 0; i--){
        if (K==0) break;
        
        count += K/v[i];
        K %= v[i];
    }
    
    cout << count << '\n';
    return 0;
}