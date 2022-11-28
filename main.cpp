#include <iostream>
#include <cmath>
#include <array>
#include <iomanip>
#include <vector>
using namespace std;



//problem 1

//float arr_average(int arr[], int size){
//    float sum = 0;
//    float ctr = 0;
//    float average = 0;
//
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//        sum += arr[i];
//        ctr++;
//    }
//    average = sum/ctr;
//
//    return average;
//}

//problem 2

//float gpa(float arr[]){
//    float average = 0;
//    float sum = 0;
//    int ctr = 0;
//    for(int i = 0; i < 4; i++){
//        cin >> arr[i];
//        sum += arr[i];
//        ctr++;
//    }
//    average = sum/ctr;
//
//    cout << "English: " << arr[0] << "\nICT: " << arr[1] << "\nComputer Programming: " << arr[2] << "\nMath Foundations: " << arr[3] << endl;
//    cout << "Average GPA: " << average << endl;
//
//    return 0;
//}

//problem 3

//int get_min(int arr[], int size){
//    int min = 0;
//
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//        if(arr[i] < min){
//            min = arr[i];
//        }
//    }
//    cout << "Min=";
//
//    return min;
//}

// problem 4

//int x = 210015;

//void fun(int x){
//    cout << ::x * 1000 << endl;
//}

// problem 5

//void st(){
//    static int i = 7;
//    i++;
//
//    cout << i << endl;
//}

// problem 7&8

//int recursive_num(int num){
//
//        if(num <= 0){
//            return num;
//        } else {
//            cout << num << " ";
//            return recursive_num(num - 1);
//        }
//
//}

// problem 9

//int add(int num){
//    if(num == 1){
//        return 1;
//    } else {
//        return num + add(num - 1);
//    }
//}

// problem 10

//int factorial(int num){
//    if(num <= 1){
//        return 1;
//    } else {
//        return num * factorial(num - 1);
//    }
//}

// problem 11

//void numbers(int begin, int end){
//    if(begin <= end){
//        cout << begin << " ";
//        numbers(begin+=2, end);
//    }
//}

// problem 12

//int power(int base, int x){
//    if(x == 0){
//        return 1;
//    } else {
//        return base * power(base, x-1);
//    }
//}

// problem 13

//int get_mini(int arr[], int size, int min){

//    if(size < 0){
//        return min;
//    }
//
//    if(min > arr[size]){
//        min = arr[size];
//    }
//
//
//
//    return get_mini(arr, size-1, min);
//}


int main(){
    
//    Problem 1. ---------------------------------------|
//    int size;
//    cin >> size;
//    int arr[size];
//
//    cout << arr_average(arr, size) << endl;
    
//    Problem 2. ---------------------------------------|
    
//    float arr[4];
//
//    gpa(arr);
    
//    Problem 3. ---------------------------------------|
    
//    int size;
//    cin >> size;
//    int arr[size];
//
//    cout << get_min(arr, size) << endl;
    
//    Problem 4. ---------------------------------------|
    
//    int x = 2003;
//
//    cout << ::x << endl;
//    cout << x << endl;
//
//    cout << "Product: " << ::x * x << endl;
//    fun(x);
//    cout << endl;
    
//    Problem 5. ---------------------------------------|
 
//    st();
//    st();
//    st();
    
//    Problem 7&8. ---------------------------------------|
    
//    cout << recursive_num(10) << endl;
//    cout << recursive_num(50);
//
//    cout << endl;
    
//    Problem 9. ---------------------------------------|
    
//    int num;
//    cin >> num;
//
//    cout << add(num) << endl;
 
//    Problem 10. ---------------------------------------|
    
//    int num;
//    cin >> num;
//
//    cout << factorial(num) << endl;
 
//    Problem 11. ---------------------------------------|
    
//    int num;
//    cin >> num;
//
//    numbers(2, num);
//    cout <<  endl;
//    numbers(1, num);
    
//    Problem 13. ---------------------------------------|
    
//    int base, x;
//    cin >> base;
//    cin >> x;
//
//
//    cout << power(base, x) << endl;
    
//    Problem 13. ---------------------------------------|
    
//    int size;
//    cin >> size;
//    int arr[size];
//
//    for(int i = 0; i < size; i++){
//        cin >> arr[i];
//    }
//
//    int min = arr[0];
//
//    cout << get_mini(arr, size, min) << endl;

}
