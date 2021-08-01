/*
Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.

Problem Link: https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1/?track=md-tree&batchId=144#

*/
vector<int> verticalOrder(Node *root)
{
    map<int,vector<int>>mp;

    queue<pair<Node*, int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        int hd = q.front().second;
        Node* node = q.front().first;
        q.pop();
        mp[hd].push_back(node->data);

        if(node->left)q.push(make_pair(node->left, hd-1));
        if(node->right)q.push(make_pair(node->right, hd+1));
    }


    vector<int>ans;
    for(auto p : mp){
        for(auto e : p.second)ans.push_back(e);
    }
    return ans;
}
