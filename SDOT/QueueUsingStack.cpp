#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    stack<int> s1, s2;
    void enqueue(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue(){
        if(s1.empty()){
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
    void displayQueue() {
        stack<int> temp = s1;

        while(!temp.empty()){
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main(){
    Queue q;
  	int x;
  	cin >> x;
  	int ele;
  	while(x--){
      cin >> ele;
      q.enqueue(ele);
    }

  	int y;
    cin >> y;
  
    while(y--){
        q.dequeue();
    }

    cout << "Queue elements are: "<<endl;
    q.displayQueue();
	
    return 0;
}
