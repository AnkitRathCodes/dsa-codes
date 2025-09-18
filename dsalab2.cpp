#include <iostream> //q1
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,4,5,6,7,8};
    int num=3;
    int start = 0;
    int end = 9 ;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==num){
            cout<<mid;
            break;
        }else if(arr[mid]>num){
            start=mid+1;

        }else if(arr[mid]<num){
            end=mid-1;
        }
    }
}

#include <iostream> 
#include <string>
using namespace std;
void swap(int &a , int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){ //q2
    int arr[] = {6,4,5,3,2,6,2,5,3,5,2,1};
    int n=12;
    for(int i=n-1 ; i>0 ; i--){
        for(int j=0 ; j<=i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
            }
        }
    }


/*3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of
n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted
Array
(a) Linear time
(b) Using binary search.
4) String Related Programs*/

#include <iostream> 
using namespace std;
int binary(int arr[] ; int n ){
    int low =0;
    int high = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]-arr[mid-1]>arr[mid]+arr[mid+1]){
            return arr[mid]-1;
        }else if(arr[mid]-arr[mid-1]<arr[mid]+arr[mid+1]){
            return arr[mid]+1;
        }else if(arr[mid]-arr[mid-1]=arr[mid]+arr[mid+1]){

        }
    }
}
int main(){
    int arr[] = {0,1,2,3,5,6,7,8,9,10};
    int n=10;
    int k=0;
    for(int i=0 ; i<n ; i++){
        
        if(arr[i]!=k){
            cout<<k<<"is missing";
            break;
        }
        k++;

    }
}

/*4) String Related Programs
(a) Write a program to concatenate one string to another string.
(b) Write a program to reverse a string.
(c) Write a program to delete all the vowels from the string.
(d) Write a program to sort the strings in alphabetical order.
(e) Write a program to convert a character from uppercase to lowercase.*/

#include <iostream> 
#include <string>
using namespace std;
int main(){
    string s1="ankit";
    string s2 = "rath";
    string s3 = "";
    string s4 = "";
    for(int i=0; i < s1.length(); i++) {
        s3 = s3 + s1[i];
    }
    for(int i=0; i < s2.length(); i++) {
        s3 = s3 + s2[i];
    }
    for(int i=0 ; i<s1.length()/2; i++){
        swap(s1[i],s1[s1.length()-i-1]);
    }
    for (int i = 0; i < s1.length(); i++) {
        char currentChar = s1[i];
        if (currentChar != 'a' && currentChar != 'e' && currentChar != 'i' && currentChar != 'o' && currentChar != 'u' &&
            currentChar != 'A' && currentChar != 'E' && currentChar != 'I' && currentChar != 'O' && currentChar != 'U') {
            s4 = s4 + currentChar;
        }
    }
    string s_sort = "zyxwv";
    int n = s_sort.length();
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (s_sort[j] > s_sort[j + 1]) {
                char temp = s_sort[j];
                s_sort[j] = s_sort[j + 1];
                s_sort[j + 1] = temp;
            }
        }
    }
    string s_upper = "jjJKhkhJJJj"
    for (int i = 0; i < s_upper.length(); i++) {
        if (s_upper[i] >= 'A' && s_upper[i] <= 'Z') {
            s_upper[i] = s_upper[i] + 32;
        }
    }

}

/*5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ
𝑐𝑜𝑙𝑢𝑚𝑛𝑠. Assuming an array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
(a) Diagonal Matrix.
(b) Tri-diagonal Matrix.
(c) Lower triangular Matrix.
(d) Upper triangular Matrix.
(e) Symmetric Matrix*/

#include <iostream> 
#include <string>
using namespace std;
int main(){
    int rows;
    int cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    int res[rows];
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            if(i==j){
                res[k]=arr[i][j];
                k++;
            }
        }
    }
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            if(i==j || i-j=1 || j-i=1){
                res[k]=arr[i][j];
                k++;
            }
        }
    }
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            if(i<=j ){
                res[k]=arr[i][j];
                k++;
            }
        }
    }
    
}



// Question 1 additional 
#include <iostream> 
using namespace std;
int main() {
    int arr[] = {8,16,12,16,4,0};
    int counter;
    for(int i=0 ; i<6 ; i++){
        for(int j= i+1 ; j<6 ; j++){
            if( arr[i] - arr[j] == 4 || arr[i] - arr[j] == -4){
                counter++;
            }
        }
    }
    cout << counter;

    return 0;
} 

// question 8 normal 
#include <iostream>
using namespace std;
int main() {
    int arr[] = {8,12,16,16};
  
    int counter;
    for(int i=0 ; i<4 ; i++){
        for(int j= i+1 ; j<i+2 ; j++){
            if( arr[j] != arr[i]){
                counter++;
            }
            }
        }
    
    cout << counter;

    return 0;
}


//question 7 normal 
#include <iostream>
using namespace std;
int main() {
   int arr[] = {1,2,5,7,3,4,0}
   int counter;
    for(int i =0 ; i<7 ; i++){
        for(int j = i+1 ; j<7 ; j++){
            if(arr[j]<arr[i]){
                counter++;
            }
        }
    
        
    }
    cout << counter;
    

    return 0;
}
//sparse Qs
#include <iostream>
using namespace std;
int main(){
    int max=50;
    int s1[max][3] , s2[max][3] , res[max][3];
    cin >> rows >> cols >> elements;
    s1[0][0]=rows;
    s1[0][1]=cols;
    s1[0][2]=elements; 
    for(int i=1 ; i<elements ; i++){
        cin >> s1[i][0] >>  s1[i][1] >> s1[i][2];
    }
    cin >> rows2 >> cols2 >> elements2;
    s2[0][0]=rows2;
    s2[0][1]=cols2;
    s2[0][2]=elements2;
    for(int i=1 ; i<elements2 ; i++){
        cin >> s2[i][0] >>  s2[i][1] >> s2[i][2];
    }
    count1=elements;
    count2=elements2;
    int i=0;
    int j=0;
    int k=0;
    while(i<count1 && j<count2){
        if(s1[i][0]<s2[j][0]){
            res[k][0]=s1[i][0];
            res[k][1]=s1[i][1];
            res[k][2]=s1[i][2];
            k++;
            i++;
    }else if(s1[i][0]>s2[j][0]){
        res[k][0]=s2[j][0];
        res[k][1]=s2[j][1];
        res[k][2]=s2[j][2];
        j++;
        k++;
    }else{
        if(s1[i][1]<s2[j][1]){
            res[k][0]=s1[i][0];
            res[k][1]=s1[i][1];
            res[k][2]=s1[i][2];
            k++;
            i++;
        }else if(s1[i][1]>s2[j][1]){
            res[k][0]=s2[j][0];
            res[k][1]=s2[j][1];
            res[k][2]=s2[j][2];
            j++;
            k++;
        }else if(s1[i][1]==s2[j][1] || s1[i][0]==s2[j][0]){
            res[k][0]=s2[j][0];
            res[k][1]=s2[j][1];
            res[k][2]=s2[j][2]+s1[i][2];
            i++;
            j++;
            k++;
    }
    }

    
}
for(int l=0 ; l<k ; l++){
    cout<<res[l][0] <<res[l][1]<<res[l][2]<<endl;
}
}





