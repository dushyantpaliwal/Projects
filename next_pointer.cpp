class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
        queue<Node*>q;
        q.push(root);
        while (!q.empty()){
             int size = q.size();
            for( int i =0; i < size; i++){
                 Node *f = q.front();
                 q.pop();
              if(i!=size-1)
                f->next = q.front();

              if(f->left!=NULL){
                q.push(f->left);
              }
              if(f->right!=NULL){
                q.push(f->right);
              }
            }
        }
    //     if(root ==NULL)return root;
    //    Node* new1 = con(root->left);
        
    //     Node *new2 = con(root->right);
    //     new1->next = new2;
    //     return temp;
    return root;
    }
};
