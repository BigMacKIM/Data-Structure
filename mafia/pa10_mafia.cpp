#include <iostream>
#include <algorithm>
#include <vector>
#define pair pair<int,int>
using namespace std;
int depth = 1;

struct node{
    string name;
    string boss;
    int parent = 0;
    pair snd = make_pair(0,1);
};

void input(vector<node> &mafia, int count){
    string person, boss;
    node temp;
    for(int i = 0; i < count-1; i++){
        cin >> person >> boss;
        temp.name = person;
        temp.boss = boss;
        mafia.push_back(temp);
    }
}

void addBoss(vector<node> & mafia, int count){
    node temp;
    bool isBoss = true, flag = false;
    for(int i = 0 ; i < count; i++){
        if(!isBoss){
            temp.name = mafia[i-1].boss;
            temp.parent = -1;
            mafia.push_back(temp);
            flag = true;
        }
        if(flag) break;
        isBoss = false;
        for(int j = 0 ; j < count -1; j++){
            if(mafia[i].boss == mafia[j].name){
                isBoss = true;
                break;
            }
        }
    }

}

void addParent(vector<node> &mafia){
    for(int i =0; i< mafia.size(); i++){
        for(int j = 0; mafia.size(); j++){
            if(mafia[i].boss == mafia[j].name){
                mafia[i].parent = j;
                break;
            }
        }
    }
}

void dfs(vector<node> &mafia, int idx){
    if(mafia[idx].parent == -1)return;
    mafia[mafia[idx].parent]
}
int main(){
    int count;
    vector<node> tree;
    cin >> count;

    input(tree, count);
    addBoss(tree,count);

}