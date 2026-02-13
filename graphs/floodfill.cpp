//flood fill-concept similar to number of islands except here we are forming the image

//instead of a grid of 1s and 0s you have an image
//you are also given a starting point i.e starting row and column and a new color
//if u find any neighbors adjacent which are similar, you have to change the color of the adjacent neighbors to the new color
//we can move up,down,left,right here and we keep going until we dont find any more neighbors
//finally we return the modified image
//so the image here is basically sotring a vector of vectors of colors?
//here sr-starting row,sc-starting column
//in cases where a neighbor doesnt exist we dont update the color
//if the neighbor hasnt been visited and has the same color as the starting point then we update the color to the new color

#include <bits/stdc++.h>
using namespace std;

//in number of islands-it was char so here in image we are using int not char
void bfs(int sr, int sc,vector<vector<int>> &image,int color,int newcolor){

    int m=image.size();
    int n=image[0].size();

    queue<pair<int,int>>q;

    image[sr][sc]=newcolor; //change the starting point to new color

    q.push({sr,sc});

    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};


    while(!q.empty()){

        int sr=q.front().first;
        int sc=q.front().second;

        q.pop();


        //cuz we're going left,right,up,down
        for(int i=0;i<4;i++){

            int nrow=sr+delrow[i];
            int ncol=sc+delcol[i];


            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==color ){
                image[nrow][ncol]=newcolor;
                q.push({nrow,ncol});
            }

        }
        
    }

}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor){

    int m=image.size();
    int n=image[0].size();

    int color=image[sr][sc]; //original color


 
    if(color==newcolor){
            return image;
                
    }

    bfs(sr,sc,image,color,newcolor);



return image;

}

