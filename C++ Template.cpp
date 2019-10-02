#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;
	long long int arr[num];
	
	for (int i=0; i<num; i++){
	    cin >> arr[i];
	}
	
	cout << "Input number is " << num << endl;
}


/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}
---------------------------------------------------------------------------------------

//binary search; num=total elem in array; a= elem to find;
int search(long long int arr[], int num, long long int a){
    int low =0, high= num-1, mid;
    
    while (low <= high){
        mid = low+(high-low)/2;
        if(arr[mid] == a){
            return mid+1;
        }else if(arr[mid] > a){
            high = mid-1;
        }else if(arr[mid] < a){
            low = mid+1;
        }
    }
    
    return n-1;
}
---------------------------------------------------------------------------------------

//sum of all numbers in array n=size of array
int summ(long long int arr[], int n){

    int total=0;
    while (n--){
        total += arr[n];
    }
    
    return total;
}
---------------------------------------------------------------------------------------

//sorting array
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr, arr+n);

---------------------------------------------------------------------------------------
*/