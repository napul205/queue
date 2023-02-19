#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class que{
    public:
    int arr[100];
    int front=0;
    int end=-1;
    
    void insert( int data)
    {
        if( end==99)
        cout<<"queue is full"<<endl;
        else
        {
        end=end+1;
        arr[end]=data;
        }
    }
    
    void dele()
    {
        if( end==-1)
        cout<<"queue is empty"<<endl;
        else
        {
            arr[front]=0;
            front=front+1;
        }
    }
    
    void print()
    {
        for ( int i=0;i<=end;i++)
        cout<<arr[i]<<" "<<endl;
    }
};
int main() {
	// your code goes here
	que q;
	q.insert(10);
	q.insert(20);
	q.insert(30);
	q.insert(40);
	q.insert(50);
	
	//q.dele()
	
	q.print();
	return 0;
}
