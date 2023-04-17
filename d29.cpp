#include<iostream>
using namespace std;

class Queue{
    public:
    const static int size=100;
    int start=-1;
    int end=-1;
    int arr[size];
    void enque(int x){
        if(end==size-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            end++;
            arr[end]=x;

        }
    }
    int deque(){
        if(start==end){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return(arr[++start]);
        }
    }
    void display(){
        if(start==end){
            cout<<"Queue is empty"<<endl;
        }
        else{
        cout<<"Queue contains :";
        for(int i=start+1;i<end+1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
    }
    
};

int main(){
    Queue q;
    int ch;
    do{
        cout<<"Enter a choice :"<<endl;
        cout<<"1->Fill job 2->Delete job 3->DIsplay job"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                int n;
                cout<<"How many jobs you want to add ?"<<endl;
                cin>>n;
                for(int i=0;i<n;i++){
                int x;
                cout<<"Enter the job code :"<<endl;
                cin>>x;
                q.enque(x);}
                q.display();
                break;
            case 2:
                cout<<"Deleted job is :"<<q.deque()<<endl;
                q.display();
                break;
           
            case 3:
                cout<<"EXITED"<<endl;
                break;
            }
            

    }while(ch!=3);
    return 0;
}