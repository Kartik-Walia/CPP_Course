/*
List : It's a bi-directional linear list which shows efficient operations of insertion & deletion
Bi-directional means you can traverse teh list backwards also after going forwards

In array, elements are stored in contiguous memory locations but this has a drawback that if we want to
remove an element, then we need to shift all other elements present on thr right one step towards left
In such cases, we use list (linked list)

In linked list, we store elements at random available locations and connect them using pointers 

In array, access is fast but In Linked list, deletion is fast bcoz in case of deletion in linked list we don't 
have to shift other elements 

We use list when we need to delete elements in between 
If you need insertion & deletion fast, then use list (linked list)
If you need access fast, then use array.
*/


#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){   // lst.end() gives reference for end of list
        cout<<*it<<" ";
    }
    cout << endl;
}

int main(){
    list<int> list1;    // List of 0 length 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    // REMOVING ELEMENTS FROM LIST (uncomment below set of code to learn)
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(9);    // It removes all occurences of entered element 
    // display(list1);
    // SORTING THE LIST (uncomment below set of code to learn)
    // list1.sort(); 
    // display(list1);
    // REVERSING THE LIST (uncomment below set of code to learn)
    // list1.reverse();
    // display(list1);


    list<int> list2(3);     // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    display(list2);

    // MERGING LISTS (uncomment below set of code to learn)
    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1);

    // MERGING LISTS IN SORTED FORM 
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after sorting & merging: ";
    display(list1);

    
    return 0;
}