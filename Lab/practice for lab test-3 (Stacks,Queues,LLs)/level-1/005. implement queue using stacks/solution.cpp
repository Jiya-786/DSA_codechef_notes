#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>

class MyQueue{
public:
    MyQueue(){};
    stack<int> s1;
    stack<int> s2;

    void push(int x){
        s1.push(x);
    }

    void pop(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }

    int peek(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty(){
        return(s1.empty() && s2.empty());
    }

// This method isnt right becuase its destorying the og stack. 
//  after display everything will become empty so we need to use temporary stacks
    // stack<int> temp1=s1;
    // stack<int> temp2=s2;
    // void display(){
    //     while(!s2.empty()){
    //         cout<<s2.top()<<" ";
    //         s2.pop();
    //     }
    //     if(s2.empty() && !s1.empty()){
    //         while(!s1.empty()){
    //             s2.push(s1.top());
    //             s1.pop();
    //         }
    //         while(!s2.empty()){
    //         cout<<s2.top()<<" ";
    //         s2.pop();
    //     }
    //         cout<<endl;
    //     }
        
    // }
    void display(){
        stack<int> temp1=s1;
        stack<int> temp2=s2;
        while(!temp2.empty()){
            cout<<temp2.top()<<" ";
            temp2.pop();
        }
        if(temp2.empty() && !temp1.empty()){
            while(!temp1.empty()){
                temp2.push(temp1.top());
                temp1.pop();
            }
            while(!temp2.empty()){
            cout<<temp2.top()<<" ";
            temp2.pop();
        }
            cout<<endl;
        }
    }

};

int main(){
    MyQueue q;

    q.push(5);
    q.push(8);
    q.display();
    q.push(4);
    q.display();
    
    // if(q.empty()) cout<<"empty";
    // else cout<<"not empty";
    // q.display();

}