// ========================================== PURE VIRTUAL FUNCTION ==========================================
// If a virtual function defined in base class, there is no necessity of redefining it in the derived class, Means
// that if display function isn't found in Derived class, then being virtual it will run display of Base class
// But mai chahta hun ki ek aisa virtual function bna na jiska naya version aapko derived class mei bna na he pde

// =========================================== ABSTRACT BASE CLASS ===========================================
// Abstract base class is a class which has atleast 1 pure virtual function

// Abstract base class ek aisi class hai jiska maksat yeh hai ki hum bnayenge is se nayi classes aur fir unka
// kaam hoga, unke function wgera run honge

// Ab pointer toh aap bna skte ho iska aur point beshak CWHText or CWHVideo ko krvao, runtime polymorphism krao
// Lekin jo yeh display function hai, yeh khud run nhi hoga, yeh bss yeh kehra hai ki bhyii merko aage jaake
// override krdena (krna he pdega aapko)

// Abstract base class ka matlab hota hai ek aisi class jisko aap objects create krne ke liye use nhi kr skte
// Iska mtlb hota hai ki yeh design he ki gyi hai isliye ki aap is se aur classes inherit krein

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    // virtual void display() {}
    virtual void display() = 0; // do-nothing function --> Pure Virtual Function
    // Iske kehne ka matlab yeh hai ki koi aisi derived class nah bnjaye jo meri re-defination nah kre

    // NOTE : If pure virtual function is defined in base class, it is necesssry to redefine it in derived class
    // This means yeh class bani he isliye hai taaki iss se derive hoke aur classes bne

    // Ab pointer toh aap bna skte ho iska aur point beshak CWHText or CWHVideo ko krvao, runtime polymorphism krao
    // Lekin jo yeh display function hai, yeh khud run nhi hoga, yeh bss yeh kehra hai ki bhyii merko aage jaake
    // override krdena(krna he pdega aapko)
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWHVideo
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djvideo.display();
    // Now i'm gonna run the above method with pointer instead of directly

    // for CWHText
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djtext.display();
    // Now i'm gonna run the above method with pointer instead of directly

    // Creating 2 pointers
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    // Are calling their own bcoz we already declared display of Base class as virtual function

    return 0;
}