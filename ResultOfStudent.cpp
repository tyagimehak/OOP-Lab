#include <iostream>
using namespace std;
class Marks{
    public:
    int rno;
    float perc;
    Marks(){
        
    }
    Marks(int r,float p){
        rno = r;
        perc = p;
    }
    void printDetails(){
        cout<<"Roll number : "<<rno;
        cout<<"    Percentage : "<<perc<<endl;
    }
};

class Student{
    private:
    Marks objM;
    string name;
    
    public:
    void setName(){
        cout<<"Enter the name : ";
        cin>>name;
    }
    void getResult(Marks obj){
        objM = obj;
        cout<<name<<endl;
        objM.printDetails();
        }
};
int main(){
     Marks Mks[5]={Marks(175,81),Marks(300,85),Marks(185,79),Marks(183,95),Marks(178,90)};
     Student std[5];
      for(int i=0;i<5;i++){
          std[i].setName();
      }
      for(int i = 0;i<5;i++){
          std[i].getResult(Mks[i]);
      }
  }
