#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &l, vector<int> & r){
    while(true){
        int temp;
        cin >> temp;
        if(temp != -9){
            l.push_back(temp);
        }
        else
            break;
    }
    while(true) {
        int temp;
        cin >> temp;
        if (temp != -9)
            r.push_back(temp);
        else
            break;
    }

}

int getRow(vector<int> &l, vector<int> &r){
    int row, max = 0;
    for(int i = 0; i < r.size(); i++){
        int temp = l[i] + r[i] +1;
        if(max < temp)
            max = temp;
        if(r[i] == -1){
            row = l[i];
            return row;
        }
    }
    return max;
}

void processing(int** m,vector<int> &l, vector<int> & r){
    int row = getRow(l, r);
    int col = l.size();

    for(int i = 0 ; i < col ; i++){
        int length = l[i];
        for(int j = 0 ; j < length ; j++){
            m[i][j] = 1;
        }
        for(int j = row-1; j > row-1-r[i]; j--){
            m[i][j] = 1;
        }
    }
}

void getAnswer(int **m, int col ,int row){
    vector<int> top;
    vector<int> bottom;
    top.clear();
    bottom.clear();
    bool flag = false;
    for(int i = 0; i < row; i++){
        int idx = 0;
        for(int j = 0; j < col; j++){
            if(m[j][i] == 1){ // column , row
                idx++;
            }
            else{
                top.push_back(idx);
                flag = true;
                break;
            }
            flag = false;
        }
        if(!flag){
            top.push_back(col);
        }
        flag = false;
        idx = 0;
        for(int j = col-1; j >= 0; j--){
            if(m[j][i] == 1)
                idx++;
            else{
                bottom.push_back(idx);
                flag = true;
                break;
            }
            flag = false;
        }
        if(!flag)
            bottom.push_back(-1);
    }
    for(int i = 0; i < top.size(); i++){
        cout << top[i] << " ";
    }
    cout << "-9" << endl;
    for(int i = 0; i < bottom.size() ; i++){
        cout << bottom[i] << " ";
    }
    cout << "-9" << endl;
}

int main() {
    vector<int> left;
    vector<int> right;
    input(left,right);
    int row = getRow(left, right);
    int col = left.size();
    int **matrix = new int* [col];
    for(int i = 0 ; i < col ; i++){
        matrix[i] = new int[row];
        for(int j = 0 ; j < row; j++){
            matrix[i][j] = 0;
        }
    }
    //matrix[column][row]
    processing(matrix,left,right);

    getAnswer(matrix,col,row);
    delete[] matrix;
}

