#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count;
    cin >> count;
    vector<pair<string, string>> tree;
    vector<string>s, d;
    for(int i = 0; i < count; i++){
        string parent,child;
        cin >> parent >> child;
        tree.emplace_back(parent,child);
    }

    string start, dest;
    cin >> start >> dest;
    while(true){
        bool flag = true;
        for(auto iter = tree.begin(); iter != tree.end(); iter++){
            if(!(iter->second.compare(start))){
                s.push_back(iter->first);
                start = iter->first;
                flag= false;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    while(true){
        bool flag = true;
        for(auto iter = tree.begin(); iter != tree.end(); iter++){
            if(!(iter->second.compare(dest))){
                d.push_back(iter->first);
                dest = iter->first;
                flag= false;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    int result;
    int x =0; int y;
    for(auto i= s.begin(); i != s.end(); i++){
        bool flag = true;
        x++;
        y =0;
        for(auto j = d.begin(); j != d.end(); j++){
            y++;
            if(!(i->compare(*j))){
                result = x+y;
                flag = false;
                break;
            }
        }
        if(!flag)
            break;
    }

    cout << result << endl;

}
