#include<iostream>
using namespace std;
class Pizza{
    const static int max=10;
    int f=0,r=0;
    int orders[max];
    public:   
    void add(int data){
        if((r+1)%max==f){
            cout<<"Cafe is full thodyavelane yaave"<<endl;
        }
        else{
            r=r+1%max;
            orders[r]=data;
        }
    }
    int serveOrder(){
        if(r==f){
            cout<<"Cafe is empty"<<endl;
                    }
        else{
            f++;
            cout<<"The order no being served is"<<orders[f]<<endl;
        }
    }
    void display(){
        if(r==f){
            cout<<"empty list"<<endl;
        }
        else{
            cout<<"The orders are :"<<endl;
            for(int i=f+1;i<=r;i++){
                cout<<orders[i]<<" "<<endl;
            }
        }
    }
};

int main(){
    Pizza p;
    int ch;
    do{
        cout<<"Enter a choice : "<<endl;
        cout<<"1-order | 2-serveorder| 3-display | 4-exited"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                int n;
                cout<<"How many order you want to order"<<endl;
                 cin>>n;
                 for(int i=0;i<n;i++){
                    int x;
                    cout<<"Enter the order no."<<endl;
                    cin>>x;
                    p.add(x);}
                

                break;
            case 2:
                p.serveOrder();
                break;
            case 3:
                p.display();
                break;
            case 4:
             cout<<"EXITED";
             break;

        }
    }while(ch!=4);

    return 0;
}