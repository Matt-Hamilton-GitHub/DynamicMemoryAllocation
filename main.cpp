#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void upper(char *ptr){
    for(size_t i{0}; i < strlen(ptr);i++){
        if(islower(ptr[i]))
            cout << (char) toupper(ptr[i]);
        else
            cout << ptr[i];
    }
cout << endl;
}

void lower(char *ptr){
    for(size_t i{0}; i < strlen(ptr);i++){
        if(isupper(ptr[i]))
            cout << (char) tolower(ptr[i]);
        else
            cout << ptr[i];
    }
cout << endl;
}

void reverse(char *ptr){
    for(size_t i{0}; i < strlen(ptr);i++){
        if(islower(ptr[i]))
            cout << (char) toupper(ptr[i]);
        else if(isupper(ptr[i]))
            cout << (char) tolower(ptr[i]);
        else
            cout << ptr[i];
    }
cout << endl;
}

void displayInt(int ptr [], int len){
    cout << "[ ";
    for(int i{0}; i < len; i++){
        cout << *(ptr + i) << " ";
    }    
    cout << " ]" << endl;
}

void doubled(int *ptr){
    *ptr *=2;
}

int *arrayMake(int length, int numOf){
   int *myArray {nullptr};
   myArray = new int [length];
   
   for(size_t i{0}; i < length;i++)
        *(myArray + i) = numOf;
   
return myArray;
}

int main(){
    
    char full_name [50] {};
    int numbers [6] {1,4,7,-9,0,76};
    
    cout << "Enter your full name: " << endl;
    cin.getline(full_name,50);
    
    char *ptr {full_name};
    cout << "Array values: " << ptr << endl;
    
    int *int_ptr {numbers};
    displayInt(int_ptr,6);
cout << "---------------------------------" << endl;
    cout << endl;
    upper(ptr);
    lower(ptr);
    reverse(ptr);

cout << "---------------------------------" <<  endl;
    
    while(*int_ptr != 76){
        cout << int_ptr << endl;
        int_ptr++;
        
    }
  
//cout << "---------------------------------" << endl;
//int num {8};
//cout << "Value: " << num << endl;
//doubled(&num);
//cout << "Value: " << num << endl;
//
//int *ptr1 {&num};
//doubled(ptr1);
//cout << "Value: " << num << endl;
//-------------------------------------
int length {120};
int num {65};
int *array1 {nullptr};

array1 = arrayMake(length, num);

cout << array1 << endl;
displayInt(array1,length);

//------------------------------------
int n1 {90};
int *p {&n1};
cout << "Value of p before: " << *p << endl;
doubled(p);
cout << "Value of p after: " << *p << endl;
//------------------References------------------

int num2 {78};
int &ref {num2};

cout << "Num2 Adress: " << &num2 << endl;
cout << "Ref Adress: " << &ref << endl;

    delete [] array1;
	system("pause");
    return 0;
}


