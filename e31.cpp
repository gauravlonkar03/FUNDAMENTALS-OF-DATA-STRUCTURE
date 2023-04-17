#include<iostream>
using namespace std;

class dequeue{
        private:
        const static int max=10;
        int r=-1;
        int f=-1;
        int arr[max];
        public:
        void renque(int x){
            if(f==max-1){
                cout<<"Queue is empty :"<<endl;
            }
            else{
                r++;
                arr[r]=x;
            }
        }
        int fdeque(){
            if(f==r){
                cout<<"Queue is empty"<<endl;

            }
            else{
                   
                return arr[++f];
            }
        }
        
        void fenque(int y){
            if((f==-1)){
                cout<<"Queue is full"<<endl;
            }
        else{
            if(f==r){
                f=r=-1;
                return;
            }
            f--;
            arr[f]=y;
        }
        }
        int rdeque(){
            if(r==f){
                cout<<"Queue is empty"<<endl;
            }
            else{
                int w=arr[r];
                r--;
                return w;
            }
        }
        void display(){
            for(int i=f+1;i<=r;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    dequeue d;
    int ch;
    do{
        
        cout<<"Enter  a chooice "<<endl;
        cout<<"1-renque 2-fenque 3-fdeque 4-rdeque 5-display 6-exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
            int x;
            cout<<"Enter the element";
            cin>>x;
                d.renque(x);
                break;
            case 2:
                int y;
                cout<<"Enter a number you want to enter :"<<endl;
                cin>>y;
                d.fenque(y);
                break;
            case 3:
                cout<<"Number deleted "<<d.fdeque()<<endl;
                break;
            case 4:
                cout<<"The deleted element is :"<<d.rdeque()<<endl;
                break;
            case 5: 
                d.display();
                break;
            case 6:
                cout<<"EXITED"<<endl;

        }
    }while(ch!=6);
    return 0;
}
