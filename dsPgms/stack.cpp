//simple stack program
#include<iostream>
using namespace std;
template<class Type>
class Stack{
       private:
              Type *array;
              int top;
              int maxSize = 10;
       public:
              Stack(int size){
                     this->maxSize = size;
                     this->array = new Type[maxSize]{0};
                     this->top = -1;
              }
              bool isFull(){
                     return (top==(maxSize-1));
              }
              bool isEmpty(){
                     return(top==-1);
              }
              bool push(Type item){
                     if(isFull()){
                            return false;
                     }
                     this->array[++top] = item;
                     return true;
              }
              Type pop(){
                     if(isEmpty()){
                            return false;
                     }
                     Type value = array[top];
                     this->array[top--] = 0 ;
                     return value;
              }
              void display(){
                     for(int i=0;i<=top;i++){
                            cout<<array[i]<<" ";
                     }
                     cout<<endl;
              }
};
int main(){
       Stack<int>s(5);
       s.push(10);
       s.push(20);
       s.push(-50);
       s.push(-4);
       s.push(101);
       s.push(20);
       s.display();
       s.pop();
       s.pop();
       s.display();
       cout<<endl;
       return 0;
}