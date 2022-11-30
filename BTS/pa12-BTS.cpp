#include <iostream>
#include <vector>
using namespace std;
bool flag = false;
struct node{
    string data;
    struct node* left;
    struct node* right;
};

node* insert(node* now, const string& s){
    if(now == nullptr){
        now = new node();
        now->data = s;
        now->left = nullptr;
        now->right = nullptr;
    }
    else{
        if(s < now->data){
            now->left = insert(now->left, s);
        }
        else if(s > now->data){
            now->right = insert(now->right, s);
        }
    }
    return now;
}

struct node* findSub(struct node* n,bool check){
    struct node* current = n;
    if(check){
        while(current && current->right != nullptr){
            current = current -> right;
        }
    }
    else{
        while(current && current->left != nullptr){
            current = current-> left;
        }
    }
    return current;
}

struct node* remove(struct node* now,const string& s){
    if(now == nullptr)
        return now;
    if(s < now-> data){
        now->left = remove(now-> left, s);
    }
    else if(s > now->data){
        now->right = remove(now->right, s);
    }
    else{
        struct node* temp;
        if(now -> left == nullptr && now->right == nullptr){
            delete now;
            now = nullptr;
        }
        else if(now-> right != nullptr){
            temp = findSub(now->right, false);
            now->data = temp->data;
            now->right = remove(now->right, temp-> data);
        }
        else if(now->left != nullptr){
            temp = findSub(now->left, true);
            now->data = temp-> data;
            now->left = remove(now->left, temp->data);
        }
    }
    return now;
}

void findLeaf(node* now){
    if(now == nullptr) return;

    if(now != nullptr){
        if(now->left==nullptr && now->right==nullptr)cout << now->data << " ";

        findLeaf(now->left);
        findLeaf(now->right);
    }
}

void findDepth(node* now, int idx, int level){
    idx++;
    if(now != nullptr){
        if(idx == level){
            cout << now->data << " ";
            flag = true;
        }
        findDepth(now->left,idx,level);
        findDepth(now->right, idx,level);
    }
    else{
        idx--;
        return;
    }
}

int main(){
    node* root = nullptr;
    int count;
    cin >> count;
    for(int i=0; i< count;i++){
        string cmd;
        cin >> cmd;
        if(cmd == "+"){
            cin >> cmd;
            root = insert(root, cmd);
        }
        else if(cmd == "-"){
            cin >> cmd;
            root = remove(root, cmd);
        }
        else if(cmd == "depth"){
            int level;
            cin >> level;
            flag = false;
            findDepth(root, 0, level);
            if(!flag) cout << "NO";
            cout << endl;
        }
        else if(cmd == "leaf"){
            findLeaf(root);
            cout << endl;
        }
    }
}