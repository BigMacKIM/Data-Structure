#include <iostream>
#include <algorithm>
using namespace std;
int pre[10000];
int post[10000];

bool isEqual(const int *rhs, const int *lhs, int length){
    for(int i = 0; i < length; i++){
        if(rhs[i] != lhs[i])
            return false;
    }
    return true;
}

int input(){
    int idx = 0;
    int idx2 = 0;
    while(true){
        int temp;
        cin >> temp;
        if(temp == -9)
            break;
        pre[idx] = temp;
        idx++;
    }
    while(true){
        int temp;
        cin >> temp;
        if(temp == -9)
            break;
        post[idx2] = temp;
        idx2++;
    }
    if(idx != idx2)
        return -1;
    return idx;
}

int* shuffle(const int* list,int length){
    int L2 = length/2;
    int L1 = length - L2;

    int* l = new int[length];
    int* l1 = new int[L1];
    int* l2 = new int[L2];

    int temp = 0;
    for(int i =0; i < L1; i++){
        l1[i] = list[i];
        temp++;
    }
    for(int i = 0; i < L2; i++){
        l2[i] = list[temp+i];
    }
    for(int i = 0; i < L1; i++){
        l[2*i] = l1[i];
        l[2*i +1] = l2[i];
    }

    delete[] l1;
    delete[] l2;
    return l;
}
int check(int length){
    int *temp = new int[length];
    int *temp2 = new int[length];
    for(int i = 0; i < length; i++){
        temp[i] = pre[i];
        temp2[i] = pre[i];
    }
    sort(temp2, temp2 + length);
    int idx = 0;
    while(!isEqual(temp, temp2,length)){
        if(idx == 0){
            sort(temp, temp + length);
            temp = shuffle(temp,length);
        }
        else{
            temp = shuffle(temp,length);
        }
        idx++;
        if(isEqual(temp, pre,length)){
            return idx;
        }
    }
    return -1;

}
int ascending(int* card,int length){
    int* temp = new int[length];
    for(int i =0 ; i< length; i++){
        temp[i] = 0;
    }
    int idx = 0;
    while(!isEqual(temp, card,length)){
        if(idx == 0){
            temp = shuffle(card, length);
        }
        else{
            temp = shuffle(temp,length);
        }
        idx++;
        if(isEqual(temp, post,length)){
            return idx;
        }
    }
    return -1;
}

int descending(int *card, int length){
    int* temp = new int[length];
    int idx = 0;
    while(!isEqual(temp, card,length)){
        if(idx == 0){
            temp = shuffle(card, length);
        }
        else{
            temp = shuffle(temp,length);
        }
        idx++;
        if(isEqual(temp, pre,length)){
            return idx;
        }
    }
    return -1;
}

int main() {
    int length = input();
    if(length == -1){
        cout << "NOT";
        return 0;
    }
    if(check(length) == -1){
        cout << "NOT";
        return 0;
    }
    int result = min(ascending(pre,length), descending(post, length));
    if( result == -1){
        cout << "NOT";
    }
    else{
        cout << result;
    }

}
