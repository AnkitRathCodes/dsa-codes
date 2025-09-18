#include <iostream>
using namespace std;

class ArrayOps {
private:
    int arr[50];
    int n;

public:
    
    ArrayOps() {
        n = 0;
    }
    void create() {
        cout << "Enter size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    void insert() {
        int pos, val;
        cout << "\nEnter position to insert: ";
        cin >> pos;
        cout << "Enter value to insert: ";
        cin >> val;

        for (int i = n - 1; i >= pos - 1; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = val;
        n++;
    }
    void del() {
        int pos;
        cout << "\nEnter position to delete: ";
        cin >> pos;

        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    void search() {
        int val, flag = 0;
        cout << "\nEnter value to search: ";
        cin >> val;

        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                cout << "Found at position " << i + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "Not found.\n";
        }
    }
};

int main() {
    ArrayOps a;
    a.create();
    a.display();

    a.insert();
    a.display();

    a.del();
    a.display();

    a.search();

    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,2,2,2,3,3,0,0,0,0,0,0};
    int n=7;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; ){
            if(arr[j]==arr[i]){
                for(int k=j ; k<n ; k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }else{
                j++;
            }
        }
    }
}








#include <iostream>
using namespace std;
int main(){
    int rows , cols;
    cout << "enter number of rows and columns";
    cin >> rows  >> cols;
    int arr[rows][cols] ;
    for(int i=0 ; i<rows; i++){
        for(int j=0 ; j<cols ; j++){
            cin >> arr[i][j];
        }
    }
    int sum;
    for(int i=0 ; i<rows; i++){
        sum=0;
        for(int j=0 ; j<cols ; j++){
            sum = sum + arr[i][j]
        }
        cout << "sum of row"<<i<<"is"<<sum;
    }
    for(int i=0 ; i<rows; i++){
        sum=0;
        for(int j=0 ; j<cols ; j++){
            sum = sum + arr[j][i];
        }
        cout << "sum of col"<<i<<"is"<<sum;
    }
}

#include <iostream>

using namespace std;

int main() {
    int arr[50], n, i, temp;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "\nReversed array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible.";
        return 0;
    }

    cout << "\nEnter elements of matrix 1:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of matrix 2:\n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "\nResultant Matrix:\n";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int a[10][10], t[10][10];
    int r, c, i, j;

    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    cout << "\nEnter elements of matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    cout << "\nTranspose of Matrix:\n";
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}