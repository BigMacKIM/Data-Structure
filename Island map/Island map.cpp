#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visit[802][802] = {false,};

void BFS(int** map, int x, int y, int n, int m){
    if( x >= 0 && y >= 0 && x < m && y < n && !visit[x][y] && map[x][y] == 0){
        int mX[4] = {-1,0,1,0};
        int mY[4] = {0,1,0,-1};
        queue<pair<int,int>> q;
        q.push(make_pair(x,y));
        visit[x][y]= 1;
        while(!q.empty()){
            int tX = q.front().first;
            int tY = q.front().second;

            q.pop();
            for(int i = 0 ; i < 4; i++){
                int nX = tX+mX[i];
                int nY = tY+mY[i];
                if(0 <= nX && nX < m && 0 <= nY && nY < n){
                    if(map[nX][nY] == 0 && visit[nX][nY] == 0){
                        visit[nX][nY] = true;
                        map[nX][nY] = 2;
                        q.push(make_pair(nX,nY));
                    }
                }
            }
        }
    }
}

int main() {
    int n, m;
    cin >> m >> n;
    int **list = new int*[n+2];
    for(int i = 0 ; i <= n+1 ;  i++){
        list[i] = new int[m+2];
        for(int j= 0; j <= m+1; j++){
            list[i][j] = 0;
        }
    }
   for(int i = 1; i <= n; i++){
       for(int j = 1; j <= m; j++){
           scanf("%1d", &list[i][j]);
       }
   }
   int check;
   cin >> check;
   if(check != -1){
       cout << "Invalid data"<< endl;
       return -1;
   }
   BFS(list, 0,0,m+2,n+2);
   int idx = 0;
   for(int i = 1; i <= n; i++){
       for(int j= 1; j<= m; j++){
           if(list[i][j]== 0 || list[i][j]== 1){
               idx++;
           }
       }
   }
   cout << idx;
}
