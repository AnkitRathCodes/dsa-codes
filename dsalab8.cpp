#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class node{
    int val;
    int wt;
    node* next;
    public:
    node(v){
        val=v;
        next=nullptr;
    }
};
class graph{
    node* arr[10];
    public:
    graph(){
        for(int i=0 ; i<10 ; i++){
            arr[i]=nullptr;
        }
    }
    void addedge(int src , int dest){
        node* NN = new node(dest);
        NN->next=arr[src];
        arr[src]=NN;

        node* NN1 = new node(src);
        NN1->next=arr[dest];
        arr[dest]=NN1;
    }
    void deleteedge(int src , int dest){
        node* temp = arr[src];
        node* prev = nullptr;
        while(temp!=nullptr){
            if(temp->val==dest){
                if(prev==nullptr){
                    prev=temp;
                    arr[src]=temp->next;
                    delete prev;
                    break;
                }else if(temp->next==nullptr){
                    prev->next=nullptr;
                    delete temp;
                    break;
                }else{
                    prev->next=temp->next;
                    delete temp;
                    break;

                }
            }
            prev=temp;
            temp=temp->next;
        }
        
    }
    void printgraph(){
        for(int i=0 ; i<10 ; i++){
            node* temp=arr[i];
            while(temp!=nullptr){
                cout<<temp->val;
                temp=temp->next;

            }
            cout<<endl;
        }
    }
    bool hasedge(int src,int dest){
        node* temp=arr[src];
        while(temp!=nullptr){
            if(temp->val==dest){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void BFS(int v){
        queue<int> Q;
        bool vi[10];
        for(i:vi){
            i=false;
        }
        Q.push(v);
        while(!Q.empty()){
            cout<<Q.front();
            node* temp=arr[Q.front()];
            while(temp!=nullptr){
                if(vi[temp->val]==false){
                    Q.push(temp->val);
                    vi[temp->val]=true;
                }
                temp=temp->next;

            }
            Q.pop();

        }
    }
    void SD(int src){
        bool visited[v];
        int dist[v];
        for(int i=0 ; i<v ; i++){
            visited[i]=false;
            dist[i]=1000;
        }
        dist[src]=0;
        while(true){
            int u=-1;
            int min=1000;
            for(int i=0 ; i<v ; i++){
                if(!visited[i] && dist[i]<min){
                    min=dist[i];
                    u=i;
                }
            }
            if(u==-1){
                break;
            }
            visited[u]=true;
            node* temp=arr[u];
            while(temp!=nullptr){
                int v=temp->val;
                int wt = temp->wt;
                if(!visited[v] && wt+ dist[u]<dist[v]){
                    dist[v]=wt+dist[u];
                }
                temp=temp->next;
            }
        }

        

    }
    void DFS(int src){
        stack<int> s;
        s.push(src);
        cout<<src;
        bool vs[V];
        for(int i=0 ; i<V ; i++){
            vs[i]=false;
        }
        vs[src]=true;
        while(!s.empty()){
            int curr = s.top()
            node* temp = arr[curr];
            bool found=false;
            while(temp!=nullptr){
                if(!vs[temp->val]){
                    s.push(temp->val);
                    cout<<temp->val;
                    vs[temp->val]=true;
                    found=true;
                    break;

                }else{
                    temp=temp->next;
                }
                
            }
            if(!found){
                s.pop();
            }
        }

    }
}
int main(){

}