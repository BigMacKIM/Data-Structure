#include <iostream>
#include <vector>
using namespace std;

void infoOfBuilding(vector<pair<pair<int,int>,int>> &v, int count){  // set up data Set
    pair<pair<int, int> , int > parent;
    pair<int, int> child;
    for(int i = 0 ; i < count; i++){
        int start, height, width;
        cin >> start >> height >> width;
        child = make_pair(start, height);
        parent  = make_pair(child, width);
        v.push_back(parent);
    }
}


string getAnswer(vector<pair<pair<int,int>,int>> &p ,int x, int y){
    int index = 0, temp = 0;
    vector<int> v, equal;
    v.clear();
    for(auto iter = p.begin(); iter != p.end(); iter++){  // 입력받은 star의 x값에 해당하는 건물들 추려내기
        int start, end, height;
        start = iter->first.first;
        end = start+iter->second;
        height = iter->first.second;
        if(x > start && x < end)
            v.push_back(index);
        else if((x == start || x== end) && y <= height){
            equal.push_back(index);
        }
        index++;
    }
    for(auto iter = v.begin(); iter != v.end(); iter++){
        if(temp <= p[*iter].first.second){
            temp = p[*iter].first.second;
        }
    }
    if(temp > y) //under
        return "under";
    else if(temp == y) //on
        return "on";

    if(equal.empty()) // equal
        return "over";
    else if(equal.size() == 1){
        return "on";
    }
    else{
        for(int i = 0 ; i < equal.size(); i++){
            for(int j = 0; j <equal.size(); j++){
                if(p[equal[i]].first.first == p[equal[j]].second + p[equal[j]].first.first){
                    if((p[equal[i]].first.second > y) && (p[equal[j]].first.second > y))
                        return  "under";
                }
            }
        }
        return "on";
    }

}
int main(){

    int number;
    vector<pair<pair< int, int>,int>> building;
    cin >> number;
    infoOfBuilding(building,number);
    cin >> number;
    string *strArr = new string[number];
    for(int i =0 ; i < number; i++){
        int x,y;
        cin >> x>> y;
        strArr[i] = getAnswer(building,x,y);
    }
    for(int i = 0; i < number; i++){
        cout << strArr[i] << endl;
    }
    delete []strArr;

}
