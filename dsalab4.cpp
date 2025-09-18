#include <iostream>
using namespace std;
class Queue{
    int* arr;
    int f;
    int r;
    int capacity;
    public:
    Queue(int c){
        capacity=c;
        arr=new int[capacity];
        f=-1;
        r=-1;
    };
    bool IsEmpty(){
        if(f>r || r==-1){
            return true;
        }else{
            return false;
        }
    }
    bool IsFull(){
        if(r==capacity-1){
            return true;
        }else{
            return false;
        }
    }
    void enQ(int x){
        if(IsFull()){
            cout<<"cant add sorry";
        }else if(IsEmpty()){
            f++;
            r++;
            arr[r]=x;

        }else{
            r++;
            arr[r]=x;
        }
    }
    int  deQ(){
        if(IsEmpty()){
            cout<<"sorry cant help";
        }if(f==r){
            f=-1;
            r=-1;
        }else{
            return arr[f];
            f++;
        }
    }
    void Display(){
        for(int i=f ; i<=r ; i++){
            cout<<arr[i];
        }
    }
    ~Queue(){
        delete[] arr;
    }

};
    int main(){
        //Write a program interleave the first half of the queue with second half.
        //Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9
    int n=6;    
    Queue q(n);
    int in;
    for(int i=0 ; i<n; i++){
        cin>>in;
        q.enQ(in);
    }
    Queue q1;
    Queue q2;
    for(int i=0 ; i<n/2 ; i++){
        q1.enQ(q.deQ());
    }
    for(int i=n/2 ; i<n ; i++){
        q2.enQ(q.deQ());
    }
    for(int i=0 ; i<n; i++){
        q.deQ();
    }
    for(int i=0 ; i<n; i++){
        if(i%2==0){
            q.enQ(q1.deQ);
        }else{
            q.enQ(q2.deQ);
        }
    }

    

}


#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int f;
    int r;
    int capacity;

public:
    Queue(int c) {
        capacity = c;
        arr = new int[capacity];
        f = -1;
        r = -1;
    }

    bool IsEmpty() {
        if (f == -1) {
            return true;
        } else {
            return false;
        }
    }

    bool IsFull() {
        if ((r + 1) % capacity == f) {
            return true;
        } else {
            return false;
        }
    }

    void enQ(int x) {
        if (IsFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (IsEmpty()) {
                f = 0;
            }
            r = (r + 1) % capacity;
            arr[r] = x;
        }
    }

    void deQ() {
        if (IsEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            if (f == r) {
                f = -1;
                r = -1;
            } else {
                f = (f + 1) % capacity;
            }
        }
    }

    void Display() {
        if (IsEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = f;
        while (true) {
            cout << arr[i] << " ";
            if (i == r) {
                break;
            }
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enQ(10);
    q.enQ(20);
    q.enQ(30);
    q.deQ();
    q.enQ(40);
    q.enQ(50);
    q.enQ(60);
    q.enQ(70);
    q.Display();
    return 0;
}


//Write a program to find first non-repeating character in a string using Queue. Sample I/P: a a
//b c Sample O/P: a -1 b b

#include <iostream>
using namespace std;
class Queue{
    char* arr;
    int f;
    int r;
    int capacity;
    public:
    Queue(int c){
        capacity=c;
        arr=new char[capacity];
        f=-1;
        r=-1;
    };
    bool IsEmpty(){
        if(f>r || r==-1){
            return true;
        }else{
            return false;
        }
    }
    bool IsFull(){
        if(r==capacity-1){
            return true;
        }else{
            return false;
        }
    }
    void enQ(int x){
        if(IsFull()){
            cout<<"cant add sorry";
        }else if(IsEmpty()){
            f++;
            r++;
            arr[r]=x;

        }else{
            r++;
            arr[r]=x;
        }
    }
    int  deQ(){
        if(IsEmpty()){
            cout<<"sorry cant help";
        }if(f==r){
            f=-1;
            r=-1;
        }else{
            return arr[f];
            f++;
        }
    }
    void Display(){
        for(int i=f ; i<=r ; i++){
            cout<<arr[i];
        }
    }
    bool exists(char c){
        for(int i=f ; i<=r ; i++){
            if(c=arr[i]){
                return false;
                break;
            }else{
                return true;
            }
        }
    }
    ~Queue(){
        delete[] arr;
    }

};
    int main(){
     //Write a program to find first non-repeating character in a string using Queue. Sample I/P: a a
    //b c Sample O/P: a -1 b b
    string str = "aabc";
    Queue q;
    for(int i=0 ; i< str.length() ; i++){
        if(q.exists(str[i])){
            q.enQ(str[i]);
        }else{
            q.enQ(str[i]);
        }
    }

}

#include <iostream>
using namespace std;
class Queue{
    char* arr;
    int f;
    int r;
    int capacity;
    public:
    Queue(int c){
        capacity=c;
        arr=new char[capacity];
        f=-1;
        r=-1;
    };
    bool IsEmpty(){
        if(f>r || r==-1){
            return true;
        }else{
            return false;
        }
    }
    bool IsFull(){
        if(r==capacity-1){
            return true;
        }else{
            return false;
        }
    }
    void enQ(int x){
        if(IsFull()){
            cout<<"cant add sorry";
        }else if(IsEmpty()){
            f++;
            r++;
            arr[r]=x;

        }else{
            r++;
            arr[r]=x;
        }
    }
    int  deQ(){
        if(IsEmpty()){
            cout<<"sorry cant help";
        }if(f==r){
            f=-1;
            r=-1;
        }else{
            return arr[f];
            f++;
        }
    }
    void Display(){
        for(int i=f ; i<=r ; i++){
            cout<<arr[i];
        }
    }
    bool exists(char c){
        for(int i=f ; i<=r ; i++){
            if(c=arr[i]){
                return false;
                break;
            }else{
                return true;
            }
        }
    }
    ~Queue(){
        delete[] arr;
    }

};
    int main(){
    Queue q1;
    Queue q2;
    q1.enQ(10);
    while(!q1.IsEmpty){
        q2.enQ(q1.deQ);
    }
    q1.enQ(20);
    while(!q2.IsEmpty){
        q2.enQ(q1.deQ);
    }
    q2.Display();

}


