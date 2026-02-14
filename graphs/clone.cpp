#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

 //we're using a hashmap to keep a track of the original and its copy

unordered_map<Node*,Node*>mp; //original node and its copy


Node* cloneGraph(Node* node){


    //if node is null then return null
    if(node==NULL){
        return NULL;
    }

    //if already cloned, then return it
    //here mp.end means the if the node does not exist, then just return it
    if(mp.find(node) !=mp.end()){
        return mp[node];
    }

    //otherwise create the clone
    Node* clone=new Node(node->val);
    mp[node]=clone; //store the original and copy in the hashmap


    //traversing the neighbors of the original node and cloning them
    for(int i=0;i<node->neighbors.size();i++){  //u can also write for(Node* neighbor:node->neighbors)
        
        clone->neighbors.push_back(cloneGraph(node->neighbors[i]));
    }

    return clone;


}
