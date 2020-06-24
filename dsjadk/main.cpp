#include <iostream>
using namespace std;

#include <armadillo>

using namespace arma;
class Test
{
private:
    int data1;
    float data2;
    
public:
    Test():data1(4),data2(5.0){
        
    }
    Test(int i1){
        
    }
    void function1()
    {   data1 = 2;  }
    
    float function2()
    {
        data2 = 3.5;
        return data2;
    }
};

struct Callback
{
    double execTime;
    int (*func)(int x, int y);
};

int max (int x, int y)
{
    return (x > y) ? x : y;
}
enum season
{   spring,
    summer = 4,
    autumn = 8,
    winter = 12
} card;

int main_old() {
    Test t1,t2;
    //int l[3][4];
    int x=5;
    int &time=x;
    int * ptr_x1 = &time;
    int * ptr_x = &x;
    Callback *cptr;
    Callback cb;
    cb.func = max;
    card = spring;
    std::cout << ptr_x1<<endl;
    
    std::cout << ptr_x<<endl;
    
    std::cout << card+5 <<endl;
    std::cout << card <<endl;
    std::cout << sizeof(season) <<endl;
    std::cout << t2.function2() <<endl;
    
    //error int &y = &x;
    //std::cout << &x << " : " << &y << " " << v <<"\n";
    uint8_t flag = 0;
    return 0;
    while(1) // main loop
    {
        if (flag == 1)
        {
            std::cout << "interrupted, flag=1"<<endl;
            flag = 0;
            
        }
        if(time ==100){
            flag=1;
            std::cout << time << endl;
            flag=0;
        }
        cout << (*ptr_x) << endl;
        (*ptr_x)++;
    }
    return 0;
}



int main_old2() {
    cout << "Armadillo version: " << arma_version::as_string() << endl;
    
    
    float arr[5];
    cout << *(arr-99) <<endl;
    cout << *(arr + 1) <<endl;
    cout << *(arr + 2) <<endl;
    
    return 0;
    // Inserting data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> *(arr + i) ;
    }
    
    // Displaying data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << (arr + i) << endl ;
    }
    
    return 0;
}
int main(){
    cout << "Armadillo version: " << arma_version::as_string() << endl;
    mat A(2,3);  // directly specify the matrix size (elements are uninitialised)
    A.fill(5.0);     // set all elements to a particular value
    // endr indicates "end of row"
    A << 0.165300 << 0.454037 << 0.995795  << endr
    << 0.688782 << 0.036549 << 0.552848  << endr
    << 0.348740 << 0.479388 << 0.506228  << endr
    << 0.148678 << 0.682258 << 0.571154  << endr
    << 0.245726 << 0.595218 << 0.409327  << endr;
    A.print("A:");
    mat B(3,5);
    
    B << 0.165300 << 0.454037 << 0.995795 << 0.124098 << 0.047084 << endr
    << 0.688782 << 0.036549 << 0.552848 << 0.937664 << 0.866401 << endr
    << 0.348740 << 0.479388 << 0.506228 << 0.145673 << 0.491547 << endr;
  
    B.print("B:");

    // determinant
     //cout << "det(A): " << det(A) << endl;
     
     // inverse
    // cout << "inv(A): " << endl << inv(A) << endl;
     
    
     // transpose
     cout << "B.t(): " << endl << B.t() << endl;
    
    // outer product
    cout << "A*B: " << endl << A*B << endl;
}
