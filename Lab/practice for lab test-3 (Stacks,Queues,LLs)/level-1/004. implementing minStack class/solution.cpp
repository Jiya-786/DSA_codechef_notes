#include <iostream>
using namespace std;
#include <vector>
#include <stack>

// class MinStack means create a new data structure
// called MinStack like stack,vector,queue etc

//public means these functinons can be used from outside

// in platforms like leetcode we just implement the class
// acc to the given naming convention, they handle the main

class MinStack{
public:
    MinStack(){}     // this is a constructor 
// a constructor is a special function that-
// has the same name as the class,
// has no return type, 
// runs automatically when obj is created

// it runs when the obj is created and signifies that when
// the obj is created do nothing special

// its not mandatory to write constuctor in every class,
// if we dont write it cpp automatically makes its own constructor
    stack<int> mainStack;
    stack<int> minStack;

    void push(int val){
        mainStack.push(val);
        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            minStack.push(min(minStack.top(),val));
        }
    }

    void pop(){
        mainStack.pop();
        minStack.pop();
    }

    int top(){
        return mainStack.top();
    }

    int getMin(){
        return minStack.top();
    }

    void printStack(){
        while(!mainStack.empty()){
            cout<<mainStack.top()<<" ";
            mainStack.pop();
        }
        cout<<endl;
    }
};

int main(){
    MinStack st;

    st.push(3);
    st.push(5);
    st.push(18);
    
    st.printStack();

    cout<<st.getMin()<<endl;


}