#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData(void)
    {
        cout << "The code of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr=&size;
    // int *ptr = new int[34];

    // Shop has 3 items:
    // 1. general store item
    // 2. veggies item
    // 3. hardware item
    ShopItem *ptr = new ShopItem[size]; // This pointer stores address of object of class Shop

    ShopItem *ptrTemp = ptr;

    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
    // After running for last item ptr goes to something beyond we know, so we create ptrTemp

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}