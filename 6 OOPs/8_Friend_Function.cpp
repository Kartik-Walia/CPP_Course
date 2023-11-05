// Compiler is like Police
// Compiler sumComplex se keh rha hai ki beta sumComplex ek baat bta tu Complex ke private data ko access krne ki
// koshish kr rha hai, aisa kaise kr skta hai tu ?
// Complex class ke private data ko tum kyu access kroge ?
// Compiler sumComplex se kehta hai ki prvate members access krne ki permission Complex class written mei de tumhe
// sumComplex kehta hai ki Complex mera bhot acha dost hai
// Compiler kehta hai aise nhi chlta agli baar se Complex ko bolo ki apne ander ek declaration dede ki sumComplex
// mera dost hai

#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(int n1, int n2){
        a=n1;b=n2;
    }
    void printNumber(){
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }

    // Below line means that non-member sumComplex function is allowed to do anything with my private members
    friend Complex sumComplex(Complex o1, Complex o2);  // Written permission to say sumComplex is friend 
    // Written permission to allow sumComplex to access private members of class Complex 
    // This doesn't mean sumComplex has become a member function of this class 
    // Aisa nhi hai ki c1.sumComplex kaam krega !
    // Aisa nhi hai ki sumComplex member funciton ban chuka hai, yeh sirf ek declaration hai 
    // Yeh just ek outsider function who has permission to access some private members of class Complex 
};


Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    
    return 0;
}


// ==================================== PROPERTIES OF FRIEND FUNCTION ====================================
// 1. Not in the scope of class 
// 2. Since it is not in scope of class, it cannot be called from object of that class, c1.sumComplex() is Invalid 
// 3. Can be invoked without the help of any object 
// 4. Usually contains objects as arguments 
// 5. Can be declared inside public or private section of the class 
// 6. It cannot access the members directly by their names and need object_name.member_name to access any member 
//     cout<<a -> Invalid 
//     cout<<o1.a -> Valid 