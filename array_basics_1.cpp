/*Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right*/
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter the no. of elements you want in an array" <<endl;
cin>> n;
int arr [n+1];
for(int i=0; i<n;i++){
    cin>> arr[i];
}
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << endl;
cout<<"enter the element you want to insert: "<<endl;
int x;
cin>>x;
cout<<"enter the index position where you want to insert the elemment: " <<endl;
int pos;
cin>> pos;
for(int i = n - 1; i >= pos - 1; i--){
    arr[i + 1] = arr[i];
}

arr[pos - 1] = x;
for(int i = 0; i < n+1; i++){
    cout << arr[i] << " ";
}
cout << endl;
return 0;
}
