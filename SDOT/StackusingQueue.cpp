// You are using GCC
#include <bits/stdc++.h>
using namespace std;
class MyStack{
  queue<int>q1,q2;
public:
  void push(int x){
    q2.push(x); 
    while(!q1.empty()){
      q2.push(q1.front());
      q1.pop();
    }
    queue<int> q = q2;
    q2 = q1;
    q1 = q;
  }
  
  int pop(){
    int res = q1.front();
    q1.pop();
    return res;
  }
  int top(){
    return q1.front();
  }
  bool empty(){
     if(q1.empty()) return true;
     return false;
  }
};
int main() {
  MyStack s;
  int ele;
  
// Try out your code here
  while(true){
    int x;
    cin >> x;
    if(x==-1) break;
    switch(x){
      case 1:
        cin >> ele;
        s.push(ele);
        break;
      case 3:
        cout<<"Top element: "<<s.top()<<endl;
        break;
      case 2:
        cout<<"Pop: "<<s.pop()<<endl;
        break;
      case 4:
        if(s.empty() == 0){
          cout<<"Is empty: "<<"false"<<endl;
        }else{
          cout<<"Is empty: true"<<endl;
        }
        break;
      default: 
        break;
    }
  }
    return 0;
}