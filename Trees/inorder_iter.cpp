vector<int> inOrder(Node* root)
  {
      vector<int>ans;
      stack<Node*>st;

      while(root || !st.empty()){
          while(root){
              st.push(root);
              root = root->left;
          }
          root = st.top();
          st.pop();
          ans.push_back(root->data);
          root = root->right;
      }
      return ans;
  }
