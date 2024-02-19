#include<iostream>
using namespace std;
// bad practice 
// in case of global varible use reference variables
int score=50;

// bad practice because it change the value in entire code if changed in a single function only
void a(int& i){
    cout<<"In first function value of score is "<<score<<endl;

}
void b(int& i){
    cout<<"In second function value of score is "<<score<<endl;
}
int main(){
    cout<<"In main function value of score is "<<score<<endl;
    score++;//it will change value of score in entire code
    int i=5;
    a(i);
    b(i);
    return 0;

}