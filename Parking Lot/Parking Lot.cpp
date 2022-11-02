#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k , n;
    int init;
    cin >> k >> n;
    init = k;
    vector<int> v;
    int a = 2*n;
    int *list = new int[a];
    for(int i = 0 ; i < a ; i++){
        list[i] = 0;
    }
    int idx = 0;
    for(int i = 0; i < n; i++){
        int temp;
        bool flag = false;
        cin >> temp;
        if(temp > 0){
            for(int j = 0; j < k; j++){
                if(list[j] == 0){
                    list[j] = temp;
                    idx++;
                    flag = true;
                    break;
                }
            }
            if(!flag){
                list[k] = temp;
                k *= 2;
                ++idx;
            }
        }
        else if(temp < 0){
            temp = -1* temp;
            for(int j = 0 ; j < k; j++) {
                if (temp == list[j]) {
                    list[j] = 0;
                    idx--;
                    if (idx == k / 3 && init < k ) {
                        for (int z = 0; z < k; z++) {
                            if (list[z] != 0)
                                v.push_back(list[z]);
                        }
                        for (int z = 0; z < k; z++) {
                            list[z] = 0;
                        }
                        for (int z = 0; z < v.size(); z++) {
                            list[z] = v[z];
                        }
                        k /= 2;
                        break;
                    }
                }
            }

        }
    }


    for(int i = 0 ; i < k; i++){

        if(list[i] != 0){
            cout << i+1 << " " << list[i] << endl;
        }
    }
    delete[]list;
