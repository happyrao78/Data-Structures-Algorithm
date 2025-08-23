#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int row=matrix.size();
    int col=matrix[0].size();
    vector<vector<int>> arr(col,vector<int> (row));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[j][i]=matrix[i][j];
        }
    }
    return arr;
}
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans=transpose(matrix);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}