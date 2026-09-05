#include<iostream>
#include<utility>
using namespace std;

pair<int,int> findkey(int mat[][4],int key, int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int key, rows=3, cols=4;
    // cout << "Enter the no. of rows you want";
    // cin >> rows;
    // cout << "Enter the no. of columns you want";
    // cin >> cols;
    int mat[3][4];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> mat[i][j];
        }
    }
    cout << "Enter the element you want to find!";
    cin >> key;
    pair<int,int> p= findkey(mat,key,rows,cols);
    cout << p.first << ", " << p.second << endl;
    return 0;

}