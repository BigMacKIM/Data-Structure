#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int DP[10001];
//DP
int main(){
    int count;
    cin >> count;
    int maximum = 0;
    for(int i = 0 ; i<  count ;i++){
        int start, time;
        cin >> start >> time;
        for(int j = 0 ; j < time; j++){
            DP[start +j] = DP[start+j] +1;
            maximum = max(maximum, DP[start+j]);
        }
    }
    cout << maximum;
}