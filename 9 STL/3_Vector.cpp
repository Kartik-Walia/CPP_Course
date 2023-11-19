// vector is just like an araay but it also resizes itself so that any no. of elements can be added 
// vector is like resizeable array 


#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v) {
    cout << "Displaying this vector "<<endl;
    for(int i=0; i<v.size(); i++) {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";     // Just another way of writing above line of code 
    }
    cout<<endl;
}

int main(){
    // WAYS TO CREATE A VECTOR 
    vector<int> vec1;   // Zero length integer vector
    display(vec1);

    vector<char> vec2(4);    // 4-element character vector
    vec2.push_back('5');
    display(vec2);

    vector<char> vec3(vec2);    // 4-element character vector from vec2
    display(vec3);

    vector<int> vec4(4, 13);    // 4-element vector of 13's
    display(vec4);
    cout << vec4.size() <<endl;


    int element, size;
    cout << "Enter size of your vector ";
    cin >> size;
    for(int i=0; i<size;i++){
        cout << "Enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element);
    }

    // vec1.pop_back();    // pops the last element 
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 566);
    // Inserts at 1 element behind element to which iterator points like if iter=1st element, inserts at 0 position
    // Basically it inserts at index = iterator 

    // You can even insert multiple copies of 566 by below syntax 
    vec1.insert(iter+1, 4, 566);

    display(vec1);
    
    return 0;
}