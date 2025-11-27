class node{
    public:
    int data;
    node* lc;
    node* rc;
}
class bst{
    node* root
    public:
    bst(){
        root=nullptr;
        root->lc=nullptr;
        root->rc=nullptr;
    }
    void insert(int val){
        node* NN = new node(val);
        node* t=root;
        if(root==nullptr){
            root==NN;
            return;
        }
        while(true){
            if(t->data>val){
                if(t->lc==nullptr){
                    break;
                }
                t=t->lc;
            }else{
                if(t->rc==nullptr){
                    break;
                }
                t=t->rc;
            }
            
        }
        if(val<t->data){
                t->lc=NN;
            }else{
                t->rc=NN;
            }
        
    }
    void inserrec(int val , node* p){
        if(p==nullptr){
            node* NN= new node(val);
            p=NN;
            return;
        }
        if( val>p->data &&p->right==nullptr){
            node* NN= new node(val);
            p->right=NN;
            return;
        }else if(val<p->data &&p->left==nullptr){
            node* NN= new node(val);
            p->left=NN;
            return;
        }
        if(p->data<val){
            inserrec(val,p->right);
        }else{
            inserrec(val , p->left){

            };
        }
    }

    

};