vector<int> preOrder(Node* root)
{
    vector<int>ans;
    stack<Node*>st;
    if(!root)return ans; 
    st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->right)st.push(temp->right);
        if(temp->left)st.push(temp->left);
    }
    return ans;
}
