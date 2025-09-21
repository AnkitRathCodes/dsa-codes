//good evening sir i have decided to do this assignment in a purely OOPS based format meaning that my function names are
//actully the question number and will have the same effect is object is created and performed upon
#include <iostream>
using namespace std;
Class Node{
    int data;
    Node *next;
    public:
    Node(int n){
        data=n;
        next=nullptr;
    }
};
Class LinkedList{
    Node *head;
    public:
    LinkedList(){
        head=nullptr;
    } 
    void InsertBeg(int val){
        Node *newnode = new Node(val);
        newnode->next=head;
        head = Newnode;
    }
    void InsertEnd(int val){
        Node *newnode = new Node(val);
        if(head==nullptr){
            head=newnode
        }
        Node *temp;
        temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=nullptr;
    }
    void InsertVal(int val , int after){
        Node *newnode = new Node(val);
        Node *temp  ;
        Node *temp1 ;
        temp=head;
        while(temp!=nullptr &&temp->data!=after ){
            temp=temp->next;
        } 
        temp1=temp->next;
        temp->next=newnode;
        newnode->next=temp1;
    }
    void Deletebeg(){
        if(head==nullptr){
            cout<<"cant delete";
        }else{
            Node *temp = head;
            head=head->next;
            delete temp;
        }
    }
    void Deleteend(){
        Node *temp = head;
        Node *temp1 ;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        temp1 = temp->next;
        temp->next=nullptr;
        delete temp1;
    }
    void Deleteelement(int val){
        Node *temp = head;
        Node *temp1;
        while(temp->next!=nullptr && temp->next->data!=val){
            temp=temp->next;
        }
        temp1 = temp->next;
        temp->next=temp1->next;
        delete temp1;
    }
    void search(int val){
        Node *temp = head;
        int c=0;
        while(temp!=nullptr && temp->data!=val){
            temp=temp->next;
            c++;
        }
        cout<<c;
        
    }
    void Display(){
        Node *temp = head;
        while(temp->next!=nullptr ){
            cout<<temp->data;
            temp=temp->next;
        }
        
    }
    void Q2(int key){
        Node *temp1 = head;
        while(temp->next!=nullptr){
            while(temp->next->data!=key){
                temp1=temp->next;
                temp->next=temp1->next;
                delete temp1;
            }
            temp=temp->next;
        }
    }
    void Q3{
        Node *temp = head;
        int c=0;
        while(temp->next!=nullptr){
            temp=temp->next;
            c++;
        }
        temp=head;
        for(int i=0 ; i<c/2 ; i++){
            temp=temp->next;
        }
        cout<<temp->next->data;
    }     
    void Q4() {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode = nullptr;
    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;
};      
int main(){
    LinkedList mylist;
    for(int i=0 ; i<10 ; i++){
        cin>>x;
        mylist.InsertEnd();
    }
    mylist.Q4;


}