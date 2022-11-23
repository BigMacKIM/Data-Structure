#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool visit[76][76];
int d[76][76];
int path[76][76];
int number;


void init(){
    for(int i =1; i <= number; i++){
        for(int j = 1; j <= number; j++){
            path[i][j] = INT16_MAX;
        }
    }
}
vector<int>* input(){
    cin >> number;
    auto* tree = new vector<int>[number+1];
    for(int i = 0; i < number; i++){
        int idx;
        cin >> idx;
        while(true){
            int temp;
            cin >> temp;
            if(temp == 0) break;
            tree[idx].push_back(temp);
        }
    }
    return tree;
}

void makePath(vector<int>* tree){
    for(int i =1; i <= number; i++){
        for(int j = 0; j < tree[i].size(); j++){
            path[i][tree[i][j]] = tree[i].size();
        }
    }
    for(int i =1; i <= number; i++){
        for(int j = 1; j <= number; j++){
           if(path[i][j] == 0){
               path[i][j] = INT16_MAX;
           }
        }
    }
}

int getSmallIndex(int current){
    int min = INT16_MAX;
    int index = 0;
    for(int i = 1; i <= number ;i++){
        if(d[current][i] < min && !visit[current][i]){
            min = d[current][i];
            index = i;
        }
    }
    return index;
}
void dijkstra(int start){
    for(int i = 1; i <= number; i++)
        d[start][i] = path[start][i];

    visit[start][start] = true;
    for(int i = 0 ; i< number-2; i++){
        int current = getSmallIndex(start);
        visit[start][current] = true;
        for(int j = 1; j <= number; j++){
            if(!visit[start][j]){
                if(d[start][current] + path[current][j] < d[start][j]){
                    d[start][j] = d[start][current] + path[current][j];
                }
            }
        }
    }

}

int answer(vector<int>* tree){
    int max = 0;
    for(int i =1; i<= number; i++){
        for(int j =1 ;j<=number; j++){
            if(d[i][j] > 1000)
                d[i][j] = 0;
            else{
                d[i][j] = d[i][j] - tree[i].size()+1;
            }
            if(d[i][j] > max)
                max = d[i][j];

        }
    }
    return max;
}

int main(){
    init();
    auto* tree = input();
    makePath(tree);
    for(int i = 1; i <= number; i++){
        dijkstra(i);
    }
    int result = answer(tree);

    for(int i =1 ; i<= number; i++){
        for(int j=1; j <= number; j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    cout << result;
}