#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>

class MyStack{
public:
    MyStack(){};
    queue<int> q1;
    queue<int> q2;

    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }

    int pop(){
        int ans=q1.front();
        q1.pop();
        return ans;
    }

    int top(){
        return q1.front();
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){
    MyStack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

}