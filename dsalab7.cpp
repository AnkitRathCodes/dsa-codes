class node{
    public:
    int data;
    node* lc;
    node* rc;
    node(int val){

    }
}
class bst{
    node* root;
    public:
    bst(){
        root=nullptr; // bst mybst;
    }
    void Pre(node* n){
        if(n==nullptr){
            break;
        }
        cout<<n->data;
        Pre(n->lc);
        Pre(n->rc);

    }
    void In(node* n){
        if(n==nullptr){
            break;
        }
       
        Pre(n->left);
         cout<<n->data;
        Pre(n->right);

    }
    void Post(node* n){
        if(n==nullptr){
            break;
        }
        
        Pre(n->left);
        Pre(n->right);
        cout<<n->data;
    }
    node* insert(node* n , int val){
        if(!n){
            return new node(val);
        }
        if(val<n->data){
            n->lc=insert(n->lc , val);
        }else if(val >n->data){
            n->rc=insert(n->rc , val);
        }
    }
    node* insertitr(int val){
        if(!root){
            node* NN = node(val);
             root=NN;
        }
        while(true){
            if(root->val>val){
                if(root->left==nullptr){
                    node* NN = node(val);
                    root->left=NN;
                    break;
                }else{
                root=root->left;
                }
            }else{
                if(root->right==nullptr){
                    node* NN = node(val);
                    root->right=NN;
                    break;
                }else{
                root=root->right;
                }
            }
        }

    }
    void search(node* n ,int val){
        if(!n){
            cout<<"finding ...";
            return;
        }
        if(val<n->data){
            search(n->lc,val)
        }else if(val>n->data){
            search(n->rc,val);
        }else if(val==n->data){
            cout<<"found";
            return;
        }

    }
    void minE(node*n){
        while(n->lc!=nullptr){
            n=n->lc;
        }
        cout<<n->data;
    }
    void IOsuc(node* n ){
        n=n->rc;
        while(!n->lc){
            n=n->lc;
        }
        cout<<n->data;
    }
    int mindepth(node* n ){
        if(!n){
            return;
            
        }
    }
}

int main(){
    bst b;
    b.insert(5);
}