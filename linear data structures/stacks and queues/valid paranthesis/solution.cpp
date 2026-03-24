#include <iostream>
using namespace std;
#include <vector>
#include <stack>

bool isValid(string s){
    stack<char> opening;

    for(char x:s){
        if(x=='('||x=='{'||x=='['){
            opening.push(x);
        }
        else{
            if(opening.empty()){
                return false;
            }
            else if(x==')' && opening.top()!='('){
                return false;
            }
            else if(x=='}' && opening.top()!='{'){
                return false;
            }
            else if(x==']' && opening.top()!='['){
                return false;
            }
            else{
                opening.pop();      // i forgot this dont forget it
            }
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

    // cout<<isValid(s);   this prints integers by default 
        if(isValid(s)) cout<<"true\n";
        else cout<<"false\n";
    }
    
    return 0;
}