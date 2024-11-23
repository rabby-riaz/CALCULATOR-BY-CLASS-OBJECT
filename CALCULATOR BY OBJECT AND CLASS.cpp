
#include <iostream>
using namespace std;
class calculate{
public:
    int choose,num1,num2,result ;


    void option() {

        cout<<endl<<"Enter your Choice :"<<endl<<endl;
        cout<<"Enter 1 for addtion :  " <<endl;
        cout<<"Enter 2 for sub : " <<endl;
        cin>>choose;


    }
    
    void input() {
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
    }
    void riaz(){
    switch(choose){
        
        case 1:
        
        result = num1+num2;
        cout<<result;
        break;
        case 2:
        result = num1-num2;
        cout<<result;
    }
    
    
}

};






int main() {
    calculate myob;
    myob.option();
    myob.input();
    myob.riaz();


    return 0;

}



//create a calculator by using object and class

//Riaz 11 November 2024
//allhamdulillah 

//parbo insha allah